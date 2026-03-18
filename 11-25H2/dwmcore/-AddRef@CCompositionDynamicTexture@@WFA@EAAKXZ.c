/*
 * XREFs of ?AddRef@CCompositionDynamicTexture@@WFA@EAAKXZ @ 0x1802A0F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionDynamicTexture::AddRef(__int64 a1)
{
  return TValueResource<D2D_RECT_F,tagMILCMD_RECTRESOURCE,127>::AddRef(a1 - 80);
}
