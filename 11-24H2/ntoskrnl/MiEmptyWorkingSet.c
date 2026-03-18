/*
 * XREFs of MiEmptyWorkingSet @ 0x140404B7C
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A4C914 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x140404B98 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, __int64 a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL, -1LL);
}
