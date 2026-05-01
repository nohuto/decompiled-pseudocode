/*
 * XREFs of ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x1804904A8
 * Callers:
 *     _lambda_19713afaab0e793c65926cb0aea68e27_::operator() @ 0x18048E6B8 (_lambda_19713afaab0e793c65926cb0aea68e27_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180288A98 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180294B9C (--B-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_24ba1d0144fdbdb30bf1c64e70acfff3___ @ 0x18048D36C (Windows--Internal--ComTaskPool--QueueTask__lambda_24ba1d0144fdbdb30bf1c64e70acfff3___.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18048E37C (--1-$test_data_control@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18048E3B4 (--1-$test_watcher@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@1@XZ @ 0x18048E594 (--C-$tip_test@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA-AV-.c)
 *     _lambda_f117f3ffe7121185524fa0618ecb49dc_::operator() @ 0x18048EBD4 (_lambda_f117f3ffe7121185524fa0618ecb49dc_--operator().c)
 *     ?ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ @ 0x18048F094 (-ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ.c)
 *     ?SetNoActivate@AccessibilityExperienceManager@@UEAAJH@Z @ 0x18048FFC0 (-SetNoActivate@AccessibilityExperienceManager@@UEAAJH@Z.c)
 *     ?_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x180490428 (-_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewIn.c)
 *     ?_GetMonitorScaleForWindow@AccessibilityExperienceManager@@CAJPEAUHWND__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1804908F0 (-_GetMonitorScaleForWindow@AccessibilityExperienceManager@@CAJPEAUHWND__@@PEAW4DEVICE_SCALE_FACT.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180491860 (-start@-$tip_test@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@2@XZ @ 0x1804918BC (-watch_errors@-$tip_test@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall AccessibilityExperienceManager::_CreateModalExperienceAsync(AccessibilityExperienceManager *this)
{
  __int64 *v2; // rdi
  char v3; // bl
  HWND v4; // rcx
  __int64 v5; // rbx
  unsigned int v6; // ebx
  int MonitorScaleForWindow; // eax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 *); // rdi
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64 *); // rdi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  const unsigned __int16 *v25; // r8
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  wil::details::in1diag3 *v31; // rcx
  int v32; // eax
  __int64 v34; // [rsp+20h] [rbp-60h] BYREF
  __int64 v35; // [rsp+28h] [rbp-58h] BYREF
  AccessibilityExperienceManager *v36; // [rsp+30h] [rbp-50h] BYREF
  char v37; // [rsp+38h] [rbp-48h]
  _BYTE v38[64]; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  __int64 v40; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v41; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v42; // [rsp+D0h] [rbp+50h] BYREF
  void *v43; // [rsp+D8h] [rbp+58h] BYREF

  v2 = (__int64 *)((char *)this + 416);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator bool((__int64 *)this + 52) )
    tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete(v2);
  tip2::tip_test<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::start(
    v2,
    &v36);
  tip2::tip_test<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::watch_errors(
    v2,
    v38);
  v3 = *((_BYTE *)this + 464);
  *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::operator->(
                (__int64)v2,
                (__int64 *)&v43)
           + 272) = v3;
  tip2::test_data_control<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::~test_data_control<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>(&v43);
  v5 = *((_QWORD *)this + 50);
  v35 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v41 = 0LL;
  v40 = 0LL;
  v42 = 0LL;
  if ( *((_QWORD *)this + 51) )
  {
    MonitorScaleForWindow = AccessibilityExperienceManager::_GetMonitorScaleForWindow(
                              v4,
                              (enum DEVICE_SCALE_FACTOR *)this + 99);
    if ( MonitorScaleForWindow < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2F8,
        (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)MonitorScaleForWindow);
    v36 = this;
    v37 = 1;
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
    if ( v5 )
    {
      v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
      v11 = v10(v5, &v41);
      v6 = v11;
      if ( v11 >= 0 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 47, &v41);
        v12 = v41;
        v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 32LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
        v14 = v13(v12, &v40);
        v6 = v14;
        if ( v14 >= 0 )
        {
          v34 = 0LL;
          v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v40 + 24LL))(v40, &v34);
          v6 = v15;
          if ( v15 >= 0 )
          {
            AccessibilityExperienceManager::ExcludeWindowFromCapture(this, v16, v17, v18);
            AccessibilityExperienceManager::SetNoActivate(
              (AccessibilityExperienceManager *)((char *)this + 144),
              *((_DWORD *)this + 117) == 0x8000000);
            v19 = v40;
            v20 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v40 + 144LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v42);
            v21 = v20(v19, &v42);
            v6 = v21;
            if ( v21 >= 0 )
            {
              v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v42 + 88LL))(v42, 1023LL, 0LL);
              if ( v22 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x315,
                  (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                  (const char *)(unsigned int)v22);
              v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v42 + 48LL))(v42, 1LL, 1LL);
              if ( v23 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x316,
                  (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                  (const char *)(unsigned int)v23);
              v24 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v40 + 112LL))(v40, 255LL, 16LL);
              v6 = v24;
              if ( v24 >= 0 )
              {
                v26 = AccessibilityExperienceManager::_ChangeExperiencePropertiesForView(
                        this,
                        (struct IApplicationFrameWrapper **)this + 46,
                        v25);
                v6 = v26;
                if ( v26 >= 0 )
                {
                  v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v42 + 32LL))(v42, 0LL);
                  if ( v27 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x31E,
                      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                      (const char *)(unsigned int)v27);
                  v28 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v40 + 72LL))(
                          v40,
                          qword_1808CBCF0,
                          0LL);
                  if ( v28 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x321,
                      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                      (const char *)(unsigned int)v28);
                  v29 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 48LL))(v41, 2LL);
                  v6 = v29;
                  if ( v29 >= 0 )
                  {
                    v30 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 128LL))(v41, 1LL);
                    v31 = retaddr;
                    if ( v30 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x326,
                        (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                        (const char *)(unsigned int)v30);
                    v43 = this;
                    v32 = Windows::Internal::ComTaskPool::QueueTask__lambda_24ba1d0144fdbdb30bf1c64e70acfff3___(
                            (__int64)v31,
                            &v43);
                    v6 = v32;
                    if ( v32 >= 0 )
                    {
                      v6 = 0;
                      goto LABEL_39;
                    }
                    v8 = (unsigned int)v32;
                    v9 = 829LL;
                  }
                  else
                  {
                    v8 = (unsigned int)v29;
                    v9 = 804LL;
                  }
                }
                else
                {
                  v8 = (unsigned int)v26;
                  v9 = 796LL;
                }
              }
              else
              {
                v8 = (unsigned int)v24;
                v9 = 792LL;
              }
            }
            else
            {
              v8 = (unsigned int)v21;
              v9 = 787LL;
            }
          }
          else
          {
            v8 = (unsigned int)v15;
            v9 = 780LL;
          }
        }
        else
        {
          v8 = (unsigned int)v14;
          v9 = 777LL;
        }
      }
      else
      {
        v8 = (unsigned int)v11;
        v9 = 774LL;
      }
    }
    else
    {
      v6 = -2144927145;
      v8 = 2150040151LL;
      v9 = 773LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)v8);
    v37 = 0;
    lambda_f117f3ffe7121185524fa0618ecb49dc_::operator()((__int64)&v36);
  }
  else
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F6,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)0x8007000ELL);
  }
LABEL_39:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v42);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
  tip2::test_watcher<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::~test_watcher<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>((__int64)v38);
  return v6;
}
