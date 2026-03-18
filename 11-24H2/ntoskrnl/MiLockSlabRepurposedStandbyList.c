/*
 * XREFs of MiLockSlabRepurposedStandbyList @ 0x1406884A8
 * Callers:
 *     MiLockMemoryLists @ 0x1404B1210 (MiLockMemoryLists.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiLockSlabRepurposedStandbyList(__int64 a1, __int64 a2, int a3)
{
  volatile LONG *v3; // rcx

  v3 = (volatile LONG *)(*(_QWORD *)(a2 + 80) + 32LL);
  if ( a3 )
    ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  else
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  return 0LL;
}
