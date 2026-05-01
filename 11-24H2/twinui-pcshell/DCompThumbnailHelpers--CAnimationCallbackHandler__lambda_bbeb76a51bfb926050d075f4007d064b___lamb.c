/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___::_CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___ @ 0x180541B28
 * Callers:
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___::_scalar_deleting_destructor_ @ 0x180541D90 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f400_ea_180541D90.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___::_CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
