/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::RemoveProcessBoostSource @ 0x1401AC854
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x140164034 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 * Callees:
 *     ForegroundBoost::_anonymous_namespace_::IsProcessBackground @ 0x1400FFE74 (ForegroundBoost--_anonymous_namespace_--IsProcessBackground.c)
 *     ForegroundBoost::_anonymous_namespace_::HasBoostSource @ 0x1401AC36C (ForegroundBoost--_anonymous_namespace_--HasBoostSource.c)
 */

__int64 __fastcall ForegroundBoost::_anonymous_namespace_::RemoveProcessBoostSource(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 *i; // rcx
  __int64 v6; // rax

  if ( ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
    return 0LL;
  *(_QWORD *)(a1 + 816) &= ((__int64)~a2 << 30) | 0xFFFFFFC03FFFFFFFuLL;
  if ( ForegroundBoost::_anonymous_namespace_::HasBoostSource(a1, 0) )
    return 2LL;
  for ( i = (__int64 *)(W32GetUserSessionState(v4) + 36432); ; i = (__int64 *)(v6 + 1120) )
  {
    v6 = *i;
    if ( !*i )
      break;
    if ( v6 == a1 )
    {
      *i = *(_QWORD *)(a1 + 1120);
      break;
    }
  }
  *(_QWORD *)(a1 + 1120) = 0LL;
  return 1LL;
}
