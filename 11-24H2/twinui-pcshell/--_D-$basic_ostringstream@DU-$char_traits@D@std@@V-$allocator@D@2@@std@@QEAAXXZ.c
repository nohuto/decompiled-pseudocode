/*
 * XREFs of ??_D?$basic_ostringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1804F9EB4
 * Callers:
 *     _lambda_1c7927ef699b7e1a5db16bb78f566198_::operator() @ 0x1804F90AC (_lambda_1c7927ef699b7e1a5db16bb78f566198_--operator().c)
 *     ??_E?$basic_ostringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x1804F9FCC (--_E-$basic_ostringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z.c)
 *     ?ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804FB790 (-ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITION.c)
 *     ?ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804FBB10 (-ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUn.c)
 *     ?HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ @ 0x180500E88 (-HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180501A00 (-InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPrese.c)
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805032C0 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 *     ?OnGroupWindowTemplateApplied@GamingPosturePositioner@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z @ 0x180503F40 (-OnGroupWindowTemplateApplied@GamingPosturePositioner@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z.c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1805042F0 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 *     ?OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180504C90 (-OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     _GamingPosturePositioner::OnGroupWindowTemplateApplied_::_1_::dtor$2 @ 0x1806F0F91 (_GamingPosturePositioner--OnGroupWindowTemplateApplied_--_1_--dtor$2.c)
 *     _GamingPosturePositioner::InitializePosition_::_1_::dtor$4 @ 0x1806F11CB (_GamingPosturePositioner--InitializePosition_--_1_--dtor$4.c)
 *     _GamingPosturePositioner::ControlLost_::_1_::dtor$7 @ 0x1806F1264 (_GamingPosturePositioner--ControlLost_--_1_--dtor$7.c)
 *     _GamingPosturePositioner::HandleViewRecovery_::_1_::dtor$10 @ 0x1806F15A8 (_GamingPosturePositioner--HandleViewRecovery_--_1_--dtor$10.c)
 *     _GamingPosturePositioner::OnApplicationViewChanged_::_1_::dtor$4 @ 0x1806F1760 (_GamingPosturePositioner--OnApplicationViewChanged_--_1_--dtor$4.c)
 *     _GamingPosturePositioner::OnShellTrackedWindowPosChanged_::_1_::dtor$2 @ 0x1806F1874 (_GamingPosturePositioner--OnShellTrackedWindowPosChanged_--_1_--dtor$2.c)
 *     _GamingPosturePositioner::OnShowWindowPolicy_::_1_::dtor$4 @ 0x1806F18E7 (_GamingPosturePositioner--OnShowWindowPolicy_--_1_--dtor$4.c)
 * Callees:
 *     ??1?$basic_ostringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1804F8C30 (--1-$basic_ostringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::ostringstream::`vbase destructor'(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 136;
  std::ostringstream::~ostringstream(a1 + 136);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
