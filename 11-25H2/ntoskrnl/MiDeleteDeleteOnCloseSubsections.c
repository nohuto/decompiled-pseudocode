/*
 * XREFs of MiDeleteDeleteOnCloseSubsections @ 0x1406666B8
 * Callers:
 *     MiProcessDeleteOnClose @ 0x140666ACC (MiProcessDeleteOnClose.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiUnlinkUnusedSubsection @ 0x14031F694 (MiUnlinkUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDeleteCachedSubsection @ 0x14033F8B4 (MiDeleteCachedSubsection.c)
 */

__int64 __fastcall MiDeleteDeleteOnCloseSubsections(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rdi
  KIRQL v5; // si
  _QWORD *v6; // rbx
  __int64 v7; // r14

  v2 = (volatile LONG *)(a1 + 1728);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
  v6 = (_QWORD *)(a1 + 1992);
  while ( (_QWORD *)*v6 != v6 )
  {
    v7 = *v6 - 88LL;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
    {
      MiUnlinkUnusedSubsection(v7);
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      MiDeleteCachedSubsection(v7, v5, a2);
    }
    else
    {
      MiReleaseSpinLockExclusive(v2, v5);
    }
    ExAcquireSpinLockExclusive(v2);
  }
  return MiReleaseSpinLockExclusive(v2, v5);
}
