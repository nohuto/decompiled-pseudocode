/*
 * XREFs of ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x1800B2BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x1800B2BE0 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 */

void __fastcall CContactStationaryVisual::Stop(CContactStationaryVisual *this)
{
  CContactStationaryVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
}
