/*
 * XREFs of ?SetHaileyTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ @ 0x18060612C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c67ea327729698759a171a3f06b6a64f___::Run @ 0x1806060A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c67ea327729698759a171a3f06b6a64f___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028B600 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180295BCC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1806045C0 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@t.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180604AF0 (--1-$test_data_control@V-$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180604B60 (--1-$test_watcher@V-$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?GetThemeId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA?AU_GUID@@PEAUIThemeManager2@@H@Z @ 0x180605810 (-GetThemeId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA-AU_GUID@@PEAU.c)
 *     ?IsEduThemeWithType@EduThemeHelpers@@YA_NAEBU_GUID@@AEBW4EduThemeTypes@@@Z @ 0x180605A9C (-IsEduThemeWithType@EduThemeHelpers@@YA_NAEBU_GUID@@AEBW4EduThemeTypes@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::SetHaileyTheme(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this)
{
  HRESULT Instance; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *v4; // rcx
  unsigned int v5; // ebx
  const enum EduThemeTypes *v6; // r8
  int v7; // edi
  __int64 v8; // rdx
  bool v9; // di
  __int64 v10; // rbx
  int v12; // [rsp+40h] [rbp-39h] BYREF
  struct IThemeManager2 *ppv; // [rsp+48h] [rbp-31h] BYREF
  int v14; // [rsp+50h] [rbp-29h] BYREF
  int v15; // [rsp+54h] [rbp-25h] BYREF
  struct _GUID v16; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v17[56]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+2Fh]
  struct _GUID v19; // [rsp+B0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  ppv = 0LL;
  Instance = CoCreateInstance(&CLSID_ThemeManager2, 0LL, 1u, &GUID_c1e8c83e_845d_4d95_81db_e283fdffc000, (LPVOID *)&ppv);
  v2 = Instance;
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(struct IThemeManager2 *))(*(_QWORD *)ppv + 40LL))(ppv);
    v2 = Instance;
    if ( Instance < 0 )
    {
      v3 = 270LL;
      goto LABEL_5;
    }
    v12 = 0;
    Instance = (*(__int64 (__fastcall **)(struct IThemeManager2 *, int *))(*(_QWORD *)ppv + 88LL))(ppv, &v12);
    v2 = Instance;
    if ( Instance < 0 )
    {
      v3 = 273LL;
      goto LABEL_5;
    }
    v15 = 0;
    Instance = (*(__int64 (__fastcall **)(struct IThemeManager2 *, int *))(*(_QWORD *)ppv + 112LL))(ppv, &v15);
    v2 = Instance;
    if ( Instance < 0 )
    {
      v3 = 275LL;
      goto LABEL_5;
    }
    if ( v12 == v15 )
    {
      v14 = 0;
      Instance = (*(__int64 (__fastcall **)(struct IThemeManager2 *, int *))(*(_QWORD *)ppv + 64LL))(ppv, &v14);
      v2 = Instance;
      if ( Instance < 0 )
      {
        v3 = 281LL;
        goto LABEL_5;
      }
      v5 = 0;
      if ( v14 > 0 )
      {
        v16.Data1 = 8;
        while ( 1 )
        {
          winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetThemeId(v4, &v19, ppv, v5);
          if ( EduThemeHelpers::IsEduThemeWithType(&v19, &v16, v6) )
            break;
          if ( (int)++v5 >= v14 )
            goto LABEL_27;
        }
        if ( v5 != -1 )
        {
          tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>>>((struct wil::details::IFailureCallback *)v17);
          v7 = (*(__int64 (__fastcall **)(struct IThemeManager2 *, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(*(_QWORD *)ppv + 96LL))(
                 ppv,
                 0LL,
                 v5,
                 1LL,
                 0,
                 0);
          if ( v7 < 0 )
          {
            v8 = 297LL;
LABEL_21:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v8,
              (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
              (const char *)(unsigned int)v7);
            tip2::test_watcher<tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>>::~test_watcher<tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>>((__int64)v17);
            v2 = v7;
            goto LABEL_28;
          }
          v7 = (*(__int64 (__fastcall **)(struct IThemeManager2 *, int *))(*(_QWORD *)ppv + 88LL))(ppv, &v12);
          if ( v7 < 0 )
          {
            v8 = 299LL;
            goto LABEL_21;
          }
          v9 = v12 == v5;
          v10 = v18;
          *(_QWORD *)v16.Data4 = v18;
          if ( v18 )
            _InterlockedIncrement((volatile signed __int32 *)(v18 + 280));
          tip2::details::shared_data<1,0,0>::begin_update(v10 + 8);
          *(_BYTE *)(v10 + 272) = v9;
          tip2::test_data_control<tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>>::~test_data_control<tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>>((void **)v16.Data4);
          tip2::details::shared_data<1,0,0>::complete_without_lock(v18 + 8);
          tip2::test_watcher<tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>>::~test_watcher<tip2::details::merged_data<_tip_EduDefaultThemeApplied,_tip_EduDefaultThemeApplied>>((__int64)v17);
        }
      }
    }
LABEL_27:
    v2 = 0;
    goto LABEL_28;
  }
  v3 = 268LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
    (const char *)(unsigned int)Instance);
LABEL_28:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  return v2;
}
