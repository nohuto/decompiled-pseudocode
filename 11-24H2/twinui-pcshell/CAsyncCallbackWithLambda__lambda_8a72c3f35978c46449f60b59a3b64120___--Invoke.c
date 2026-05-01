/*
 * XREFs of CAsyncCallbackWithLambda__lambda_8a72c3f35978c46449f60b59a3b64120___::Invoke @ 0x1804EC970
 * Callers:
 *     <none>
 * Callees:
 *     ?OnGamingPostureChanged@ShellPositionerManager@@AEAAJH@Z @ 0x1804EC9E8 (-OnGamingPostureChanged@ShellPositionerManager@@AEAAJH@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_8a72c3f35978c46449f60b59a3b64120___::Invoke(__int64 a1)
{
  ShellPositionerManager *v1; // rbx
  int v2; // eax

  v1 = *(ShellPositionerManager **)(a1 + 56);
  v2 = IsGamingFullScreenExperienceActive(a1);
  ShellPositionerManager::OnGamingPostureChanged(v1, v2);
  return 0LL;
}
