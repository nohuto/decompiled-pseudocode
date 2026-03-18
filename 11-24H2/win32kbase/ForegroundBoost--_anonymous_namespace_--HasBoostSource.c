/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::HasBoostSource @ 0x1401AC36C
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x1400FFE90 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x140164034 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 *     ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401AC43C (-LogProcessInformation@ForegroundBoost@@YAXXZ.c)
 *     ForegroundBoost::_anonymous_namespace_::RemoveProcessBoostSource @ 0x1401AC854 (ForegroundBoost--_anonymous_namespace_--RemoveProcessBoostSource.c)
 * Callees:
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401A23E4 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall ForegroundBoost::_anonymous_namespace_::HasBoostSource(__int64 a1, char a2)
{
  char v4; // di
  __int64 v5; // rcx
  char v6; // bl
  __int64 i; // rcx

  v4 = (*(_QWORD *)(a1 + 816) & 0x3FC0000000LL) != 0;
  if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() && a2 )
  {
    v6 = 0;
    for ( i = *(_QWORD *)(W32GetUserSessionState(v5) + 36432); i; i = *(_QWORD *)(i + 1120) )
    {
      if ( a1 == i )
      {
        v6 = 1;
        break;
      }
    }
    if ( v4 != v6 )
      KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
  }
  return v4;
}
