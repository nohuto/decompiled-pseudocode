/*
 * XREFs of UnlockUpdatesForDwm @ 0x1401CF580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockUpdatesForDwm(__int64 a1)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1);
  *(_DWORD *)(result + 70820) = 0;
  return result;
}
