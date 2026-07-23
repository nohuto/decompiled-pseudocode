/*
 * XREFs of MiDeleteDeleteOnCloseSubsections @ 0x140673338
 * Callers:
 *     MiProcessDeleteOnClose @ 0x14067374C (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiDeleteCachedSubsection @ 0x140204084 (MiDeleteCachedSubsection.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedSubsection @ 0x140338CE4 (MiUnlinkUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiDeleteDeleteOnCloseSubsections(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rdi
  KIRQL v5; // si
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 *v8; // r14
  __int64 v9; // rdx

  v2 = (volatile LONG *)(a1 + 1728);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
  v6 = (_QWORD *)(a1 + 1992);
  while ( 1 )
  {
    v7 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    v8 = v7 - 11;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(*(v7 - 11) + 72LL)) )
    {
      MiUnlinkUnusedSubsection((__int64)v8);
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      LOBYTE(v9) = v5;
      MiDeleteCachedSubsection(v8, v9, a2);
    }
    else
    {
      MiReleaseSpinLockExclusive(v2, v5);
    }
    ExAcquireSpinLockExclusive(v2);
  }
  return MiReleaseSpinLockExclusive(v2, v5);
}
