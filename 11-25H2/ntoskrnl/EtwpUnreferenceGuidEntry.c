/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x14089E370
 * Callers:
 *     NtTraceEvent @ 0x14030A680 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x1404AD640 (EtwGetProviderIdFromHandle.c)
 *     SendCaptureStateNotificationsWorker @ 0x14079E660 (SendCaptureStateNotificationsWorker.c)
 *     EtwpGetTraceGroupInfo @ 0x140894910 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGuidInfo @ 0x140896060 (EtwpGetTraceGuidInfo.c)
 *     EtwpNotifyGuid @ 0x140897964 (EtwpNotifyGuid.c)
 *     EtwpAddGuidEntry @ 0x1408995E0 (EtwpAddGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x140899D60 (EtwpAddRegEntryToGroup.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14089B79C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x14089CEA0 (EtwpDeleteRegistrationObject.c)
 *     EtwpFreeGuidEntry @ 0x14089D208 (EtwpFreeGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     EtwpGetGuidList @ 0x14089DF60 (EtwpGetGuidList.c)
 *     EtwpGetNextGuidEntry @ 0x14089E1C0 (EtwpGetNextGuidEntry.c)
 *     EtwpRegisterKMProvider @ 0x1408B74C4 (EtwpRegisterKMProvider.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1409E471C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1409E53C0 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409EED94 (EtwpNotifyDisallowedGuidChange.c)
 *     EtwUnregister @ 0x140A01CC0 (EtwUnregister.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x14089D208 (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpUnreferenceGuidEntry(volatile signed __int64 *P)
{
  __int64 v2; // rdi
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v6; // r10d
  unsigned __int64 *v7; // rbp
  __int64 *v8; // rax
  __int64 *v9; // r14
  volatile signed __int64 v10; // rcx
  PVOID *v11; // rax

  v2 = _InterlockedDecrement64(P + 4);
  if ( v2 )
  {
    if ( v2 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)P, 0LL, 0LL);
  }
  else
  {
    v4 = *((_QWORD *)P + 49);
    CurrentThread = KeGetCurrentThread();
    v6 = *((_DWORD *)P + 11) ^ *((_DWORD *)P + 12) ^ *((_DWORD *)P + 13) ^ *((_DWORD *)P + 10);
    --CurrentThread->KernelApcDisable;
    v7 = (unsigned __int64 *)(v4 + 512 + 56LL * (v6 & 0x3F));
    v8 = KeAbPreAcquire((__int64)v7, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    v10 = *P;
    if ( *(volatile signed __int64 **)(*P + 8) != P || (v11 = (PVOID *)*((_QWORD *)P + 1), *v11 != P) )
      __fastfail(3u);
    *v11 = (PVOID)v10;
    *(_QWORD *)(v10 + 8) = v11;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    EtwpFreeGuidEntry((char *)P);
  }
  return v2;
}
