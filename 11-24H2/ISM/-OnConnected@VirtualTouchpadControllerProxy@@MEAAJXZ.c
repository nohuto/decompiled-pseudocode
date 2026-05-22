/*
 * XREFs of ?OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180135A50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x180077120 (-GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ.c)
 *     ?GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ @ 0x1800815C0 (-GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@@XZ @ 0x18009C280 (-GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@.c)
 *     ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180135DD0 (-OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?ServerConnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N1AEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@@Z @ 0x180136724 (-ServerConnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N1AEBUVirtualTouchpadSize@Input@Inte.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnConnected(VirtualTouchpadControllerProxy *this)
{
  BamoMagnifierControllerProxy *v1; // rdi
  const struct Windows::UI::Internal::Input::VirtualTouchpadSize *Data; // rsi
  bool GesturesEnabled; // bl
  bool TouchEnabled; // al
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (VirtualTouchpadControllerProxy *)((char *)this + 8);
  Data = BamoAnimationTargetClientProxy::GetData((VirtualTouchpadControllerProxy *)((char *)this + 8));
  GesturesEnabled = BamoMagnifierControllerProxy::GetGesturesEnabled(v1);
  TouchEnabled = BamoShellGesturesClientProxy::GetTouchEnabled(v1);
  InputTraceLogging::VirtualTouchpad::ServerConnected(this, TouchEnabled, GesturesEnabled, Data);
  v6 = VirtualTouchpadControllerProxy::OnSizeChanged(this);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8A,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontrol"
             "ler\\server\\virtualtouchpadcontrollerproxy.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
