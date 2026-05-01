/*
 * XREFs of ?v_IsRestricted@CTaskbandPin@@MEAAHXZ @ 0x180689D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTaskbandPin::v_IsRestricted(CTaskbandPin *this)
{
  return SHWindowsPolicy(&POLID_TaskbarNoPinnedList);
}
