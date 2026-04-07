/*
 * XREFs of ?EnsureAtlasResource@CAtlasedImage@@AEAAJXZ @ 0x1800232BC
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x1800230A4 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ?CreateAtlasedRectsMeshProxy@CCompositor@@QEAAJPEAPEAVCAtlasedRectsMeshProxy@@@Z @ 0x180021CFC (-CreateAtlasedRectsMeshProxy@CCompositor@@QEAAJPEAPEAVCAtlasedRectsMeshProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAtlasedImage::EnsureAtlasResource(struct CAtlasedRectsMeshProxy **this)
{
  unsigned int v1; // ebx
  int AtlasedRectsMeshProxy; // eax

  v1 = 0;
  if ( !this[11] )
  {
    AtlasedRectsMeshProxy = CCompositor::CreateAtlasedRectsMeshProxy(
                              *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                              this + 11);
    v1 = AtlasedRectsMeshProxy;
    if ( AtlasedRectsMeshProxy < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AtlasedRectsMeshProxy, 0x35Au, 0LL);
  }
  return v1;
}
