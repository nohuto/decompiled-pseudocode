/*
 * XREFs of ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x18029F1B4
 * Callers:
 *     ??1JointResize@@UEAA@XZ @ 0x18029F018 (--1JointResize@@UEAA@XZ.c)
 *     ??4JointResize@JointResizeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180539188 (--4JointResize@JointResizeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x18053A500 (-OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManag.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x18053A5F0 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 *     ?TagWindowsForResize@JointResize@@AEAAXXZ @ 0x18053C014 (-TagWindowsForResize@JointResize@@AEAAXXZ.c)
 *     _JointResize::OnArrangedWindowJointResizeCompleted_::_1_::dtor$0 @ 0x1806F2332 (_JointResize--OnArrangedWindowJointResizeCompleted_--_1_--dtor$0.c)
 *     _JointResize::OnArrangedWindowResizeStarted_::_1_::dtor$0 @ 0x1806F2344 (_JointResize--OnArrangedWindowResizeStarted_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801F06B4 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall JointResizeTelemetry::JointResize::~JointResize(JointResizeTelemetry::JointResize *this)
{
  *(_QWORD *)this = &JointResizeTelemetry::JointResize::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
