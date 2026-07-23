/*
 * XREFs of MiSplitDriverPage @ 0x1407E8628
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402394D0 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MmAcquireLoadLockShared @ 0x1402BBA64 (MmAcquireLoadLockShared.c)
 *     MiUnlockLoaderEntry @ 0x1402BBFE8 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402BC0A0 (MiLockLoaderEntry.c)
 *     MmReleaseLoadLockShared @ 0x1402BC170 (MmReleaseLoadLockShared.c)
 *     MiMakeDriverPagesPrivate @ 0x140429928 (MiMakeDriverPagesPrivate.c)
 *     MiGetBaseLoaderPortion @ 0x1404C96FC (MiGetBaseLoaderPortion.c)
 */

__int64 __fastcall MiSplitDriverPage(__int64 a1, __int64 a2)
{
  __int64 BaseLoaderPortion; // rax
  __int64 v5; // r8

  if ( (struct _KTHREAD *)qword_140E2D950 != KeGetCurrentThread() )
  {
    BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
    if ( *(_QWORD *)(BaseLoaderPortion + 240) != v5 )
      MmAcquireLoadLockShared();
  }
  return (unsigned int)MiMakeDriverPagesPrivate(a1, a2, a2, 0LL);
}
