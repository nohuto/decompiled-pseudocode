/*
 * XREFs of ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140227810
 * Callers:
 *     <none>
 * Callees:
 *     W32AttachToEverySessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x14028B120 (W32AttachToEverySessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___.c)
 */

void __fastcall InputCoreProviderCallback(const struct _GUID *a1, int a2)
{
  if ( (unsigned int)(a2 - 1) <= 1 )
    W32AttachToEverySessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881_(a1);
}
