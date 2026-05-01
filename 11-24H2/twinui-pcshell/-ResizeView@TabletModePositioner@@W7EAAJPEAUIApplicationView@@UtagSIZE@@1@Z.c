/*
 * XREFs of ?ResizeView@TabletModePositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180325220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabletModePositioner::ResizeView(__int64 a1)
{
  return UwpWindowWrapperBase::put_IsPopup((UwpWindowWrapperBase *)(a1 - 8));
}
