/*
 * XREFs of GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1 @ 0x180359D10
 * Callers:
 *     GamingOverlayExperienceManager::SendGamepadCommand$_InitCoro$2 @ 0x180359C98 (GamingOverlayExperienceManager--SendGamepadCommand$_InitCoro$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800472A0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$com_query@VGamingOverlayExperienceManager@@PEAV1@@wil@@YA?AV?$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@0@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x180344E98 (--$com_query@VGamingOverlayExperienceManager@@PEAV1@@wil@@YA-AV-$com_ptr_t@VGamingOverlayExperie.c)
 *     ??1?$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180347AF8 (--1-$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x18034D808 (-GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180354038 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59192315@@@details@wil@@QEAA_NXZ @ 0x18035FD8C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59192315@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x18035FEC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprove_ea_18035FEC0.c)
 *     ?IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ @ 0x1803698F8 (-IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ.c)
 *     ?ShouldNexusLongPressOpenTaskSwitcher@NexusPolicyManager@@QEBA_NXZ @ 0x180369C24 (-ShouldNexusLongPressOpenTaskSwitcher@NexusPolicyManager@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall GamingOverlayExperienceManager::SendGamepadCommand__ResumeCoro_1(char *a1)
{
  __int64 v2; // r15
  int v3; // eax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, SID *, GUID *, char *); // rbx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  wchar_t *v10; // rbx
  NexusPolicyManager *v11; // rcx
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, SID *, GUID *, char *); // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdi
  int (__fastcall *v17)(__int64, SID *, GUID *, char *); // rbx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned __int64 v21; // rdx
  __int64 v22; // r9
  unsigned __int8 v23; // r8
  unsigned __int64 v24; // r8
  const WCHAR *v25; // rdx
  int v26; // eax
  int v27; // eax
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_56;
      case 2:
        *((_QWORD *)a1 + 2) = 0LL;
        v2 = *(_QWORD *)(a1 + 241);
        *((_QWORD *)a1 + 3) = v2;
        wil::com_query<GamingOverlayExperienceManager,GamingOverlayExperienceManager *>(
          (__int64 *)a1 + 2,
          (__int64 *)a1 + 3);
        if ( !GamingOverlayExperienceManager::GameBarSupportsGamepadCommands((GamingOverlayExperienceManager *)v2) )
          goto LABEL_55;
        v3 = *(_DWORD *)(a1 + 257);
        if ( v3 != 2 )
        {
          if ( v3 != 1 )
            goto LABEL_55;
          v20 = *(_DWORD *)(a1 + 261);
          if ( v20 )
          {
            if ( v20 == 1 )
            {
              v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_SHARE_LONGPRESS&source=GbEm";
            }
            else
            {
              if ( v20 != 2 )
                goto LABEL_55;
              v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_SHARE_DOUBLEPRESS&source=GbEm";
            }
          }
          else
          {
            v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_SHARE_SHORTPRESS&source=GbEm";
          }
          goto LABEL_43;
        }
        if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
          goto LABEL_12;
        *((_QWORD *)a1 + 4) = 0LL;
        v4 = *(_QWORD *)(v2 + 448);
        v5 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v4 + 24LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 4);
        v6 = v5(v4, &SID_ImmersiveLauncher, &GUID_d8d60399_a0f1_f987_5551_321fd1b49864, a1 + 32);
        v7 = retaddr;
        if ( v6 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1 + 4) + 40LL))(*((_QWORD *)a1 + 4), 5LL);
          v7 = retaddr;
          if ( v6 >= 0 )
          {
LABEL_11:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 4);
LABEL_12:
            v9 = *(_DWORD *)(a1 + 261);
            switch ( v9 )
            {
              case 0:
                if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl)
                  || !(unsigned int)IsGamingFullScreenExperienceActive()
                  || !NexusPolicyManager::IsLegacyNexusEnabled(*(NexusPolicyManager **)(v2 + 1040)) )
                {
                  v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_NEXUS_SHORTPRESS&source=GbEm";
                  break;
                }
LABEL_55:
                wil::com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>::~com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>((__int64 *)a1 + 2);
                goto LABEL_56;
              case 1:
                if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
                {
                  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59192315>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59192315>::GetImpl'::`2'::impl) )
                  {
                    *((_QWORD *)a1 + 6) = 0LL;
                    v16 = *(_QWORD *)(v2 + 448);
                    v17 = *(int (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v16 + 24LL);
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 6);
                    if ( v17(v16, &SID_AllUpView, &GUID_e053969d_e07d_482d_ae3b_17d1f01bf1ad, a1 + 48) >= 0 )
                    {
                      v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 432) + 24LL))(*(_QWORD *)(v2 + 432));
                      if ( v18 < 0 )
                        wil::details::in1diag3::_Log_Hr(
                          retaddr,
                          (void *)0x171D,
                          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                          (const char *)(unsigned int)v18);
                      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 6) + 24LL))(
                              *((_QWORD *)a1 + 6),
                              0LL,
                              0LL);
                      if ( v19 < 0 )
                        wil::details::in1diag3::_Log_Hr(
                          retaddr,
                          (void *)0x171E,
                          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                          (const char *)(unsigned int)v19);
                    }
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 6);
                    wil::com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>::~com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>((__int64 *)a1 + 2);
                    goto LABEL_56;
                  }
                  if ( NexusPolicyManager::ShouldNexusLongPressOpenTaskSwitcher(v11) )
                  {
                    *((_QWORD *)a1 + 5) = 0LL;
                    v12 = *(_QWORD *)(v2 + 448);
                    v13 = *(int (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v12 + 24LL);
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 5);
                    if ( v13(v12, &SID_AllUpView, &GUID_e053969d_e07d_482d_ae3b_17d1f01bf1ad, a1 + 40) >= 0 )
                    {
                      v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 432) + 24LL))(*(_QWORD *)(v2 + 432));
                      if ( v14 < 0 )
                        wil::details::in1diag3::_Log_Hr(
                          retaddr,
                          (void *)0x170E,
                          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                          (const char *)(unsigned int)v14);
                      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 5) + 24LL))(
                              *((_QWORD *)a1 + 5),
                              0LL,
                              0LL);
                      if ( v15 < 0 )
                        wil::details::in1diag3::_Log_Hr(
                          retaddr,
                          (void *)0x170F,
                          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                          (const char *)(unsigned int)v15);
                    }
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 5);
                    wil::com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>::~com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>((__int64 *)a1 + 2);
LABEL_56:
                    if ( *((_WORD *)a1 + 5) )
                      operator delete(a1, (const struct std::nothrow_t *)0x110);
                    return;
                  }
                }
                v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_NEXUS_LONGPRESS&source=GbEm";
                break;
              case 2:
                v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_NEXUS_DOUBLEPRESS&source=GbEm";
                break;
              default:
                goto LABEL_55;
            }
LABEL_43:
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
            {
              memset_0(a1 + 64, 0, 0x82uLL);
              v21 = 0LL;
              v22 = *(_QWORD *)(a1 + 249);
              do
              {
                v23 = *(_BYTE *)(v22 + v21) & 0xF;
                *(_WORD *)&a1[4 * v21 + 64] = (*(_BYTE *)(v22 + v21) >> 4)
                                            + ((unsigned __int8)(*(_BYTE *)(v22 + v21) >> 4) < 0xAu ? 48 : 55);
                *(_WORD *)&a1[4 * v21++ + 66] = v23 + (v23 < 0xAu ? 48 : 55);
              }
              while ( v21 < 0x20 );
              std::wstring::wstring((char **)a1 + 26, v10);
              std::wstring::append((_QWORD *)a1 + 26, L"&deviceId=", 0xAuLL);
              v24 = -1LL;
              do
                ++v24;
              while ( *(_WORD *)&a1[2 * v24 + 64] );
              std::wstring::append((_QWORD *)a1 + 26, a1 + 64, v24);
              v25 = (const WCHAR *)(a1 + 208);
              if ( *((_QWORD *)a1 + 29) > 7uLL )
                v25 = (const WCHAR *)*((_QWORD *)a1 + 26);
              v26 = GamingOverlayExperienceManager::LaunchGameBar((GamingOverlayExperienceManager *)v2, v25, 7u);
              if ( v26 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x1754,
                  (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                  (const char *)(unsigned int)v26);
              std::wstring::_Tidy_deallocate((void **)a1 + 26);
            }
            else
            {
              v27 = GamingOverlayExperienceManager::LaunchGameBar((GamingOverlayExperienceManager *)v2, v10, 7u);
              if ( v27 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x1758,
                  (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                  (const char *)(unsigned int)v27);
            }
            goto LABEL_55;
          }
          v8 = 5860LL;
        }
        else
        {
          v8 = 5858LL;
        }
        wil::details::in1diag3::_Log_Hr(
          v7,
          (void *)v8,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v6);
        goto LABEL_11;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
