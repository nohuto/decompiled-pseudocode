/*
 * XREFs of ?InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z @ 0x180107FA8
 * Callers:
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x180055FB0 (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x18006EC74 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 * Callees:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18010772C (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attri.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x180107B2C (--1-$test_watcher@V-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_ba.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x180108490 (-complete_without_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamepadInterceptionHelper::InterceptGamepadInput(
        GamepadInterceptionHelper *this,
        unsigned __int16 a2,
        char a3)
{
  __int64 v6; // r8
  _BYTE v7[56]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h]

  if ( *((_QWORD *)this + 2) )
  {
    tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>>>((struct wil::details::IFailureCallback *)v7);
    LOBYTE(v6) = a3;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2), a2, v6);
    tip2::details::shared_data<0,0,1>::complete_without_lock(v8 + 8);
    tip2::test_watcher<tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>>::~test_watcher<tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>>((__int64)v7);
  }
}
