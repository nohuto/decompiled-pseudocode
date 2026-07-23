/*
 * XREFs of MiEmptyWorkingSet @ 0x1403C9014
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A434A4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x1403C9030 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, __int64 a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL, -1LL);
}
