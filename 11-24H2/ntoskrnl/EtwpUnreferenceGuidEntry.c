/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x14083D760
 * Callers:
 *     NtTraceEvent @ 0x140325D10 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x1404AE5E0 (EtwGetProviderIdFromHandle.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407ADA30 (SendCaptureStateNotificationsWorker.c)
 *     EtwpGetTraceGroupInfo @ 0x140833E70 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGuidInfo @ 0x1408356A0 (EtwpGetTraceGuidInfo.c)
 *     EtwpNotifyGuid @ 0x140836EE4 (EtwpNotifyGuid.c)
 *     EtwpAddGuidEntry @ 0x140838B30 (EtwpAddGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x140839260 (EtwpAddRegEntryToGroup.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14083ACCC (EtwpFindOrCreateGuidEntry.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x14083C380 (EtwpDeleteRegistrationObject.c)
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     EtwpGetGuidList @ 0x14083D340 (EtwpGetGuidList.c)
 *     EtwpGetNextGuidEntry @ 0x14083D5B0 (EtwpGetNextGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x14083E7D4 (EtwpFreeGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x14083ECD8 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1409F39DC (EtwpUpdateGuidEnableInfo.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409F6160 (EtwpNotifyDisallowedGuidChange.c)
 *     EtwUnregister @ 0x140A00060 (EtwUnregister.c)
 *     EtwpRegisterKMProvider @ 0x140A57524 (EtwpRegisterKMProvider.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x14083E7D4 (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpUnreferenceGuidEntry(__int64 *BugCheckParameter2)
{
  __int64 v2; // rdi
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v6; // r10d
  unsigned __int64 *v7; // rbp
  _QWORD *v8; // rax
  _QWORD *v9; // r14
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
    v8 = KeAbPreAcquire((__int64)v7, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, (__int64)v8, (__int64)v7);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
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
