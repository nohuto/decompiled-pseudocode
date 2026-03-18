/*
 * XREFs of ?SetTransform@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCTransform3D@@@Z @ 0x180284F3C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z @ 0x1801F9484 (-SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z.c)
 */

__int64 __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::SetTransform(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // esi
  int v5; // eax
  struct CResource ***v6; // rbp
  struct CResource ***i; // rdi

  v2 = 0;
  if ( a2 != this[14] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x221u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
      this[14] = a2;
      v6 = (struct CResource ***)this[20];
      for ( i = (struct CResource ***)this[19]; i != v6; ++i )
        CCaptureRenderTarget::SetTransform(*i, this[14]);
    }
  }
  return v2;
}
