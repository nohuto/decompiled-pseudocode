/*
 * XREFs of EtwpStopLoggerInstance @ 0x1409D3C74
 * Callers:
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x1409D2184 (EtwpStopTrace.c)
 *     EtwpLogger @ 0x1409D33F0 (EtwpLogger.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExCancelTimer @ 0x1403AF1B0 (ExCancelTimer.c)
 *     EtwpStackRundown @ 0x1403DEAE4 (EtwpStackRundown.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x1409D108C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpSendSessionNotification @ 0x1409D4E48 (EtwpSendSessionNotification.c)
 *     EtwpDisableTraceProviders @ 0x140A0F8B4 (EtwpDisableTraceProviders.c)
 *     EtwpLogPmcCounterRundown @ 0x140A7871C (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // r14d
  int v4; // r8d
  __int64 v5; // r13
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v7; // rdi
  char *v8; // rax
  char *v9; // r15
  __int64 v10; // r12
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  signed __int64 v13; // rtt
  __int64 v15; // rax
  ULONG_PTR v16; // rcx
  __int64 v17; // rcx
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+44h] [rbp-C4h] BYREF
  int v22; // [rsp+48h] [rbp-C0h] BYREF
  int v23; // [rsp+4Ch] [rbp-BCh] BYREF
  int v24; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v29; // [rsp+88h] [rbp-80h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  int *v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  int *v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  int *v35; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  int *v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  int *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  int *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  int *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  int *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  __int64 *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  char *v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]

  v1 = *(_QWORD *)(a1 + 1360);
  _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x40u);
  v3 = 0;
  if ( *(int *)(a1 + 1024) > 0
    && (unsigned int)dword_140E09198 > 5
    && tlgKeywordOn((__int64)&dword_140E09198, 0x200000000000LL) )
  {
    v18 = v4;
    v29 = &v27;
    v27 = 0x1000000LL;
    v31 = &v18;
    v19 = *(_DWORD *)(a1 + 1000);
    v30 = 8LL;
    v33 = &v19;
    v20 = *(_DWORD *)(a1 + 1004);
    v35 = &v20;
    v21 = *(_DWORD *)(a1 + 1012);
    v37 = &v21;
    v22 = *(_DWORD *)(a1 + 1028);
    v39 = &v22;
    v23 = dword_140E28FD4;
    v41 = &v23;
    v24 = dword_140E28FD8;
    v43 = &v24;
    v25 = dword_140E28FDC;
    v45 = &v25;
    v26 = qword_140E28FE0;
    v47 = &v26;
    v49 = (char *)&v26 + 4;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E09198,
      (unsigned __int8 *)&dword_140052D44,
      0LL,
      0LL,
      0xDu,
      &v28);
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 )
    EtwpUpdateLoggerGroupMasks(a1, 0LL);
  if ( (*(_DWORD *)(a1 + 816) & 0x20) == 0 )
    EtwpDisableTraceProviders(v1, *(unsigned int *)a1);
  if ( (*(_DWORD *)(a1 + 816) & 0x4000) != 0 )
  {
    while ( 1 )
    {
      v5 = v1 + 2LL * v3;
      if ( *(unsigned __int16 *)(v5 + 4304) == *(_DWORD *)a1 )
        break;
      if ( ++v3 >= 0x10 )
        goto LABEL_23;
    }
    CurrentThread = KeGetCurrentThread();
    v7 = (signed __int64 *)(v1 + 688);
    --CurrentThread->KernelApcDisable;
    v8 = (char *)KeAbPreAcquire(v1 + 688, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 688), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 688), v8, v1 + 688);
    if ( v9 )
      v9[10] = 1;
    v10 = 32LL * v3;
    *(_WORD *)(v1 + 4336) &= ~(1 << v3);
    *(_OWORD *)(v10 + v1 + 152) = 0LL;
    *(_OWORD *)(v10 + v1 + 168) = 0LL;
    *(_WORD *)(v5 + 4304) = 0;
    *(_QWORD *)(v1 + 696) = 0LL;
    _m_prefetchw(v7);
    v11 = *v7;
    v12 = *v7 - 16;
    if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v12 = 0LL;
    if ( (v11 & 2) != 0 || (v13 = *v7, v13 != _InterlockedCompareExchange64(v7, v12, v11)) )
      ExfReleasePushLock((_QWORD *)(v1 + 688));
    KeAbPostRelease(v1 + 688);
    KeLeaveCriticalRegion();
  }
LABEL_23:
  if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 816) & 0x800) != 0 )
      EtwpLogPmcCounterRundown(a1, *(unsigned int *)a1);
    if ( (*(_DWORD *)(a1 + 816) & 0x1000000) != 0 )
      EtwpStackRundown(*(_QWORD *)(a1 + 1056), v1, *(_DWORD *)a1);
  }
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 320), 0) )
    return 2147483685LL;
  v15 = *(_QWORD *)(a1 + 1344);
  if ( v15 )
  {
    v16 = *(_QWORD *)(v15 + 8);
    if ( v16 )
      ExCancelTimer(v16, 0LL);
  }
  v17 = *(unsigned int *)a1;
  *(_QWORD *)(*(_QWORD *)(v1 + 712) + 8 * v17) = a1 | 1;
  if ( KeGetEffectiveIrql(v17, a1 | 1) > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
  }
  EtwpSendSessionNotification(a1, 2LL);
  return 0LL;
}
