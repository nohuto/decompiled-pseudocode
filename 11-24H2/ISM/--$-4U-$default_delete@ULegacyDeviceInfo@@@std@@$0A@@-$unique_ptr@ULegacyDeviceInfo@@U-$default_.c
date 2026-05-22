/*
 * XREFs of ??$?4U?$default_delete@ULegacyDeviceInfo@@@std@@$0A@@?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009B044
 * Callers:
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x1800BA680 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEAULegacyDeviceInfo@@@Z @ 0x18004DA14 (-reset@-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEA.c)
 */

void **__fastcall std::unique_ptr<LegacyDeviceInfo>::operator=<std::default_delete<LegacyDeviceInfo>,0>(
        void **a1,
        void **a2)
{
  void *v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  std::unique_ptr<LegacyDeviceInfo>::reset(a1, v4);
  return a1;
}
