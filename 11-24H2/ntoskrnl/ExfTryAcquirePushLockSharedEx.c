/*
 * XREFs of ExfTryAcquirePushLockSharedEx @ 0x1404704C4
 * Callers:
 *     ExTryAcquirePushLockSharedEx @ 0x14031DB90 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140470270 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x140470394 (ExpTryAcquireFannedOutPushLockShared.c)
 *     PfLockSharedTryAcquire @ 0x140470440 (PfLockSharedTryAcquire.c)
 *     IopProcessIoTracking @ 0x140594600 (IopProcessIoTracking.c)
 *     DifExfTryAcquirePushLockSharedWrapper @ 0x1406204A0 (DifExfTryAcquirePushLockSharedWrapper.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140654750 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExfTryAcquirePushLockShared @ 0x140654810 (ExfTryAcquirePushLockShared.c)
 *     MiTryAcquirePushLockUnordered @ 0x14067679C (MiTryAcquirePushLockUnordered.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 * Callees:
 *     <none>
 */

char __fastcall ExfTryAcquirePushLockSharedEx(signed __int64 *a1, char a2)
{
  char v2; // r8
  char v4; // r11
  signed __int64 v5; // rax
  signed __int64 v6; // rcx
  signed __int64 v7; // rtt

  v2 = 0;
  if ( !ExpPushLockAllowImplicitUpgrade || (v4 = 1, (a2 & 4) != 0) )
    v4 = 0;
  _m_prefetchw(a1);
  v5 = *a1;
  while ( (v5 & 2) == 0 && ((v5 & 1) == 0 || (v5 & 0xFFFFFFFFFFFFFFF0uLL) != 0) || v4 && (v5 & 1) == 0 )
  {
    v6 = (v5 | 1) + 16;
    if ( (v5 & 2) != 0 )
      v6 = v5 | 1;
    v7 = v5;
    v5 = _InterlockedCompareExchange64(a1, v6, v5);
    if ( v7 == v5 )
      return 1;
  }
  return v2;
}
