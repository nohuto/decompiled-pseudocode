/*
 * XREFs of MiSplitDriverPage @ 0x1407D8198
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402ADF50 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MmAcquireLoadLockShared @ 0x14036DE84 (MmAcquireLoadLockShared.c)
 *     MiUnlockLoaderEntry @ 0x14036E408 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x14036E4C0 (MiLockLoaderEntry.c)
 *     MmReleaseLoadLockShared @ 0x14036E590 (MmReleaseLoadLockShared.c)
 *     MiMakeDriverPagesPrivate @ 0x1403F4388 (MiMakeDriverPagesPrivate.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0B80 (MiGetBaseLoaderPortion.c)
 */

__int64 __fastcall MiSplitDriverPage(__int64 a1, volatile signed __int64 *a2)
{
  __int64 BaseLoaderPortion; // rax
  __int64 v5; // r8

  if ( (struct _KTHREAD *)qword_140E2D5D0 != KeGetCurrentThread() )
  {
    BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
    if ( *(_QWORD *)(BaseLoaderPortion + 240) != v5 )
      MmAcquireLoadLockShared();
  }
  return (unsigned int)MiMakeDriverPagesPrivate(a1, a2, (unsigned __int64)a2, 0);
}
