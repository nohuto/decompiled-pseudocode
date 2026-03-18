/*
 * XREFs of ?UpdateMuxPosition@DISPLAY_MUX_MGR@@QEAAXXZ @ 0x140088118
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x14040AB28 (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     ?UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ @ 0x140088134 (-UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ.c)
 */

void __fastcall DISPLAY_MUX_MGR::UpdateMuxPosition(DISPLAY_MUX_PAIRING **this)
{
  DISPLAY_MUX_PAIRING::UpdateMuxPosition(this[9]);
}
