/*
 * XREFs of ?OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801E4D90
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1801E4DD0 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 */

__int64 __fastcall CLayerVisual::OnChanged(CLayerVisual *a1, unsigned int a2, CMaskBrush *a3)
{
  CLayerVisual::UpdateBackdropBlurFlagForTreeEffect(a1);
  return CVisual::OnChanged((__int64)a1, a2, a3);
}
