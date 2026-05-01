/*
 * XREFs of _lambda_2037807ba102184564a830884e8e7721_::__lambda_2037807ba102184564a830884e8e7721_ @ 0x1801C4618
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___::_CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___ @ 0x1803098E4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall lambda_2037807ba102184564a830884e8e7721_::__lambda_2037807ba102184564a830884e8e7721_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 3);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
