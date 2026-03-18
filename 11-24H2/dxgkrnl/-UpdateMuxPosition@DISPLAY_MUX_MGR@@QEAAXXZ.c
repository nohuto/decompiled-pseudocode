/*
 * XREFs of ?UpdateMuxPosition@DISPLAY_MUX_MGR@@QEAAXXZ @ 0x140088748
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1404032B8 (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     ?UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ @ 0x140088764 (-UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ.c)
 */

void __fastcall DISPLAY_MUX_MGR::UpdateMuxPosition(DISPLAY_MUX_PAIRING **this)
{
  DISPLAY_MUX_PAIRING::UpdateMuxPosition(this[9]);
}
