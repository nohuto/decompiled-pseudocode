/*
 * XREFs of EtwpFindGuidEntryByGuid @ 0x14083AEE0
 * Callers:
 *     NtTraceEvent @ 0x140325D10 (NtTraceEvent.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407ADA30 (SendCaptureStateNotificationsWorker.c)
 *     EtwpBufferingModeFlush @ 0x140832840 (EtwpBufferingModeFlush.c)
 *     EtwpGetTraceGroupInfo @ 0x140833E70 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGuidInfo @ 0x1408356A0 (EtwpGetTraceGuidInfo.c)
 *     EtwpNotifyGuid @ 0x140836EE4 (EtwpNotifyGuid.c)
 *     EtwpAddGuidEntry @ 0x140838B30 (EtwpAddGuidEntry.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409F6160 (EtwpNotifyDisallowedGuidChange.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     EtwpReferenceGuidEntry @ 0x14083AFE0 (EtwpReferenceGuidEntry.c)
 */

_QWORD *__fastcall EtwpFindGuidEntryByGuid(__int64 a1, _DWORD *a2, unsigned int a3)
{
  _QWORD *v4; // r14
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v7; // rsi
  signed __int64 *v8; // rbp
  _QWORD *v9; // rbx
  _QWORD *i; // rbx
  __int64 v11; // rax

  v4 = 0LL;
  v5 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 720;
  CurrentThread = KeGetCurrentThread();
  v7 = (_QWORD **)(v5 + 16LL * a3);
  --CurrentThread->KernelApcDisable;
  v8 = (signed __int64 *)(v5 + 48);
  v9 = KeAbPreAcquire(v5 + 48, 0LL);
  if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v8, 0, v9, (__int64)v8);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  for ( i = *v7; i != v7; i = (_QWORD *)*i )
  {
    v11 = *(_QWORD *)a2 - i[5];
    if ( *(_QWORD *)a2 == i[5] )
      v11 = *((_QWORD *)a2 + 1) - i[6];
    if ( !v11 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)i) )
    {
      v4 = i;
      break;
    }
  }
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegionThread();
  return v4;
}
