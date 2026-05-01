/*
 * XREFs of CAsyncCallbackWithLambda__lambda_54981fe6d81686fb634cf26ccc6441d4___::Invoke @ 0x180501D80
 * Callers:
 *     <none>
 * Callees:
 *     ?OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z @ 0x180503C88 (-OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_54981fe6d81686fb634cf26ccc6441d4___::Invoke(__int64 a1)
{
  GamingPosturePositioner *v1; // rbx
  int v2; // eax

  v1 = *(GamingPosturePositioner **)(a1 + 56);
  v2 = IsGamingFullScreenExperienceActive(a1);
  GamingPosturePositioner::OnGamingPostureChanged(v1, v2);
  return 0LL;
}
