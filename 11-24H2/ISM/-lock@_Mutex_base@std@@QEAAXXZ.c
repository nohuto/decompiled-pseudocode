/*
 * XREFs of ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180015E94
 * Callers:
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x18000F284 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x18001444C (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     ?HasEndpoint@DWMCursorBroker@@UEAAHXZ @ 0x180014ED0 (-HasEndpoint@DWMCursorBroker@@UEAAHXZ.c)
 *     ?GetCursor@DWMCursorBroker@@UEAAJKK_NPEAPEAUICursor@@@Z @ 0x180015090 (-GetCursor@DWMCursorBroker@@UEAAJKK_NPEAPEAUICursor@@@Z.c)
 *     ?GetCursorId@DWMCursorBroker@@UEAAJKK_NPEAUCursorId@@@Z @ 0x1800151B0 (-GetCursorId@DWMCursorBroker@@UEAAJKK_NPEAUCursorId@@@Z.c)
 *     ?ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z @ 0x1800158C8 (-ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180015CC0 (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180030B0C (-OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180070DB0 (-OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCon.c)
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x18007C670 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 *     ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x180085B58 (-ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A7BC (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x180093350 (--1DWMCursor@@MEAA@XZ.c)
 *     ?RegisterCanvas@OneCoreUAPInputHost@@UEAAJPEAX@Z @ 0x1800A35F0 (-RegisterCanvas@OneCoreUAPInputHost@@UEAAJPEAX@Z.c)
 *     ?UnregisterCanvas@OneCoreUAPInputHost@@UEAAJPEAX@Z @ 0x1800A36B0 (-UnregisterCanvas@OneCoreUAPInputHost@@UEAAJPEAX@Z.c)
 *     ?OnInput@DelegatedInkCanvasProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800ABE20 (-OnInput@DelegatedInkCanvasProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProces.c)
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DD6D0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnReportQueryCallback@DockDeviceCollection@@AEAAJXZ @ 0x1800DDA08 (-OnReportQueryCallback@DockDeviceCollection@@AEAAJXZ.c)
 *     ?CallOnThreadExitStatic@CallOnThreadExit@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z @ 0x180130D10 (-CallOnThreadExitStatic@CallOnThreadExit@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z.c)
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@PEA_K@Z @ 0x180131240 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@PEA_.c)
 *     ??1DWMCursorBroker@@MEAA@XZ @ 0x1801C6F60 (--1DWMCursorBroker@@MEAA@XZ.c)
 *     ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z @ 0x1801C7150 (-AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z.c)
 *     ?GetClosestInteractiveBounds@DWMCursorBroker@@UEAAJKK_NPEAUtagRECT@@@Z @ 0x1801C73F0 (-GetClosestInteractiveBounds@DWMCursorBroker@@UEAAJKK_NPEAUtagRECT@@@Z.c)
 *     ?GetCursorAppClipRect@DWMCursorBroker@@UEAAJKK_NPEAUtagRECT@@@Z @ 0x1801C7560 (-GetCursorAppClipRect@DWMCursorBroker@@UEAAJKK_NPEAUtagRECT@@@Z.c)
 *     ?GetCursorPosition@DWMCursorBroker@@UEAAJKK_NPEAJ1@Z @ 0x1801C7660 (-GetCursorPosition@DWMCursorBroker@@UEAAJKK_NPEAJ1@Z.c)
 *     ?GetIsCursorLocked@DWMCursorBroker@@UEAAJKK_NPEA_N@Z @ 0x1801C7810 (-GetIsCursorLocked@DWMCursorBroker@@UEAAJKK_NPEA_N@Z.c)
 *     ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x1801C79D0 (-OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBoundsRect@@@Z @ 0x1801C7D20 (-SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBound.c)
 *     ?SetCursorPosition@DWMCursorBroker@@UEAAJKK_NJJ@Z @ 0x1801C7DC0 (-SetCursorPosition@DWMCursorBroker@@UEAAJKK_NJJ@Z.c)
 *     ?SetLocked@DWMCursorBroker@@UEAAJUCursorIdInfo@@_N@Z @ 0x1801C7F10 (-SetLocked@DWMCursorBroker@@UEAAJUCursorIdInfo@@_N@Z.c)
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
    JUMPOUT(0x180015EE8LL);
  }
}
