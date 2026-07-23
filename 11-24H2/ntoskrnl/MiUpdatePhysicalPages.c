/*
 * XREFs of MiUpdatePhysicalPages @ 0x14068CB8C
 * Callers:
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x14066F268 (MiPerformMemoryChange.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall MiUpdatePhysicalPages(__int64 a1, __int64 a2, int a3)
{
  volatile LONG *v3; // rdi
  KIRQL result; // al

  v3 = (volatile LONG *)(a1 + 200);
  if ( a3 )
    result = ExAcquireSpinLockExclusive(v3);
  else
    result = 17;
  *(_QWORD *)(a1 + 18512) += a2;
  *(_BYTE *)(a1 + 12) = 1;
  if ( result != 17 )
    return MiReleaseSpinLockExclusive(v3, result);
  return result;
}
