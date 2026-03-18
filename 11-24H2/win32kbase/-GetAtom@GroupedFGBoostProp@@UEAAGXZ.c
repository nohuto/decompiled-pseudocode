/*
 * XREFs of ?GetAtom@GroupedFGBoostProp@@UEAAGXZ @ 0x1401A23C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GroupedFGBoostProp::GetAtom(GroupedFGBoostProp *this)
{
  return *(unsigned __int16 *)(W32GetUserSessionState(this) + 42316);
}
