/*
 * XREFs of ??1?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAA@XZ @ 0x1800858D0
 * Callers:
 *     _GazeProcessor::OnDeviceUpdate_::_1_::dtor$0 @ 0x1801CF2C2 (_GazeProcessor--OnDeviceUpdate_--_1_--dtor$0.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$3 @ 0x1801CFB58 (_DWMCursorBroker--Initialize_--_1_--dtor$3.c)
 *     _VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad_::_1_::dtor$0 @ 0x1801D71E2 (_VirtualTouchpadControllerProxy--ConfigureVirtualTouchpad_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$2 @ 0x1801D8C95 (_ISMHeatFrameworkHost--RegisterForSystemContext_--_1_--dtor$2.c)
 *     _DisplayOcclusionContextProvider::Broadcast_::_1_::dtor$2 @ 0x1801D8F92 (_DisplayOcclusionContextProvider--Broadcast_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::~variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>(
        __int64 a1)
{
  return std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(a1);
}
