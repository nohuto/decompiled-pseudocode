/*
 * XREFs of ?InvokeSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804CF4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@@ZV?$ComPtr@UISwitchItem@@@23@@Z @ 0x1804CEA80 (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV-$C.c)
 */

void __fastcall CAsyncSwitchItemController::InvokeSwitchItem(CAsyncSwitchItemController *this, struct ISwitchItem *a2)
{
  struct ISwitchItem *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v3);
  AsyncControllerHelpers::CallControllerAsync<ISwitchItemController,ISwitchItem>(
    (int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2,
    (__int64) TouchKeyboardExperienceManager::`vcall'{56,{flat}},
    (__int64 *)&v3);
}
