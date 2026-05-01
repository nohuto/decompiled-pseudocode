/*
 * XREFs of ??1?$CTaskWrapper@V_lambda_04782cd470235717f7963c3576bcb0e4_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1804CF0A4
 * Callers:
 *     ??_E?$CTaskWrapper@V_lambda_04782cd470235717f7963c3576bcb0e4_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1804CF120 (--_E-$CTaskWrapper@V_lambda_04782cd470235717f7963c3576bcb0e4_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_04782cd470235717f7963c3576bcb0e4_>::~CTaskWrapper<_lambda_04782cd470235717f7963c3576bcb0e4_>(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
