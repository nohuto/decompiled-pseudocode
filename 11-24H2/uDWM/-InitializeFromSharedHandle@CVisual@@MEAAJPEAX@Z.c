/*
 * XREFs of ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x1800392C0
 * Callers:
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180038A08 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?Initialize@CSpriteVisual@@UEAAJXZ @ 0x180038AE0 (-Initialize@CSpriteVisual@@UEAAJXZ.c)
 *     ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x1800F48D8 (-CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180039310 (-CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 */

__int64 __fastcall CVisual::InitializeFromSharedHandle(struct CVisualProxy **this, void *a2)
{
  int VisualProxyFromSharedHandle; // eax
  unsigned int v3; // ebx

  VisualProxyFromSharedHandle = CCompositor::CreateVisualProxyFromSharedHandle(
                                  *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                  a2,
                                  this + 2);
  v3 = VisualProxyFromSharedHandle;
  if ( VisualProxyFromSharedHandle < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, VisualProxyFromSharedHandle, 0x51u, 0LL);
  return v3;
}
