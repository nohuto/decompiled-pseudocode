/*
 * XREFs of ?SetOpacity@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@QEAAJM@Z @ 0x18002744C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::SetOpacity(float *a1, float a2)
{
  if ( a2 != a1[20] )
  {
    a1[20] = a2;
    CResource::OnPropertyChanged((CResource *)a1);
  }
  return 0LL;
}
