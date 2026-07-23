/*
 * XREFs of EtwpFindGuidEntryByGuid @ 0x140838880
 * Callers:
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407ADE80 (SendCaptureStateNotificationsWorker.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1408332EC (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpNotifyGuid @ 0x140834644 (EtwpNotifyGuid.c)
 *     EtwpAddGuidEntry @ 0x1408367C0 (EtwpAddGuidEntry.c)
 *     EtwpGetTraceGroupInfo @ 0x1409948E0 (EtwpGetTraceGroupInfo.c)
 *     EtwpBufferingModeFlush @ 0x1409D2A94 (EtwpBufferingModeFlush.c)
 *     EtwpGetTraceGuidInfo @ 0x1409DD060 (EtwpGetTraceGuidInfo.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpReferenceGuidEntry @ 0x140838980 (EtwpReferenceGuidEntry.c)
 */

_QWORD *__fastcall EtwpFindGuidEntryByGuid(__int64 a1, _DWORD *a2, unsigned int a3)
{
  _QWORD *v4; // r14
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v7; // rsi
  signed __int64 *v8; // rbp
  char *v9; // rbx
  _QWORD *i; // rbx
  __int64 v11; // rax

  v4 = 0LL;
  v5 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 720;
  CurrentThread = KeGetCurrentThread();
  v7 = (_QWORD **)(v5 + 16LL * a3);
  --CurrentThread->KernelApcDisable;
  v8 = (signed __int64 *)(v5 + 48);
  v9 = (char *)KeAbPreAcquire(v5 + 48, 0LL);
  if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v8, 0, v9, (__int64)v8);
  if ( v9 )
    v9[10] = 1;
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
