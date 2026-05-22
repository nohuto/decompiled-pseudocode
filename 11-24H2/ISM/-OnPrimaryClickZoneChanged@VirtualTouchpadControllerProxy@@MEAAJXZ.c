/*
 * XREFs of ?OnPrimaryClickZoneChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180135DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180134E04 (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnPrimaryClickZoneChanged(VirtualTouchpadControllerProxy *this)
{
  VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad(this);
  return 0LL;
}
