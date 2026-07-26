/*
 * XREFs of _lambda_b246ce06b62e0fe260ebdade75b833fa_::_lambda_invoker_cdecl_ @ 0x14014DF80
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x14015CCE0 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x14015D9B0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall lambda_b246ce06b62e0fe260ebdade75b833fa_::_lambda_invoker_cdecl_(Ndis::Initmode **a1)
{
  enum CallRunMode v2; // r8d

  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)((char *)*a1 + 5120), RunSynchronous, 1);
  Ndis::Initmode::DisableIfNeeded(*a1, 0LL, v2);
}
