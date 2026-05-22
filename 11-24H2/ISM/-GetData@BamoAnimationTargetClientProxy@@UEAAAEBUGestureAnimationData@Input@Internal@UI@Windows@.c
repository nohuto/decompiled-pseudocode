/*
 * XREFs of ?GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@@XZ @ 0x18009C280
 * Callers:
 *     ?OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ @ 0x18002E2B0 (-OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180134E04 (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180135A50 (-OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180135DD0 (-OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ @ 0x180136CF4 (-TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ.c)
 *     ?OnVertex1Changed@EdgyControllerClientProxy@@MEAAJXZ @ 0x180156E70 (-OnVertex1Changed@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A83EC (-RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800593F0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct Windows::UI::Internal::Input::GestureAnimationData *__fastcall BamoAnimationTargetClientProxy::GetData(
        BamoAnimationTargetClientProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (BamoAnimationTargetClientProxy *)((char *)this + 48);
}
