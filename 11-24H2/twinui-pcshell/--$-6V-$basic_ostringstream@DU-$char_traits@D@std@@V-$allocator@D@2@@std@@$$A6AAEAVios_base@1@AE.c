/*
 * XREFs of ??$?6V?$basic_ostringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$A6AAEAVios_base@1@AEAV21@@Z$0A@@std@@YA$$QEAV?$basic_ostringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@A6AAEAVios_base@0@AEAV20@@Z@Z @ 0x1804F3C1C
 * Callers:
 *     _lambda_1c7927ef699b7e1a5db16bb78f566198_::operator() @ 0x1804F90AC (_lambda_1c7927ef699b7e1a5db16bb78f566198_--operator().c)
 *     ?ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804FB790 (-ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITION.c)
 *     ?ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804FBB10 (-ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUn.c)
 *     ?HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ @ 0x180500E88 (-HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180501A00 (-InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPrese.c)
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805032C0 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 *     ?OnGroupWindowTemplateApplied@GamingPosturePositioner@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z @ 0x180503F40 (-OnGroupWindowTemplateApplied@GamingPosturePositioner@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z.c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1805042F0 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 *     ?OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180504C90 (-OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::operator<<<std::ostringstream,std::ios_base & (std::ios_base &),0>(__int64 a1)
{
  std::ostream::operator<<(a1, std::hex);
  return a1;
}
