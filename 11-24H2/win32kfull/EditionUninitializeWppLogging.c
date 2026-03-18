/*
 * XREFs of EditionUninitializeWppLogging @ 0x1402ADAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionUninitializeWppLogging(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  result = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(result + 69416) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    imp_WppRecorderLogDelete(*(_QWORD *)&WPP_GLOBAL_Control, *(_QWORD *)(UserSessionState + 69416));
    result = W32GetUserSessionState(v7, v6);
    *(_QWORD *)(result + 69416) = 0LL;
  }
  return result;
}
