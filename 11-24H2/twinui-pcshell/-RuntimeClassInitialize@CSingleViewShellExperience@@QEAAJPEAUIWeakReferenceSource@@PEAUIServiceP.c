/*
 * XREFs of ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1800859D8
 * Callers:
 *     ?RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18005ED04 (-RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180078610 (-RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180078904 (-RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800EDF64 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x180121ECC (-Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z.c)
 *     ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801449D0 (-RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18017CF60 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B41A0 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180240B24 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@ImeNotificationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180381A40 (-RuntimeClassInitialize@ImeNotificationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180382940 (-RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@.c)
 *     ?RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18038BB80 (-RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18038D600 (-RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18039A7B4 (-RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRING__@@11W4ZBID@@@Z @ 0x1803C5FA0 (-RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRI.c)
 *     ?RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1803CBA68 (-RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x180085D98 (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 *     ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x18008609C (-RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::RuntimeClassInitialize(
        HSTRING *newString,
        struct IWeakReferenceSource *a2,
        struct IServiceProvider *a3,
        HSTRING a4,
        HSTRING string)
{
  HSTRING *v9; // rbx
  HRESULT v10; // ebx
  HSTRING *v11; // rbx
  HRESULT v12; // edi
  HSTRING v13; // rbx
  __int64 *v14; // rax
  HSTRING *v15; // rbx
  HRESULT v16; // eax
  int v17; // edx
  unsigned int v18; // r8d
  HSTRING v19; // rdi
  __int64 v20; // rcx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HSTRING *v22; // r14
  __int64 v24; // rdx
  __int64 v25; // rdx
  HSTRING v26; // rdi
  __int64 (__fastcall *v27)(HSTRING, GUID *, __int64 **); // rbx
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  __int64 v30; // rdx
  __int64 *v31; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING v33; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v9 = newString + 1;
  if ( !a4 || a4 != *v9 )
  {
    WindowsDeleteString(*v9);
    *v9 = 0LL;
    v10 = WindowsDuplicateString(a4, v9);
    if ( v10 < 0 )
    {
      v24 = 67LL;
      goto LABEL_28;
    }
  }
  v11 = newString + 2;
  if ( string && string == *v11
    || (WindowsDeleteString(*v11), *v11 = 0LL, v12 = WindowsDuplicateString(string, newString + 2), v12 >= 0) )
  {
    v13 = *v11;
    if ( !v13 || v13 != *newString )
    {
      WindowsDeleteString(*newString);
      *newString = 0LL;
      v10 = WindowsDuplicateString(v13, newString);
      if ( v10 < 0 )
      {
        v24 = 69LL;
        goto LABEL_28;
      }
    }
    v31 = (__int64 *)(newString + 12);
    v14 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v31);
    v10 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>(a2, v14);
    if ( v10 < 0 )
    {
      v24 = 71LL;
      goto LABEL_28;
    }
    v10 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *, HSTRING *))(*(_QWORD *)newString[11] + 136LL))(
            newString[11],
            newString,
            newString + 10);
    if ( v10 < 0 )
    {
      v24 = 73LL;
      goto LABEL_28;
    }
    v15 = newString + 4;
    v33 = 0LL;
    v16 = WindowsCreateStringReference(L"Windows.Foundation.Collections.PropertySet", 0x2Au, &hstringHeader, &v33);
    if ( v16 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16, v17, v18);
      __debugbreak();
    }
    v19 = v33;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)newString + 4);
    *v15 = 0LL;
    v31 = 0LL;
    v12 = RoActivateInstance(v19, &v31);
    if ( v12 >= 0 )
    {
      v20 = *(_QWORD *)&GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data1
          - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
      if ( *(_QWORD *)&GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
        v20 = *(_QWORD *)GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data4
            - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
      if ( v20 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64 *, GUID *, HSTRING *))*v31)(
                v31,
                &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
                newString + 4);
        (*(void (__fastcall **)(__int64 *))(*v31 + 16))(v31);
      }
      else
      {
        *v15 = (HSTRING)v31;
      }
    }
    if ( v12 >= 0 )
    {
      if ( (*((_BYTE *)newString + 132) & 0x10) != 0
        || (QueryService = a3->lpVtbl->QueryService,
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)newString + 13),
            v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, HSTRING *))QueryService)(
                    a3,
                    &GUID_be47f3f2_56c0_40dd_a5ad_ba88325ea0ce,
                    &GUID_69bb2711_c5f2_41da_8d6d_448a336a24c5,
                    newString + 13),
            v10 >= 0) )
      {
        v22 = newString + 14;
        v10 = CSingleViewShellExperience::RegisterAumid(
                (CSingleViewShellExperience *)newString,
                newString[1],
                (struct EventRegistrationToken *)newString + 14);
        if ( v10 >= 0 )
        {
          if ( (*((_BYTE *)newString + 132) & 4) == 0 || !*v22 )
          {
LABEL_23:
            v10 = (*(__int64 (__fastcall **)(HSTRING, struct IServiceProvider *))(*(_QWORD *)newString[10] + 16LL))(
                    newString[10],
                    a3);
            if ( v10 < 0 )
            {
              v24 = 97LL;
            }
            else
            {
              if ( (*((_BYTE *)newString + 132) & 1) == 0 )
                return 0LL;
              v10 = (*(__int64 (__fastcall **)(HSTRING, struct IServiceProvider *))(*(_QWORD *)newString[10] + 24LL))(
                      newString[10],
                      a3);
              if ( v10 >= 0 )
                return 0LL;
              v24 = 103LL;
            }
            goto LABEL_28;
          }
          v31 = 0LL;
          v26 = newString[13];
          v27 = **(__int64 (__fastcall ***)(HSTRING, GUID *, __int64 **))v26;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
          v28 = v27(v26, &GUID_b18447e2_209d_43d3_add5_a3434f4d558b, &v31);
          v29 = retaddr;
          if ( v28 >= 0 )
          {
            v28 = (*(__int64 (__fastcall **)(__int64 *, HSTRING))(*v31 + 48))(v31, *v22);
            v29 = retaddr;
            if ( v28 >= 0 )
            {
LABEL_47:
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
              goto LABEL_23;
            }
            v30 = 92LL;
          }
          else
          {
            v30 = 90LL;
          }
          wil::details::in1diag3::_Log_Hr(
            v29,
            (void *)v30,
            (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
            (const char *)(unsigned int)v28);
          goto LABEL_47;
        }
        v24 = 83LL;
      }
      else
      {
        v24 = 80LL;
      }
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
    v25 = 76LL;
  }
  else
  {
    v25 = 68LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v12);
  return (unsigned int)v12;
}
