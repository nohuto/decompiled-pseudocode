/*
 * XREFs of ?NotifyOverlayFrame@CCompositionSwapchainStatistics@@UEAA_NAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x1802B5280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSwapchainStatistics::NotifyOverlayFrame(
        CCompositionSwapchainStatistics *this,
        const struct tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE *a2)
{
  bool result; // al

  result = 1;
  *((_OWORD *)this + 5) = *(_OWORD *)a2;
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 2);
  return result;
}
