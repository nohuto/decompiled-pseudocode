/*
 * XREFs of ?SetSuperWetInkSource@?$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@QEAAJPEAVCSuperWetSource@@@Z @ 0x180279ECC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180037BE0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CSuperWetInkVisualGeneratedT<CSuperWetInkVisual,CVisual>::SetSuperWetInkSource(
        struct CResource **this,
        struct CContent *a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( a2 != this[85] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x2001u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[85]);
      this[85] = a2;
      CVisual::SetContent((CVisual *)this, a2);
    }
  }
  return v2;
}
