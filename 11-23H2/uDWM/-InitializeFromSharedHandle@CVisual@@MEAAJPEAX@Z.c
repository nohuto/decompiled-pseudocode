/*
 * XREFs of ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x1800336B0
 * Callers:
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x18003251C (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?Initialize@CSpriteVisual@@UEAAJXZ @ 0x180032B40 (-Initialize@CSpriteVisual@@UEAAJXZ.c)
 *     ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x18010D6C4 (-CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180038D00 (--$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisual::InitializeFromSharedHandle(CVisual *this, void *a2)
{
  int ProxyFromShared; // eax
  unsigned int v3; // ebx

  ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CVisualProxy>(
                      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                      a2,
                      (char *)this + 16);
  v3 = ProxyFromShared;
  if ( ProxyFromShared < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ProxyFromShared, 0x58u, 0LL);
  return v3;
}
