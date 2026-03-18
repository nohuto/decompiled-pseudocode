/*
 * XREFs of MiEmptyWorkingSet @ 0x1403D931C
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A4A36C (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x1403D9338 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, __int64 a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL, -1LL);
}
