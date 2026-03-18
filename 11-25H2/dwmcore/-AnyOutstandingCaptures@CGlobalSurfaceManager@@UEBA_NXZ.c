/*
 * XREFs of ?AnyOutstandingCaptures@CGlobalSurfaceManager@@UEBA_NXZ @ 0x180210B60
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalSurfaceManager::AnyOutstandingCaptures(CGlobalSurfaceManager *this)
{
  return CaptureBitsResponse::s_cOutstandingCaptures > 0;
}
