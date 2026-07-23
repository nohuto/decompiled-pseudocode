/*
 * XREFs of FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403CB79C
 * Callers:
 *     FsRtlpOplockCleanup @ 0x1403CDA80 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403CF664 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404DAE94 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404DB6D0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14057DFDC (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x14057E780 (FsRtlpOplockBreakToNone.c)
 *     FsRtlCheckUpperOplock @ 0x140708AB0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall FsRtlpRemoveAndCompleteReadOnlyIrp(_QWORD *a1, int a2, unsigned int a3, __int64 a4)
{
  int v6; // ebx
  IRP *v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rcx
  _QWORD *v12; // rax
  BOOLEAN Cancel; // al
  __int64 v14; // rcx
  struct _IRP *MasterIrp; // rax
  int v16; // [rsp+38h] [rbp-59h] BYREF
  int v17; // [rsp+3Ch] [rbp-55h] BYREF
  int v18; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20[2]; // [rsp+58h] [rbp-39h] BYREF
  int *v21; // [rsp+78h] [rbp-19h]
  __int64 v22; // [rsp+80h] [rbp-11h]
  _QWORD *v23; // [rsp+88h] [rbp-9h]
  __int64 v24; // [rsp+90h] [rbp-1h]
  int *v25; // [rsp+98h] [rbp+7h]
  __int64 v26; // [rsp+A0h] [rbp+Fh]
  int *v27; // [rsp+A8h] [rbp+17h]
  __int64 v28; // [rsp+B0h] [rbp+1Fh]

  v6 = a2;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v18 = a2;
    v21 = &v18;
    v22 = 4LL;
    v23 = v19;
    v16 = *(_DWORD *)(a4 + 144);
    v19[0] = a4;
    v25 = &v16;
    v27 = &v17;
    v24 = 8LL;
    v26 = 4LL;
    v17 = a3;
    v28 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)byte_140044215, 0LL, 0LL, 6u, v20);
  }
  v9 = (IRP *)(a1 - 21);
  v10 = a1[2];
  ObfDereferenceObjectWithTag(*(PVOID *)(v10 + 48), 0x746C6644u);
  *((_BYTE *)a1 - 99) = KeAcquireQueuedSpinLock(7uLL);
  _InterlockedExchange64(a1 - 8, 0LL);
  KeReleaseQueuedSpinLock(7uLL, *((_BYTE *)a1 - 99));
  v11 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v12 = (_QWORD *)a1[1], (_QWORD *)*v12 != a1) )
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  Cancel = v9->Cancel;
  if ( *(_DWORD *)(v10 + 24) == 590400 )
  {
    if ( Cancel )
    {
      v6 = -1073741536;
      v14 = 0LL;
    }
    else
    {
      MasterIrp = v9->AssociatedIrp.MasterIrp;
      v14 = 24LL;
      *(PMDL *)((char *)&MasterIrp->MdlAddress + 4) = 0LL;
      *(&MasterIrp->Flags + 1) = 0;
      *(_DWORD *)&MasterIrp->Type = 1572865;
      *(_DWORD *)(&MasterIrp->Size + 1) = 1;
      LODWORD(MasterIrp->MdlAddress) = (a3 >> 12) & 7;
    }
  }
  else
  {
    v14 = 8LL;
    v6 = -1073741536;
    if ( !Cancel )
      v6 = a2;
  }
  v9->IoStatus.Information = v14;
  v9->IoStatus.Status = v6;
  IofCompleteRequest(v9, 1);
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v17 = v6;
    v21 = &v17;
    v22 = 4LL;
    v23 = v19;
    v16 = *(_DWORD *)(a4 + 144);
    v19[0] = a4;
    v25 = &v16;
    v24 = 8LL;
    v26 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)&byte_140044027, 0LL, 0LL, 5u, v20);
  }
}
