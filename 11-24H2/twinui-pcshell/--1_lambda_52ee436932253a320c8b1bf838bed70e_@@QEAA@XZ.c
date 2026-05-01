/*
 * XREFs of ??1_lambda_52ee436932253a320c8b1bf838bed70e_@@QEAA@XZ @ 0x1804CF04C
 * Callers:
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@@ZV?$ComPtr@UISwitchItem@@@23@@Z @ 0x1804CEA80 (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV-$C.c)
 *     ??1?$CTaskWrapper@V_lambda_52ee436932253a320c8b1bf838bed70e_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1804CF0CC (--1-$CTaskWrapper@V_lambda_52ee436932253a320c8b1bf838bed70e_@@@ComTaskPool@Internal@Windows@@UEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall _lambda_52ee436932253a320c8b1bf838bed70e_::~_lambda_52ee436932253a320c8b1bf838bed70e_(
        _lambda_52ee436932253a320c8b1bf838bed70e_ *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
}
