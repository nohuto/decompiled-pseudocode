/*
 * XREFs of FsRtlpRemoveAndCompleteRHIrp @ 0x1404DAB70
 * Callers:
 *     FsRtlpOplockCleanup @ 0x1403CDA80 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403CF664 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140408EA0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlUninitializeOplock @ 0x1404D98A0 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404DAE94 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404DB6D0 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402907B4 (FsRtlpClearOwner.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpOplockEnqueueRH @ 0x1402E2018 (FsRtlpOplockEnqueueRH.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     FsRtlpOplockDequeueRH @ 0x14044E644 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047A8E8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x14048F158 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpFreeRHOpContext @ 0x14057E1A0 (FsRtlpFreeRHOpContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall FsRtlpRemoveAndCompleteRHIrp(
        _QWORD *P,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        char a8)
{
  __int64 v8; // r13
  int v9; // r12d
  __int64 v12; // rsi
  char v13; // r14
  __int64 v14; // rcx
  unsigned int v15; // edx
  int v16; // eax
  char v17; // r15
  int v19; // [rsp+34h] [rbp-C5h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-C1h] BYREF
  int v21; // [rsp+3Ch] [rbp-BDh] BYREF
  unsigned int v22; // [rsp+40h] [rbp-B9h] BYREF
  int v23; // [rsp+44h] [rbp-B5h] BYREF
  int v24; // [rsp+48h] [rbp-B1h] BYREF
  int v25; // [rsp+4Ch] [rbp-ADh] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-A9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27[2]; // [rsp+60h] [rbp-99h] BYREF
  unsigned int *v28; // [rsp+80h] [rbp-79h]
  __int64 v29; // [rsp+88h] [rbp-71h]
  unsigned int *v30; // [rsp+90h] [rbp-69h]
  __int64 v31; // [rsp+98h] [rbp-61h]
  int *v32; // [rsp+A0h] [rbp-59h]
  __int64 v33; // [rsp+A8h] [rbp-51h]
  int *v34; // [rsp+B0h] [rbp-49h]
  __int64 v35; // [rsp+B8h] [rbp-41h]
  int *v36; // [rsp+C0h] [rbp-39h]
  __int64 v37; // [rsp+C8h] [rbp-31h]
  _QWORD *v38; // [rsp+D0h] [rbp-29h]
  __int64 v39; // [rsp+D8h] [rbp-21h]
  int *v40; // [rsp+E0h] [rbp-19h]
  __int64 v41; // [rsp+E8h] [rbp-11h]

  v8 = 0LL;
  v20 = a4;
  v9 = a3;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v22 = a4;
    v21 = a3;
    v30 = &v22;
    v28 = (unsigned int *)&v21;
    v32 = &v23;
    v24 = a6;
    v34 = &v24;
    v25 = a7;
    v36 = &v25;
    v38 = v26;
    v19 = *(_DWORD *)(a2 + 144);
    v40 = &v19;
    v26[0] = a2;
    v29 = 4LL;
    v31 = 4LL;
    v23 = a5;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 4LL;
    v39 = 8LL;
    v41 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)&byte_140043F97, 0LL, 0LL, 9u, v27);
  }
  v12 = P[2];
  P[2] = 0LL;
  *(_BYTE *)(v12 + 69) = KeAcquireQueuedSpinLock(7uLL);
  _InterlockedExchange64((volatile __int64 *)(v12 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v12 + 69));
  FsRtlpOplockDequeueRH((__int64)P);
  v13 = 0;
  if ( *(_BYTE *)(v12 + 68) )
  {
    v9 = -1073741536;
    v17 = 0;
    ObfDereferenceObjectWithTag((PVOID)P[3], 0x746C6644u);
    if ( P[5] )
      FsRtlpClearOwner(a2, (__int64)P);
    v13 = 1;
  }
  else
  {
    v14 = *(_QWORD *)(v12 + 24);
    *(_QWORD *)(v14 + 16) = 0LL;
    v8 = 24LL;
    v15 = v20;
    v16 = (v20 >> 12) & 7;
    *(_DWORD *)v14 = 1572865;
    *(_DWORD *)(v14 + 4) = 3;
    *(_DWORD *)(v14 + 8) = v16;
    *(_DWORD *)(v14 + 12) = a5;
    if ( (a5 & 2) != 0 )
    {
      *(_DWORD *)(v14 + 16) = a6;
      *(_WORD *)(v14 + 20) = a7;
    }
    if ( (a5 & 1) != 0 )
    {
      *((_DWORD *)P + 12) = P[6] & 0xFF0FFFFF | (v15 != 0 ? 0x100000 : 0x800000);
      FsRtlpOplockEnqueueRH((__int64 *)(a2 + 72), P);
      FsRtlpModifyThreadPriorities(a2, (__int64)P, 1);
      FsRtlpOplockSendModernAppTermination(a2, (__int64)P);
    }
    else
    {
      ObfDereferenceObjectWithTag((PVOID)P[3], 0x746C6644u);
      if ( P[5] )
        FsRtlpClearOwner(a2, (__int64)P);
      v13 = 1;
    }
    v17 = 1;
  }
  *(_QWORD *)(v12 + 56) = v8;
  if ( v13 )
  {
    if ( a8 )
      P[11] = 0LL;
    FsRtlpFreeRHOpContext(P);
  }
  *(_DWORD *)(v12 + 48) = v9;
  IofCompleteRequest((PIRP)v12, 1);
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v20 = v9;
    v28 = &v20;
    v29 = 4LL;
    v30 = (unsigned int *)v26;
    v19 = *(_DWORD *)(a2 + 144);
    v26[0] = a2;
    v32 = &v19;
    v31 = 8LL;
    v33 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)&byte_1400440D7, 0LL, 0LL, 5u, v27);
  }
  return v17;
}
