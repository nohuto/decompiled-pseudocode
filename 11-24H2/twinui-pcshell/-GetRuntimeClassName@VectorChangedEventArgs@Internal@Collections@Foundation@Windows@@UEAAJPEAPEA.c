/*
 * XREFs of ?GetRuntimeClassName@VectorChangedEventArgs@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18041F740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Foundation::Collections::Internal::VectorChangedEventArgs::GetRuntimeClassName(
        Windows::Foundation::Collections::Internal::VectorChangedEventArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Foundation.Collections.IVectorChangedEventArgs", 0x36u, a2);
}
