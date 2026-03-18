/*
 * XREFs of ?AnyOutstandingCaptures@CGlobalSurfaceManager@@UEBA_NXZ @ 0x1802044C0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalSurfaceManager::AnyOutstandingCaptures(CGlobalSurfaceManager *this)
{
  return CaptureBitsResponse::s_cOutstandingCaptures > 0;
}
