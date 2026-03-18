/*
 * XREFs of ?AddRef@?$TValueResource@UD2D_RECT_F@@UtagMILCMD_RECTRESOURCE@@$0HP@@@UEAAKXZ @ 0x1802582D0
 * Callers:
 *     ?AddRef@CCompositionDynamicTexture@@WFA@EAAKXZ @ 0x1802A0F10 (-AddRef@CCompositionDynamicTexture@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TValueResource<D2D_RECT_F,tagMILCMD_RECTRESOURCE,127>::AddRef(__int64 a1)
{
  return CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 + 8));
}
