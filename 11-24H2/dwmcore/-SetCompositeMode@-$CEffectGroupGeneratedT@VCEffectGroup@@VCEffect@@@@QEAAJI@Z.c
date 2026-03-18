/*
 * XREFs of ?SetCompositeMode@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@QEAAJI@Z @ 0x180205C58
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::SetCompositeMode(CResource *a1, int a2)
{
  if ( a2 != *((_DWORD *)a1 + 21) )
  {
    *((_DWORD *)a1 + 21) = a2;
    CResource::OnPropertyChanged(a1);
  }
  return 0LL;
}
