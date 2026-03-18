/*
 * XREFs of _lambda_301e07556f67996ceb949113357e8481_::_lambda_invoker_cdecl_ @ 0x1401B1C24
 * Callers:
 *     InitCreateSharedSection @ 0x1402E4F6C (InitCreateSharedSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_301e07556f67996ceb949113357e8481_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rcx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1);
  ObfDereferenceObject(*(PVOID *)(UserSessionState + 19896));
  result = W32GetUserSessionState(v2);
  *(_QWORD *)(result + 19896) = 0LL;
  return result;
}
