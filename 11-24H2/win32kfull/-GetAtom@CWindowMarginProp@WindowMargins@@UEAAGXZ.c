/*
 * XREFs of ?GetAtom@CWindowMarginProp@WindowMargins@@UEAAGXZ @ 0x1401CD260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowMargins::CWindowMarginProp::GetAtom(WindowMargins::CWindowMarginProp *this, __int64 a2)
{
  return *(unsigned __int16 *)(W32GetUserSessionState(this, a2) + 42312);
}
