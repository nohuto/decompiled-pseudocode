/*
 * XREFs of ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x18025BC74
 * Callers:
 *     ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x18022C6EC (--1CProjectedShadowReceiver@@MEAA@XZ.c)
 *     ?ProcessSetReceivingVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETRECEIVINGVISUAL@@@Z @ 0x1802ABC58 (-ProcessSetReceivingVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJ.c)
 * Callees:
 *     ?DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18025B5BC (-DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18025B630 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x1802968EC (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180297534 (-RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 */

void __fastcall CProjectedShadowReceiver::SetReceivingVisual(CEffectIntermediateProducer **this, struct CVisual *a2)
{
  CProjectedShadowScene **v4; // rbp
  CProjectedShadowScene **i; // rsi

  if ( a2 != this[9] )
  {
    if ( this[9] )
    {
      CProjectedShadowReceiver::InvalidateMaskContent(this);
      v4 = (CProjectedShadowScene **)this[11];
      for ( i = (CProjectedShadowScene **)this[10]; i != v4; ++i )
        CProjectedShadowScene::DiscardCachesForReceiver(*i, (struct CProjectedShadowReceiver *)this);
      CVisual::RemoveProjectedShadowReceiver(this[9], (struct CProjectedShadowReceiver *)this);
    }
    this[9] = a2;
    if ( a2 )
    {
      CVisual::AddProjectedShadowReceiver(a2, (struct CProjectedShadowReceiver *)this);
      CProjectedShadowReceiver::InvalidateMaskContent(this);
    }
  }
}
