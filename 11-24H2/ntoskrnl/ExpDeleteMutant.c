/*
 * XREFs of ExpDeleteMutant @ 0x14041BA30
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteMutant @ 0x14041BA48 (KeDeleteMutant.c)
 */

__int64 __fastcall ExpDeleteMutant(ULONG_PTR a1)
{
  return KeDeleteMutant(a1);
}
