/*
 * XREFs of ?GetAtom@CHwndBitmapProp@@MEAAGXZ @ 0x1402E98C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndBitmapProp::GetAtom(CHwndBitmapProp *this, __int64 a2)
{
  return *(unsigned __int16 *)(W32GetUserSessionState(this, a2) + 42310);
}
