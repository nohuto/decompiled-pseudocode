/*
 * XREFs of ExpDeleteMutant @ 0x14040F570
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteMutant @ 0x14040F588 (KeDeleteMutant.c)
 */

__int64 __fastcall ExpDeleteMutant(ULONG_PTR a1)
{
  return KeDeleteMutant(a1);
}
