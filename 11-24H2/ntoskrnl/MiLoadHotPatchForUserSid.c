/*
 * XREFs of MiLoadHotPatchForUserSid @ 0x140A9F6C0
 * Callers:
 *     NtManageHotPatch @ 0x140AE7000 (NtManageHotPatch.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x14025FDD0 (RtlAvlInsertNodeEx.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     RtlHashBytes2 @ 0x1404331E0 (RtlHashBytes2.c)
 *     RtlLengthSid @ 0x140456300 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiAllocateHotPatchRecord @ 0x1407F0B60 (MiAllocateHotPatchRecord.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1407F24B4 (MiCompareUserSidHotPatchNodes.c)
 *     MiHotPatchAllProcesses @ 0x1407F2C54 (MiHotPatchAllProcesses.c)
 *     MiInsertHotPatchRecord @ 0x1407F3340 (MiInsertHotPatchRecord.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     RtlCopySid @ 0x140910120 (RtlCopySid.c)
 *     MiOpenHotPatchFile @ 0x140A9FE3C (MiOpenHotPatchFile.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadHotPatchForUserSid(const void **a1, _QWORD *a2, _DWORD *a3)
{
  bool v3; // r12
  _DWORD *v4; // r15
  int inserted; // edi
  void *HotPatchRecord; // r14
  struct _KTHREAD *CurrentThread; // rsi
  ULONG v10; // ebx
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  int v14; // eax
  _QWORD *v15; // rax
  _QWORD *Pool; // rax
  _QWORD *v17; // r15
  __int64 v18; // rdx
  bool v19; // zf
  ULONG v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ebx
  int v24; // edi
  unsigned int v26; // [rsp+48h] [rbp-29h] BYREF
  ULONG DestinationSidLength; // [rsp+4Ch] [rbp-25h]
  ULONG v28; // [rsp+50h] [rbp-21h]
  PVOID Object; // [rsp+58h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-11h] BYREF
  __int128 v31; // [rsp+68h] [rbp-9h] BYREF
  __int64 v32; // [rsp+78h] [rbp+7h]
  int v33; // [rsp+80h] [rbp+Fh]
  _DWORD *v34; // [rsp+88h] [rbp+17h]
  _QWORD v35[2]; // [rsp+90h] [rbp+1Fh] BYREF

  v34 = a3;
  v3 = 0;
  v32 = 0LL;
  v33 = 0;
  v26 = 0;
  v4 = a3;
  Handle = 0LL;
  Object = 0LL;
  v31 = 0LL;
  inserted = MiOpenHotPatchFile(
               (_DWORD)a1,
               1,
               0,
               (unsigned int)&Handle,
               (__int64)&Object,
               0LL,
               (__int64)&v31,
               (__int64)&v26);
  if ( inserted >= 0 )
  {
    HotPatchRecord = (void *)MiAllocateHotPatchRecord(v31, SDWORD1(v31), v33, a1, v26);
    if ( !HotPatchRecord )
    {
      inserted = -1073741670;
      goto LABEL_33;
    }
    CurrentThread = KeGetCurrentThread();
    v10 = RtlLengthSid(a2);
    DestinationSidLength = v10;
    v35[0] = RtlHashBytes2(a2, v10, 0LL);
    v35[1] = a2;
    v28 = v10 + 40;
    --CurrentThread->SpecialApcDisable;
    v11 = KeAbPreAcquire((__int64)&qword_140E37490, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E37490, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140E37490, (__int64)v11, (__int64)&qword_140E37490);
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
    v13 = (_QWORD *)qword_140E37470;
    if ( qword_140E37470 )
    {
      while ( 1 )
      {
        v14 = MiCompareUserSidHotPatchNodes(v35, (__int64)v13);
        if ( v14 <= 0 )
        {
          if ( v14 >= 0 )
            goto LABEL_23;
          v15 = (_QWORD *)*v13;
          if ( !*v13 )
            break;
        }
        else
        {
          v15 = (_QWORD *)v13[1];
          if ( !v15 )
          {
            v3 = 1;
            break;
          }
        }
        v13 = v15;
      }
    }
    Pool = (_QWORD *)MiAllocatePool(0x100uLL, v28, 1934126413);
    v17 = Pool;
    if ( !Pool )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E37490, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E37490);
      KeAbPostRelease((ULONG_PTR)&qword_140E37490);
      v19 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v19
        && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(1LL, v18);
      }
      inserted = -1073741670;
LABEL_32:
      ExFreePoolWithTag(HotPatchRecord, 0);
      goto LABEL_33;
    }
    Pool[3] = 0LL;
    v20 = DestinationSidLength;
    Pool[4] = v35[0];
    RtlCopySid(v20, Pool + 5, a2);
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E37470, (unsigned __int64)v13, v3, v17);
    v13 = v17;
    v4 = v34;
LABEL_23:
    inserted = MiInsertHotPatchRecord(v13 + 3, (__int64)HotPatchRecord, 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E37490, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E37490);
    KeAbPostRelease((ULONG_PTR)&qword_140E37490);
    v19 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v19 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v22, v21);
    if ( inserted < 0 )
      goto LABEL_32;
    v23 = v31;
    v19 = inserted == 255;
    v24 = DWORD1(v31);
    if ( !v19 )
      HotPatchRecord = 0LL;
    MiHotPatchAllProcesses(v31, DWORD1(v31), v26);
    *v4 = v23;
    v4[1] = v24;
    inserted = 0;
    if ( HotPatchRecord )
      goto LABEL_32;
  }
LABEL_33:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x70486D4Du);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)inserted;
}
