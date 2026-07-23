/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x140839DC0
 * Callers:
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x1404A8EF0 (EtwGetProviderIdFromHandle.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407ADE80 (SendCaptureStateNotificationsWorker.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1408332EC (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpNotifyGuid @ 0x140834644 (EtwpNotifyGuid.c)
 *     EtwpAddGuidEntry @ 0x1408367C0 (EtwpAddGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140837F48 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14083866C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpDeleteRegistrationObject @ 0x1408389E0 (EtwpDeleteRegistrationObject.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     EtwpGetGuidList @ 0x1408399A0 (EtwpGetGuidList.c)
 *     EtwpGetNextGuidEntry @ 0x140839C10 (EtwpGetNextGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x14083ADD4 (EtwpFreeGuidEntry.c)
 *     EtwpGetTraceGroupInfo @ 0x1409948E0 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGuidInfo @ 0x1409DD060 (EtwpGetTraceGuidInfo.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1409E7D3C (EtwpUpdateGuidEnableInfo.c)
 *     EtwpRegisterKMProvider @ 0x1409EA1C4 (EtwpRegisterKMProvider.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 *     EtwUnregister @ 0x140A52EC0 (EtwUnregister.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x14083ADD4 (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpUnreferenceGuidEntry(__int64 *BugCheckParameter2)
{
  __int64 v2; // rdi
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v6; // r10d
  unsigned __int64 *v7; // rbp
  char *v8; // rax
  char *v9; // r14
  __int64 *v10; // rcx
  __int64 **v11; // rax

  v2 = _InterlockedDecrement64(BugCheckParameter2 + 4);
  if ( v2 )
  {
    if ( v2 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    v4 = BugCheckParameter2[81];
    CurrentThread = KeGetCurrentThread();
    v6 = *((_DWORD *)BugCheckParameter2 + 11) ^ *((_DWORD *)BugCheckParameter2 + 12) ^ *((_DWORD *)BugCheckParameter2
                                                                                       + 13) ^ *((_DWORD *)BugCheckParameter2
                                                                                               + 10);
    --CurrentThread->KernelApcDisable;
    v7 = (unsigned __int64 *)(v4 + 768 + 56LL * (v6 & 0x3F));
    v8 = (char *)KeAbPreAcquire((__int64)v7, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
    if ( v9 )
      v9[10] = 1;
    v10 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v11 = (__int64 **)BugCheckParameter2[1], *v11 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
    *v11 = v10;
    v10[1] = (__int64)v11;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KeLeaveCriticalRegionThread();
    EtwpFreeGuidEntry(BugCheckParameter2);
  }
  return v2;
}
