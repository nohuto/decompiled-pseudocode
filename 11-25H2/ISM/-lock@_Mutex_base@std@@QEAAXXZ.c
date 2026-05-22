/*
 * XREFs of ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800158C4
 * Callers:
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x18000EB24 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180013E84 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     ?HasEndpoint@DWMCursorBroker@@UEAAHXZ @ 0x180014900 (-HasEndpoint@DWMCursorBroker@@UEAAHXZ.c)
 *     ?GetCursor@DWMCursorBroker@@UEAAJKK_NPEAPEAUICursor@@@Z @ 0x180014AC0 (-GetCursor@DWMCursorBroker@@UEAAJKK_NPEAPEAUICursor@@@Z.c)
 *     ?GetCursorId@DWMCursorBroker@@UEAAJKK_NPEAUCursorId@@@Z @ 0x180014BE0 (-GetCursorId@DWMCursorBroker@@UEAAJKK_NPEAUCursorId@@@Z.c)
 *     ?ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z @ 0x1800152F8 (-ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800156F0 (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x18003054C (-OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180071080 (-OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCon.c)
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x18007C7B0 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 *     ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x180085AD4 (-ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x180089FF8 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x180093150 (--1DWMCursor@@MEAA@XZ.c)
 *     ?RegisterCanvas@OneCoreUAPInputHost@@UEAAJPEAX@Z @ 0x1800A3220 (-RegisterCanvas@OneCoreUAPInputHost@@UEAAJPEAX@Z.c)
 *     ?UnregisterCanvas@OneCoreUAPInputHost@@UEAAJPEAX@Z @ 0x1800A32E0 (-UnregisterCanvas@OneCoreUAPInputHost@@UEAAJPEAX@Z.c)
 *     ?OnInput@DelegatedInkCanvasProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800AD320 (-OnInput@DelegatedInkCanvasProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProces.c)
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DA4E0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnReportQueryCallback@DockDeviceCollection@@AEAAJXZ @ 0x1800DA818 (-OnReportQueryCallback@DockDeviceCollection@@AEAAJXZ.c)
 *     ?CallOnThreadExitStatic@CallOnThreadExit@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z @ 0x18012EBB0 (-CallOnThreadExitStatic@CallOnThreadExit@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z.c)
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXXZ@std@@PEA_K@Z @ 0x18012EC04 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXXZ@std@@PEA_K@Z.c)
 *     ??1DWMCursorBroker@@MEAA@XZ @ 0x1801BF850 (--1DWMCursorBroker@@MEAA@XZ.c)
 *     ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z @ 0x1801BFA40 (-AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z.c)
 *     ?GetClosestInteractiveBounds@DWMCursorBroker@@UEAAJKK_NPEAUtagRECT@@@Z @ 0x1801BFCE0 (-GetClosestInteractiveBounds@DWMCursorBroker@@UEAAJKK_NPEAUtagRECT@@@Z.c)
 *     ?GetCursorAppClipRect@DWMCursorBroker@@UEAAJKK_NPEAUtagRECT@@@Z @ 0x1801BFE50 (-GetCursorAppClipRect@DWMCursorBroker@@UEAAJKK_NPEAUtagRECT@@@Z.c)
 *     ?GetCursorPosition@DWMCursorBroker@@UEAAJKK_NPEAJ1@Z @ 0x1801BFF50 (-GetCursorPosition@DWMCursorBroker@@UEAAJKK_NPEAJ1@Z.c)
 *     ?GetIsCursorLocked@DWMCursorBroker@@UEAAJKK_NPEA_N@Z @ 0x1801C0100 (-GetIsCursorLocked@DWMCursorBroker@@UEAAJKK_NPEA_N@Z.c)
 *     ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x1801C02C0 (-OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBoundsRect@@@Z @ 0x1801C0610 (-SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBound.c)
 *     ?SetCursorPosition@DWMCursorBroker@@UEAAJKK_NJJ@Z @ 0x1801C06B0 (-SetCursorPosition@DWMCursorBroker@@UEAAJKK_NJJ@Z.c)
 *     ?SetLocked@DWMCursorBroker@@UEAAJUCursorIdInfo@@_N@Z @ 0x1801C0800 (-SetLocked@DWMCursorBroker@@UEAAJUCursorIdInfo@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Mutex_base::lock(std::_Mutex_base *this)
{
  if ( _Mtx_lock(this) )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
    goto LABEL_5;
  }
  if ( *((_DWORD *)this + 7) == 0x7FFFFFFF )
  {
LABEL_5:
    *((_DWORD *)this + 7) = 2147483646;
    std::_Throw_Cpp_error(6);
    __debugbreak();
    JUMPOUT(0x180015918LL);
  }
}
