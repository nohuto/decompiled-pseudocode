/*
 * XREFs of ?TransferToCurrentThread@JointResize@JointResizeTelemetry@@QEAA?AV12@XZ @ 0x18053C1E4
 * Callers:
 *     ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x18053A500 (-OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManag.c)
 *     ?TagWindowsForResize@JointResize@@AEAAXXZ @ 0x18053C014 (-TagWindowsForResize@JointResize@@AEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180538D34 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef_ea_180538D34.c)
 */

struct wil::details::IFailureCallback *__fastcall JointResizeTelemetry::JointResize::TransferToCurrentThread(
        __int64 a1,
        struct wil::details::IFailureCallback *a2)
{
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1,
    **(_DWORD **)(a1 + 272) == 1);
  *(_QWORD *)a2 = &JointResizeTelemetry::JointResize::`vftable';
  return a2;
}
