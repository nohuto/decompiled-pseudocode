/*
 * XREFs of ?AddRef@?$TValueResource@UD2D_RECT_F@@UtagMILCMD_RECTRESOURCE@@$0IA@@@UEAAKXZ @ 0x18024CE70
 * Callers:
 *     ?AddRef@CCompositionMagnifierBrush@@WEI@EAAKXZ @ 0x1802760B0 (-AddRef@CCompositionMagnifierBrush@@WEI@EAAKXZ.c)
 *     ?AddRef@CCompositionDynamicTexture@@WFA@EAAKXZ @ 0x180295560 (-AddRef@CCompositionDynamicTexture@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TValueResource<D2D_RECT_F,tagMILCMD_RECTRESOURCE,128>::AddRef(__int64 a1)
{
  return CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 + 8));
}
