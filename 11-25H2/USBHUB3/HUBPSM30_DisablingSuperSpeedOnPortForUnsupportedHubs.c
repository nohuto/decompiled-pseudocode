/*
 * XREFs of HUBPSM30_DisablingSuperSpeedOnPortForUnsupportedHubs @ 0x140013AC0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer @ 0x1400061F4 (HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer.c)
 */

__int64 __fastcall HUBPSM30_DisablingSuperSpeedOnPortForUnsupportedHubs(__int64 a1)
{
  HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
