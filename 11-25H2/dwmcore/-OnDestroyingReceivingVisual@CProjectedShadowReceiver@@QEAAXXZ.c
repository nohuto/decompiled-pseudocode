/*
 * XREFs of ?OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ @ 0x1802ABB0C
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180108F2C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18025B5BC (-DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18025B630 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowReceiver::OnDestroyingReceivingVisual(CProjectedShadowReceiver *this)
{
  CProjectedShadowScene **v2; // rsi
  CProjectedShadowScene **i; // rbx

  *((_QWORD *)this + 9) = 0LL;
  CProjectedShadowReceiver::InvalidateMaskContent((CEffectIntermediateProducer **)this);
  v2 = (CProjectedShadowScene **)*((_QWORD *)this + 11);
  for ( i = (CProjectedShadowScene **)*((_QWORD *)this + 10); i != v2; ++i )
    CProjectedShadowScene::DiscardCachesForReceiver(*i, this);
}
