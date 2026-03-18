/*
 * XREFs of FsRtlpRemoveAndCompleteRHIrp @ 0x1404E42B0
 * Callers:
 *     FsRtlpCancelOplockRHIrp @ 0x1404190F0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlUninitializeOplock @ 0x1404E0250 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1388 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1404E3BFC (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E4608 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E4EB0 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     FsRtlpOplockEnqueueRH @ 0x140247DCC (FsRtlpOplockEnqueueRH.c)
 *     FsRtlpClearOwner @ 0x1402601A4 (FsRtlpClearOwner.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     FsRtlpOplockDequeueRH @ 0x140459914 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047FCA8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404946C8 (FsRtlpOplockSendModernAppTermination.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057F78C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpFreeRHOpContext @ 0x140580D80 (FsRtlpFreeRHOpContext.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v12; // rsi
  __int64 v13; // rdx
  char v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // r14d
  char v20; // r12
  __int64 v21; // rcx
  int v23; // [rsp+34h] [rbp-C5h] BYREF
  int v24; // [rsp+38h] [rbp-C1h] BYREF
  int v25; // [rsp+3Ch] [rbp-BDh] BYREF
  unsigned int v26; // [rsp+40h] [rbp-B9h] BYREF
  int v27; // [rsp+44h] [rbp-B5h] BYREF
  int v28; // [rsp+48h] [rbp-B1h] BYREF
  int v29; // [rsp+4Ch] [rbp-ADh] BYREF
  _QWORD v30[2]; // [rsp+50h] [rbp-A9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31[2]; // [rsp+60h] [rbp-99h] BYREF
  int *v32; // [rsp+80h] [rbp-79h]
  __int64 v33; // [rsp+88h] [rbp-71h]
  int *v34; // [rsp+90h] [rbp-69h]
  __int64 v35; // [rsp+98h] [rbp-61h]
  int *v36; // [rsp+A0h] [rbp-59h]
  __int64 v37; // [rsp+A8h] [rbp-51h]
  int *v38; // [rsp+B0h] [rbp-49h]
  __int64 v39; // [rsp+B8h] [rbp-41h]
  int *v40; // [rsp+C0h] [rbp-39h]
  __int64 v41; // [rsp+C8h] [rbp-31h]
  _QWORD *v42; // [rsp+D0h] [rbp-29h]
  __int64 v43; // [rsp+D8h] [rbp-21h]
  int *v44; // [rsp+E0h] [rbp-19h]
  __int64 v45; // [rsp+E8h] [rbp-11h]

  v8 = 0LL;
  v24 = a3;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v25 = a3;
    v32 = &v25;
    v26 = a4;
    v34 = (int *)&v26;
    v30[0] = a2;
    v36 = &v27;
    v28 = a6;
    v38 = &v28;
    v29 = a7;
    v40 = &v29;
    v42 = v30;
    v23 = *(_DWORD *)(a2 + 144);
    v44 = &v23;
    v33 = 4LL;
    v35 = 4LL;
    v27 = a5;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 8LL;
    v45 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)byte_140043BFD, 0LL, 0LL, 9u, v31);
  }
  v12 = P[2];
  P[2] = 0LL;
  *(_BYTE *)(v12 + 69) = KeAcquireQueuedSpinLock(7uLL);
  _InterlockedExchange64((volatile __int64 *)(v12 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v12 + 69));
  FsRtlpOplockDequeueRH((__int64)P, v13);
  v14 = 0;
  if ( *(_BYTE *)(v12 + 68) )
  {
    v19 = -1073741536;
    v20 = 0;
    ObfDereferenceObjectWithTag((PVOID)P[3], 0x746C6644u);
    if ( P[5] )
      FsRtlpClearOwner(a2, (__int64)P);
    if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v21) )
      v14 = 1;
    else
      ExFreePoolWithTag(P, 0);
  }
  else
  {
    v15 = *(_QWORD *)(v12 + 24);
    *(_QWORD *)(v15 + 16) = 0LL;
    *(_DWORD *)v15 = 1572865;
    v8 = 24LL;
    *(_DWORD *)(v15 + 4) = 3;
    *(_DWORD *)(v15 + 8) = (a4 >> 12) & 7;
    *(_DWORD *)(v15 + 12) = a5;
    if ( (a5 & 2) != 0 )
    {
      *(_DWORD *)(v15 + 16) = a6;
      *(_WORD *)(v15 + 20) = a7;
    }
    if ( (a5 & 1) != 0 )
    {
      *((_DWORD *)P + 12) = P[6] & 0xFF0FFFFF | (a4 != 0 ? 0x100000 : 0x800000);
      FsRtlpOplockEnqueueRH((__int64 *)(a2 + 72), P);
      LOBYTE(v16) = 1;
      FsRtlpModifyThreadPriorities(a2, (__int64)P, v16);
      FsRtlpOplockSendModernAppTermination(a2, (__int64)P);
    }
    else
    {
      ObfDereferenceObjectWithTag((PVOID)P[3], 0x746C6644u);
      if ( P[5] )
        FsRtlpClearOwner(a2, (__int64)P);
      if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v18) )
        v14 = 1;
      else
        ExFreePoolWithTag(P, 0);
    }
    v19 = v24;
    v20 = 1;
  }
  *(_QWORD *)(v12 + 56) = v8;
  if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v17) && v14 )
  {
    if ( a8 )
      P[11] = 0LL;
    FsRtlpFreeRHOpContext(P);
  }
  *(_DWORD *)(v12 + 48) = v19;
  IofCompleteRequest((PIRP)v12, 1);
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v24 = v19;
    v32 = &v24;
    v33 = 4LL;
    v34 = (int *)v30;
    v23 = *(_DWORD *)(a2 + 144);
    v30[0] = a2;
    v36 = &v23;
    v35 = 8LL;
    v37 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)word_140043AF2, 0LL, 0LL, 5u, v31);
  }
  return v20;
}
