/*
 * XREFs of ?get_ProviderOptions@CDragVisualAcc@@UEAAJPEAW4ProviderOptions@@@Z @ 0x1802C2720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDragVisualAcc::get_ProviderOptions(CDragVisualAcc *this, enum ProviderOptions *a2)
{
  *a2 = ProviderOptions_UseComThreading|ProviderOptions_ServerSideProvider;
  return 0LL;
}
