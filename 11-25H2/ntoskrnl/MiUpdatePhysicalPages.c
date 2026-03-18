/*
 * XREFs of MiUpdatePhysicalPages @ 0x1406801CC
 * Callers:
 *     MiInitializeDynamicPfns @ 0x140661D7C (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x140662554 (MiPerformMemoryChange.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
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
