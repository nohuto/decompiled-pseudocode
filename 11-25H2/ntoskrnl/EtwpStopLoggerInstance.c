/*
 * XREFs of EtwpStopLoggerInstance @ 0x1409902C0
 * Callers:
 *     EtwpStopTrace @ 0x140892F28 (EtwpStopTrace.c)
 *     EtwpLogger @ 0x14098FA20 (EtwpLogger.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ExCancelTimer @ 0x14036FA70 (ExCancelTimer.c)
 *     EtwpStackRundown @ 0x1403F6164 (EtwpStackRundown.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwpSendSessionNotification @ 0x1409914E0 (EtwpSendSessionNotification.c)
 *     EtwpDisableTraceProviders @ 0x1409E45FC (EtwpDisableTraceProviders.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140A383EC (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpLogPmcCounterRundown @ 0x140A7BA54 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(unsigned __int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // r14d
  int v4; // r8d
  __int64 v5; // r13
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // r15
  __int64 v10; // r12
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  signed __int64 v13; // rtt
  __int64 v15; // rax
  ULONG_PTR v16; // rcx
  int v17; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v19; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+4Ch] [rbp-BCh] BYREF
  int v23; // [rsp+50h] [rbp-B8h] BYREF
  int v24; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-78h]
  int *v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  unsigned int *v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  unsigned int *v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  unsigned int *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  unsigned int *v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  int *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  int *v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  int *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  __int64 *v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  char *v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]

  v1 = *(_QWORD *)(a1 + 1360);
  _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x40u);
  v3 = 0;
  if ( *(int *)(a1 + 1024) > 0
    && (unsigned int)dword_140E09048 > 5
    && tlgKeywordOn((__int64)&dword_140E09048, 0x200000000000LL) )
  {
    v17 = v4;
    v28 = &v26;
    v26 = 0x1000000LL;
    v30 = &v17;
    v18 = *(_DWORD *)(a1 + 1000);
    v29 = 8LL;
    v32 = &v18;
    v19 = *(_DWORD *)(a1 + 1004);
    v34 = &v19;
    v20 = *(_DWORD *)(a1 + 1012);
    v36 = &v20;
    v21 = *(_DWORD *)(a1 + 1028);
    v38 = &v21;
    v22 = dword_140E28C54;
    v40 = &v22;
    v23 = dword_140E28C58;
    v42 = &v23;
    v24 = dword_140E28C5C;
    v44 = &v24;
    v25 = qword_140E28C60;
    v46 = &v25;
    v48 = (char *)&v25 + 4;
    v31 = 4LL;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E09048,
      (unsigned __int8 *)byte_140050E20,
      0LL,
      0LL,
      0xDu,
      &v27);
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
      if ( *(unsigned __int16 *)(v5 + 4048) == *(_DWORD *)a1 )
        break;
      if ( ++v3 >= 8 )
        goto LABEL_23;
    }
    CurrentThread = KeGetCurrentThread();
    v7 = (signed __int64 *)(v1 + 432);
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire(v1 + 432, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 432), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 432), v8, v1 + 432);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    v10 = 32LL * v3;
    *(_BYTE *)(v1 + 4064) &= ~(1 << v3);
    *(_OWORD *)(v10 + v1 + 152) = 0LL;
    *(_OWORD *)(v10 + v1 + 168) = 0LL;
    *(_WORD *)(v5 + 4048) = 0;
    *(_QWORD *)(v1 + 440) = 0LL;
    _m_prefetchw(v7);
    v11 = *v7;
    v12 = *v7 - 16;
    if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v12 = 0LL;
    if ( (v11 & 2) != 0 || (v13 = *v7, v13 != _InterlockedCompareExchange64(v7, v12, v11)) )
      ExfReleasePushLock((_QWORD *)(v1 + 432));
    KeAbPostRelease(v1 + 432);
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
  *(_QWORD *)(*(_QWORD *)(v1 + 456) + 8LL * *(unsigned int *)a1) = a1 | 1;
  if ( ObGetCurrentIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
  }
  EtwpSendSessionNotification(a1, 2LL, 0LL);
  return 0LL;
}
