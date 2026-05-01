/*
 * XREFs of ?ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180639FE8
 * Callers:
 *     ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ @ 0x18063941C (--R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x180295BA8 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??$InputSwitchTrace@AEAY0P@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0P@$$CBG@Z @ 0x180638744 (--$InputSwitchTrace@AEAY0P@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0P@$$CBG@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806392C8 (--1-$test_data_control@V-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@1@XZ @ 0x1806393E0 (--C-$tip_test@V-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test.c)
 *     ?CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1806396BC (-CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::ShowControlCenterSwitcher(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this)
{
  __int64 v2; // rbx
  int v3; // esi
  _DWORD *v4; // rbx
  int v5; // eax
  bool v7; // [rsp+20h] [rbp-38h]
  char v8; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v10; // [rsp+60h] [rbp+8h] BYREF

  InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[15]>(L"Trying Show");
  if ( !*((_QWORD *)this + 22) )
  {
    InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[15]>(L"ControlCenter null");
    return 0;
  }
  if ( !winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CanShowControlCenterSwitcher(this) )
  {
    InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[15]>(L"No ControlCenter");
    if ( *((_QWORD *)this + 21) )
    {
      v2 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * (*((_QWORD *)this + 20) & (*((_QWORD *)this + 19) - 1LL)));
      if ( !*(_DWORD *)v2 )
      {
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>::operator->(
                      v2 + 16,
                      (__int64 *)&v10)
                 + 274) = 0;
        tip2::test_data_control<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>::~test_data_control<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>(&v10);
        tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)(v2 + 16));
      }
    }
    return 0;
  }
  v3 = *((_DWORD *)this + 63);
  if ( *((_QWORD *)this + 21) )
  {
    v4 = *(_DWORD **)(*((_QWORD *)this + 18) + 8 * (*((_QWORD *)this + 20) & (*((_QWORD *)this + 19) - 1LL)));
    v3 = v4[8];
    if ( !*v4 )
    {
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>::operator->(
                    (__int64)(v4 + 4),
                    (__int64 *)&v10)
               + 273) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>::~test_data_control<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>(&v10);
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>::operator->(
                    (__int64)(v4 + 4),
                    (__int64 *)&v10)
               + 274) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>::~test_data_control<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>(&v10);
    }
  }
  v8 = 0;
  v7 = v3 == 4;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, bool, char, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 22) + 56LL))(
         *((_QWORD *)this + 22),
         *((_QWORD *)this + 34),
         0LL,
         0LL,
         v7,
         v8,
         0LL,
         0LL,
         0LL);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x222,
      (int)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
      (const char *)(unsigned int)v5);
  InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[15]>(L"Called Show");
  return 1;
}
