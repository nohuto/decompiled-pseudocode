/*
 * XREFs of ?InternalRelease@?$ComPtr@VVirtualDesktopGestureHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1801EDD5C
 * Callers:
 *     ?VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180095764 (-VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@.c)
 *     ??1?$ComPtr@VVirtualDesktopGestureHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1802CEE34 (--1-$ComPtr@VVirtualDesktopGestureHandler@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@@UITouchSwipe@@U?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801EDD90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopGestureHandler>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITouchpadGesture,ITouchSwipe,Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(v1);
  }
  return result;
}
