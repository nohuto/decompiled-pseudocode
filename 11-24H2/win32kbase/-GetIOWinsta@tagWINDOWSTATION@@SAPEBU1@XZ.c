/*
 * XREFs of ?GetIOWinsta@tagWINDOWSTATION@@SAPEBU1@XZ @ 0x1401A7A90
 * Callers:
 *     ?GetPsProcessWindowState@tagPROCESSINFO@@QEBA?AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolicy@1@@Z @ 0x1401A521C (-GetPsProcessWindowState@tagPROCESSINFO@@QEBA-AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolic.c)
 *     ForegroundBoost::_anonymous_namespace_::IsBoostAllowed @ 0x1401AC410 (ForegroundBoost--_anonymous_namespace_--IsBoostAllowed.c)
 * Callees:
 *     <none>
 */

const struct tagWINDOWSTATION *__fastcall tagWINDOWSTATION::GetIOWinsta(__int64 a1)
{
  __int64 v1; // rdx
  const struct tagWINDOWSTATION *result; // rax

  v1 = *(_QWORD *)(W32GetUserSessionState(a1) + 63560);
  result = 0LL;
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 64) & 4) == 0 )
      return (const struct tagWINDOWSTATION *)v1;
  }
  return result;
}
