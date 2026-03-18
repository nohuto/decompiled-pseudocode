/*
 * XREFs of ACPICMLidStart @ 0x14009C230
 * Callers:
 *     <none>
 * Callees:
 *     ACPICMButtonStart @ 0x14009C064 (ACPICMButtonStart.c)
 */

__int64 __fastcall ACPICMLidStart(ULONG_PTR a1, __int64 a2)
{
  return ACPICMButtonStart(a1, a2, 4);
}
