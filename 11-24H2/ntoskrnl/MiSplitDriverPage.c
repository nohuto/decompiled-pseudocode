/*
 * XREFs of MiSplitDriverPage @ 0x1407E8058
 * Callers:
 *     MiProbeLeafPteAccess @ 0x140283F40 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MmAcquireLoadLockShared @ 0x1402C6EE4 (MmAcquireLoadLockShared.c)
 *     MiUnlockLoaderEntry @ 0x1402C7468 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402C7520 (MiLockLoaderEntry.c)
 *     MmReleaseLoadLockShared @ 0x1402C75F0 (MmReleaseLoadLockShared.c)
 *     MiMakeDriverPagesPrivate @ 0x140436EA8 (MiMakeDriverPagesPrivate.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0508 (MiGetBaseLoaderPortion.c)
 */

__int64 __fastcall MiSplitDriverPage(__int64 a1, volatile signed __int64 *a2)
{
  __int64 BaseLoaderPortion; // rax
  __int64 v5; // r8

  if ( (struct _KTHREAD *)qword_140E2D810 != KeGetCurrentThread() )
  {
    BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
    if ( *(_QWORD *)(BaseLoaderPortion + 240) != v5 )
      MmAcquireLoadLockShared();
  }
  return (unsigned int)MiMakeDriverPagesPrivate(a1, a2, (unsigned __int64)a2, 0);
}
