/*
 * XREFs of ?SetAlphaMargins@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJU_MARGINS@@@Z @ 0x180027470
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnAlphaMarginsChanging@CWindowNode@@AEAAJAEBU_MARGINS@@@Z @ 0x1800274DC (-OnAlphaMarginsChanging@CWindowNode@@AEAAJAEBU_MARGINS@@@Z.c)
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetAlphaMargins(
        CResource *this,
        const struct _MARGINS *a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CWindowNode::OnAlphaMarginsChanging(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x2143u, 0LL);
  }
  else
  {
    *(struct _MARGINS *)((char *)this + 680) = *a2;
    CResource::OnPropertyChanged(this);
  }
  return v5;
}
