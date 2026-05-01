/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___::_CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___ @ 0x1804E29F0
 * Callers:
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___::_scalar_deleting_destructor_ @ 0x1804E2A20 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_34f025963987b113629715f071_ea_1804E2A20.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___::_CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___(
        __int64 a1)
{
  __int64 result; // rax

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 32));
  result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
