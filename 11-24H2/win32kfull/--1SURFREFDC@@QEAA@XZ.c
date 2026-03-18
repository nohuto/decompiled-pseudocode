/*
 * XREFs of ??1SURFREFDC@@QEAA@XZ @ 0x14025D338
 * Callers:
 *     GreDrawStream @ 0x14025D364 (GreDrawStream.c)
 * Callees:
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1400DD084 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 */

void __fastcall SURFREFDC::~SURFREFDC(SURFREFDC *this)
{
  SURFREFDC::vUnlock(this);
  PopThreadGuardedObject(this);
}
