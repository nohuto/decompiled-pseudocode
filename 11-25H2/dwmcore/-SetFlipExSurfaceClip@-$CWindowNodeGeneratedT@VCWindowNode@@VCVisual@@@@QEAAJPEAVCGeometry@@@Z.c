/*
 * XREFs of ?SetFlipExSurfaceClip@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z @ 0x18021FFFC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x180131E18 (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetFlipExSurfaceClip(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // edi
  int v5; // eax

  v2 = 0;
  if ( a2 != this[100] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 >= 0 )
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[100]);
      this[100] = a2;
      SAFE_DELETE<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))this + 110);
      CVisual::PropagateFlags((__int64)this, 5u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x21FCu, 0LL);
    }
  }
  return v2;
}
