/*
 * XREFs of ??4JointResize@JointResizeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180539188
 * Callers:
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x18053A5F0 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 *     ?TagWindowsForResize@JointResize@@AEAAXXZ @ 0x18053C014 (-TagWindowsForResize@JointResize@@AEAAXXZ.c)
 * Callees:
 *     ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x18029F1B4 (--1JointResize@JointResizeTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180538D00 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef_ea_180538D00.c)
 *     ??4?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805390BC (--4-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 */

_QWORD *__fastcall JointResizeTelemetry::JointResize::operator=(_QWORD *a1, __int64 a2)
{
  _QWORD v5[42]; // [rsp+20h] [rbp-168h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v5);
  v5[0] = &JointResizeTelemetry::JointResize::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v5);
  return a1;
}
