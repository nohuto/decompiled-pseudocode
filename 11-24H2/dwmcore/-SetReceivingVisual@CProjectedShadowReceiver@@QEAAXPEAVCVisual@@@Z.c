/*
 * XREFs of ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x180250644
 * Callers:
 *     ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x18022157C (--1CProjectedShadowReceiver@@MEAA@XZ.c)
 *     ?ProcessSetReceivingVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETRECEIVINGVISUAL@@@Z @ 0x1802A2138 (-ProcessSetReceivingVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJ.c)
 * Callees:
 *     ?DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18024FFC4 (-DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180250038 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18028B46C (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18028C0B4 (-RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
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
