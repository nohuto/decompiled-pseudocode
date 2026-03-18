/*
 * XREFs of ?AddRef@CCompositionDynamicTexture@@WFA@EAAKXZ @ 0x180295560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionDynamicTexture::AddRef(__int64 a1)
{
  return TValueResource<D2D_RECT_F,tagMILCMD_RECTRESOURCE,128>::AddRef(a1 - 80);
}
