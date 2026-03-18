/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::AddProcessBoostSource @ 0x1401ABF68
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x140164034 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 * Callees:
 *     ForegroundBoost::_anonymous_namespace_::IsProcessBackground @ 0x1400FFE74 (ForegroundBoost--_anonymous_namespace_--IsProcessBackground.c)
 */

unsigned __int64 __fastcall ForegroundBoost::_anonymous_namespace_::AddProcessBoostSource(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 UserSessionState; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 result; // rax

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1);
  if ( ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
  {
    *(_QWORD *)(a1 + 1120) = *(_QWORD *)(UserSessionState + 36432);
    *(_QWORD *)(UserSessionState + 36432) = a1;
  }
  v5 = *(_QWORD *)(a1 + 816);
  v6 = v5 | (v2 << 30);
  v7 = v5 ^ v6;
  result = 0xFFFFFFC03FFFFFFFuLL;
  *(_QWORD *)(a1 + 816) = v6 ^ v7 & 0xFFFFFFC03FFFFFFFuLL;
  return result;
}
