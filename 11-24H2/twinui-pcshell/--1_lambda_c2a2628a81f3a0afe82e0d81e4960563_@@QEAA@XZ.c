/*
 * XREFs of ??1_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@QEAA@XZ @ 0x1804CF074
 * Callers:
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@ZV?$ComPtr@UISwitchItem@@@23@V?$ComPtr@UIVirtualDesktopItem@@@23@@Z @ 0x1804CEB6C (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControl.c)
 *     ??1?$CTaskWrapper@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1804CF0F4 (--1-$CTaskWrapper@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@ComTaskPool@Internal@Windows@@UEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall _lambda_c2a2628a81f3a0afe82e0d81e4960563_::~_lambda_c2a2628a81f3a0afe82e0d81e4960563_(
        _lambda_c2a2628a81f3a0afe82e0d81e4960563_ *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
}
