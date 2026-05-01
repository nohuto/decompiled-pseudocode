/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___::_CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___ @ 0x1803268C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___::_scalar_deleting_destructor_ @ 0x180326C00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___::_CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
