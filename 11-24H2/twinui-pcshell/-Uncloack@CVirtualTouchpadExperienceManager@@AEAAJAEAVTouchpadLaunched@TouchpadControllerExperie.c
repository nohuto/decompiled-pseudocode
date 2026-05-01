/*
 * XREFs of ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1803A08E4
 * Callers:
 *     ?OnViewShown@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18039F560 (-OnViewShown@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x18003E8B0 (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180122FC0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1802132D4 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJU_GUID@@PEAPEAUIInspectable@@@Z1@Z @ 0x18039D2A8 (--$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ?AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManagerAnimationHelper@@@Z @ 0x18039D9D0 (-AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManage.c)
 *     ?Show@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x1803A0170 (-Show@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualTouchpadExperienceManager::Uncloack(
        CVirtualTouchpadExperienceManager *this,
        struct TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int128 v9; // xmm6
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // r8
  struct Windows::Foundation::Collections::IPropertySet *v11; // rbx
  struct Windows::Foundation::Collections::IPropertySet *v12; // r9
  int v13; // eax
  struct Windows::Foundation::Collections::IPropertySet *v15; // [rsp+28h] [rbp-39h] BYREF
  __int64 v16; // [rsp+30h] [rbp-31h] BYREF
  HSTRING_HEADER v17; // [rsp+38h] [rbp-29h] BYREF
  HSTRING v18; // [rsp+50h] [rbp-11h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-9h] BYREF
  __int64 v20; // [rsp+70h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::Show(a2);
  v4 = CVirtualTouchpadExperienceManager::AnimateFrame((__int64)this, 0, (__int64)this + 712);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x41C,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 43) + 40LL))(*((_QWORD *)this + 43), 0LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = CExperienceManagerAnimationHelper::End((CVirtualTouchpadExperienceManager *)((char *)this + 712));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x423,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    v15 = 0LL;
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v8 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v20,
           (__int64 *)&v15);
    v6 = v8;
    if ( v8 >= 0 )
    {
      Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v16,
        v15);
      v9 = *(_OWORD *)(*((_QWORD *)a2 + 34) + 8LL);
      v18 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v17, L"LaunchActivityId", 0x11u, 0x10u);
      *(_OWORD *)&hstringHeader.Reserved.Reserved1 = v9;
      Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<_GUID>(
        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v16,
        v18,
        v10,
        (__int128 *)&hstringHeader);
      v11 = v15;
      v18 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v17, L"LaunchActivityId", 0x11u, 0x10u);
      v13 = CSingleViewShellExperience::Reactivate(
              (CVirtualTouchpadExperienceManager *)((char *)this + 64),
              v18,
              v11,
              v12);
      v6 = v13;
      if ( v13 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x42C,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x427,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41F,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  }
  return v6;
}
