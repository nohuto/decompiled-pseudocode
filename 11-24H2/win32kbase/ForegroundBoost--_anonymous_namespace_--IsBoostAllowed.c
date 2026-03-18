/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::IsBoostAllowed @ 0x1401AC410
 * Callers:
 *     ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401AC43C (-LogProcessInformation@ForegroundBoost@@YAXXZ.c)
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy @ 0x1401ACAE4 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClassWithPolicy.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority @ 0x1401ACF94 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority.c)
 * Callees:
 *     ?GetIOWinsta@tagWINDOWSTATION@@SAPEBU1@XZ @ 0x1401A7A90 (-GetIOWinsta@tagWINDOWSTATION@@SAPEBU1@XZ.c)
 */

char __fastcall ForegroundBoost::_anonymous_namespace_::IsBoostAllowed(__int64 a1)
{
  const struct tagWINDOWSTATION *IOWinsta; // rax
  char v2; // cl

  IOWinsta = tagWINDOWSTATION::GetIOWinsta(a1);
  if ( !IOWinsta )
    return 0;
  v2 = 1;
  if ( (*((_DWORD *)IOWinsta + 64) & 1) == 0 )
    return 0;
  return v2;
}
