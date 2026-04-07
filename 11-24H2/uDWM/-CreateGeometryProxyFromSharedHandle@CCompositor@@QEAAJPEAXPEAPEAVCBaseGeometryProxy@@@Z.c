/*
 * XREFs of ?CreateGeometryProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x18008100C
 * Callers:
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008BF80 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateGeometryProxyFromSharedHandle(__int64 this, void *a2, CResourceProxy **a3)
{
  return CCompositor::CreateProxyFromSharedHandle<CBaseGeometryProxy>(this, a2, a3);
}
