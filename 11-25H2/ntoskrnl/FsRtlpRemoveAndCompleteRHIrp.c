/*
 * XREFs of FsRtlpRemoveAndCompleteRHIrp @ 0x1404E51D4
 * Callers:
 *     FsRtlpCancelOplockRHIrp @ 0x14041B390 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlUninitializeOplock @ 0x1404E0790 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1CD0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1404E4B20 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E552C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E5DD0 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockEnqueueRH @ 0x140375544 (FsRtlpOplockEnqueueRH.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     FsRtlpOplockDequeueRH @ 0x14045A5B0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140465220 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047F2B8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404953E4 (FsRtlpOplockSendModernAppTermination.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057C46C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpFreeRHOpContext @ 0x14057D960 (FsRtlpFreeRHOpContext.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r14d
  char v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v28; // [rsp+34h] [rbp-C5h] BYREF
  int v29; // [rsp+38h] [rbp-C1h] BYREF
  int v30; // [rsp+3Ch] [rbp-BDh] BYREF
  unsigned int v31; // [rsp+40h] [rbp-B9h] BYREF
  int v32; // [rsp+44h] [rbp-B5h] BYREF
  int v33; // [rsp+48h] [rbp-B1h] BYREF
  int v34; // [rsp+4Ch] [rbp-ADh] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-A9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36[2]; // [rsp+60h] [rbp-99h] BYREF
  int *v37; // [rsp+80h] [rbp-79h]
  __int64 v38; // [rsp+88h] [rbp-71h]
  int *v39; // [rsp+90h] [rbp-69h]
  __int64 v40; // [rsp+98h] [rbp-61h]
  int *v41; // [rsp+A0h] [rbp-59h]
  __int64 v42; // [rsp+A8h] [rbp-51h]
  int *v43; // [rsp+B0h] [rbp-49h]
  __int64 v44; // [rsp+B8h] [rbp-41h]
  int *v45; // [rsp+C0h] [rbp-39h]
  __int64 v46; // [rsp+C8h] [rbp-31h]
  _QWORD *v47; // [rsp+D0h] [rbp-29h]
  __int64 v48; // [rsp+D8h] [rbp-21h]
  int *v49; // [rsp+E0h] [rbp-19h]
  __int64 v50; // [rsp+E8h] [rbp-11h]

  v8 = 0LL;
  v29 = a3;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v30 = a3;
    v37 = &v30;
    v31 = a4;
    v39 = (int *)&v31;
    v35[0] = a2;
    v41 = &v32;
    v33 = a6;
    v43 = &v33;
    v34 = a7;
    v45 = &v34;
    v47 = v35;
    v28 = *(_DWORD *)(a2 + 144);
    v49 = &v28;
    v38 = 4LL;
    v40 = 4LL;
    v32 = a5;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 8LL;
    v50 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)byte_140043BEB, 0LL, 0LL, 9u, v36);
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
    v22 = -1073741536;
    v23 = 0;
    ObfDereferenceObjectWithTag((PVOID)P[3], 0x746C6644u);
    if ( P[5] )
      FsRtlpClearOwner(a2, (__int64)P);
    if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v25, v24, v26) )
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
      FsRtlpModifyThreadPriorities(a2, (__int64)P, 1);
      FsRtlpOplockSendModernAppTermination(a2, (__int64)P);
    }
    else
    {
      ObfDereferenceObjectWithTag((PVOID)P[3], 0x746C6644u);
      if ( P[5] )
        FsRtlpClearOwner(a2, (__int64)P);
      if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v20, v19, v21) )
        v14 = 1;
      else
        ExFreePoolWithTag(P, 0);
    }
    v22 = v29;
    v23 = 1;
  }
  *(_QWORD *)(v12 + 56) = v8;
  if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v17, v16, v18) && v14 )
  {
    if ( a8 )
      P[11] = 0LL;
    FsRtlpFreeRHOpContext(P);
  }
  *(_DWORD *)(v12 + 48) = v22;
  IofCompleteRequest((PIRP)v12, 1);
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v29 = v22;
    v37 = &v29;
    v38 = 4LL;
    v39 = (int *)v35;
    v28 = *(_DWORD *)(a2 + 144);
    v35[0] = a2;
    v41 = &v28;
    v40 = 8LL;
    v42 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)&qword_140043B90, 0LL, 0LL, 5u, v36);
  }
  return v23;
}
