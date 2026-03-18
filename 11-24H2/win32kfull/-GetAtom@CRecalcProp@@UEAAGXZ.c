/*
 * XREFs of ?GetAtom@CRecalcProp@@UEAAGXZ @ 0x140201CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRecalcProp::GetAtom(CRecalcProp *this, __int64 a2)
{
  return *(unsigned __int16 *)(W32GetUserSessionState(this, a2) + 42314);
}
