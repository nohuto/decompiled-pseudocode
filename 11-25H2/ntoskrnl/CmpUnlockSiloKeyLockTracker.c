/*
 * XREFs of CmpUnlockSiloKeyLockTracker @ 0x140A82D94
 * Callers:
 *     CmInitServerSiloState @ 0x1407C63E4 (CmInitServerSiloState.c)
 *     CmLockKeyForWrite @ 0x1409E3164 (CmLockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A82CB8 (CmpStopSiloKeyLockTracker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 */

void __fastcall CmpUnlockSiloKeyLockTracker(signed __int64 *BugCheckParameter2)
{
  signed __int64 v2; // rax
  unsigned __int64 v3; // rdx
  signed __int64 v4; // rcx

  _m_prefetchw(BugCheckParameter2);
  v2 = *BugCheckParameter2;
  v3 = *BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = *BugCheckParameter2 - 16;
  if ( v3 <= 0x10 )
    v4 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64(BugCheckParameter2, v4, v2) )
    ExfReleasePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
}
