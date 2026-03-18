/*
 * XREFs of MiDeleteDeleteOnCloseSubsections @ 0x140672168
 * Callers:
 *     MiProcessDeleteOnClose @ 0x14067257C (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiUnlinkUnusedSubsection @ 0x14020F984 (MiUnlinkUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDeleteCachedSubsection @ 0x14023C35C (MiDeleteCachedSubsection.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiDeleteDeleteOnCloseSubsections(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rdi
  KIRQL v5; // si
  _QWORD *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rdx

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
      LOBYTE(v8) = v5;
      MiDeleteCachedSubsection(v7, v8, a2);
    }
    else
    {
      MiReleaseSpinLockExclusive(v2, v5);
    }
    ExAcquireSpinLockExclusive(v2);
  }
  return MiReleaseSpinLockExclusive(v2, v5);
}
