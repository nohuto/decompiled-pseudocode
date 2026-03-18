/*
 * XREFs of EtwpStopLoggerInstance @ 0x1409D9164
 * Callers:
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x1408325A4 (EtwpStopTrace.c)
 *     EtwpLogger @ 0x1409D88E0 (EtwpLogger.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     EtwpStackRundown @ 0x14032ACF8 (EtwpStackRundown.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExCancelTimer @ 0x1403C05F0 (ExCancelTimer.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140830DF0 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpSendSessionNotification @ 0x1409DA338 (EtwpSendSessionNotification.c)
 *     EtwpDisableTraceProviders @ 0x140A166D4 (EtwpDisableTraceProviders.c)
 *     EtwpLogPmcCounterRundown @ 0x140A7EF6C (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // r14d
  int v4; // r8d
  __int64 v5; // r13
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // r15
  __int64 v10; // r12
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  signed __int64 v13; // rtt
  __int64 v15; // rax
  ULONG_PTR v16; // rcx
  int v17; // [rsp+38h] [rbp-D0h] BYREF
  int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  int v19; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+44h] [rbp-C4h] BYREF
  int v21; // [rsp+48h] [rbp-C0h] BYREF
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
  int *v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  int *v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  int *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  int *v38; // [rsp+D8h] [rbp-30h]
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
    && (unsigned int)dword_140E09128 > 5
    && tlgKeywordOn((__int64)&dword_140E09128, 0x200000000000LL) )
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
    v22 = dword_140E28E94;
    v40 = &v22;
    v23 = dword_140E28E98;
    v42 = &v23;
    v24 = dword_140E28E9C;
    v44 = &v24;
    v25 = qword_140E28EA0;
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
      (__int64)&dword_140E09128,
      (unsigned __int8 *)word_14005224A,
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
      if ( *(unsigned __int16 *)(v5 + 4304) == *(_DWORD *)a1 )
        break;
      if ( ++v3 >= 0x10 )
        goto LABEL_23;
    }
    CurrentThread = KeGetCurrentThread();
    v7 = (signed __int64 *)(v1 + 688);
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire(v1 + 688, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 688), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 688), (__int64)v8, v1 + 688);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
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
  *(_QWORD *)(*(_QWORD *)(v1 + 712) + 8LL * *(unsigned int *)a1) = a1 | 1;
  if ( KeGetEffectiveIrql() > 2u )
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
