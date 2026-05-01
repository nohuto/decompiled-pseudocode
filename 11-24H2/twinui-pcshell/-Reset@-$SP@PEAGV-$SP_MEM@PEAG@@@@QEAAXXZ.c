/*
 * XREFs of ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800FF470
 * Callers:
 *     ?IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z @ 0x1800F394C (-IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z.c)
 *     ??R_lambda_fe990823f78b875c41e1c4896de2e063_@@QEBA@XZ @ 0x180127638 (--R_lambda_fe990823f78b875c41e1c4896de2e063_@@QEBA@XZ.c)
 *     ?IsWindowTabHostEnabledOnSKU@@YA_NXZ @ 0x180152ABC (-IsWindowTabHostEnabledOnSKU@@YA_NXZ.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x180196294 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025BF10 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180275CF8 (-ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ??R_lambda_472df6ff52501759c6fbda191ba6be37_@@QEBA@XZ @ 0x1803E0130 (--R_lambda_472df6ff52501759c6fbda191ba6be37_@@QEBA@XZ.c)
 *     ?IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ @ 0x180626A60 (-IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ.c)
 *     ??4?$SP@KV?$SP_MEM@K@@@@QEAAAEAV0@V?$CTypeWrapper@PEAK@@@Z @ 0x1806830FC (--4-$SP@KV-$SP_MEM@K@@@@QEAAAEAV0@V-$CTypeWrapper@PEAK@@@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800D4C64 (-MemoryFree@@YAXPEAX@Z.c)
 */

void __fastcall SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    MemoryFree(v2);
    *a1 = 0LL;
  }
}
