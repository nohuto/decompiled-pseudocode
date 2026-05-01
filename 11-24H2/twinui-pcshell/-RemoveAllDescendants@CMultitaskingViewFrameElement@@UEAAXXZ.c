/*
 * XREFs of ?RemoveAllDescendants@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804CC490
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804C4AC0 (-RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ.c)
 */

void __fastcall CMultitaskingViewFrameElement::RemoveAllDescendants(CMultitaskingViewFrameElement *this)
{
  CMultitaskingViewElementBase::RemoveAllDescendants(this);
  if ( *((_QWORD *)this + 71) )
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 71);
}
