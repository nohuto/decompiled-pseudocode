/*
 * XREFs of ??1?$optional@UHandleActivationHints@CClassicWindowManager@@@std@@QEAA@XZ @ 0x1802946D4
 * Callers:
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z @ 0x180286950 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z.c)
 *     _CClassicWindowManager::HandleActivation_::_1_::dtor$1 @ 0x1806D1514 (_CClassicWindowManager--HandleActivation_--_1_--dtor$1.c)
 *     _CClassicWindowManager::_HandleActivation_::_1_::dtor$0 @ 0x1806D1526 (_CClassicWindowManager--_HandleActivation_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall std::optional<CClassicWindowManager::HandleActivationHints>::~optional<CClassicWindowManager::HandleActivationHints>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1);
  return result;
}
