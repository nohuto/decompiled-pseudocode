/*
 * XREFs of ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x180391EF0
 * Callers:
 *     ?OnIdleStateChanged@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x180216FD0 (-OnIdleStateChanged@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z.c)
 *     ?DimStart@CStartExperienceManager@@UEAAJXZ @ 0x18038FA10 (-DimStart@CStartExperienceManager@@UEAAJXZ.c)
 *     ?UnDimStart@CStartExperienceManager@@UEAAJXZ @ 0x1803929A0 (-UnDimStart@CStartExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x18003E8B0 (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18003EE68 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180122FC0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CStartExperienceManager::ReactivateHelper(
        CStartExperienceManager *this,
        const unsigned __int16 *a2,
        char a3)
{
  int v5; // eax
  int v6; // ebx
  unsigned int v7; // r8d
  HSTRING_HEADER *v8; // rax
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // r8d
  struct Windows::Foundation::Collections::IPropertySet *v12; // rbx
  HSTRING_HEADER *v13; // rax
  struct Windows::Foundation::Collections::IPropertySet *v14; // r9
  __int64 v16; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v17; // [rsp+28h] [rbp-38h] BYREF
  const WCHAR *v18; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v18 = a2;
  v17 = 0LL;
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v5 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v20,
         (__int64 *)&v17);
  v6 = v5;
  if ( v5 >= 0 )
  {
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v16,
      v17);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           &hstringHeader,
           (const WCHAR **)&off_18075D128,
           v7);
    v10 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            &v16,
            (__int64)v8[1].Reserved.Reserved1,
            v9,
            a3);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v12 = v17;
      v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v18, v11);
      v6 = CSingleViewShellExperience::Reactivate(
             (CStartExperienceManager *)((char *)this + 320),
             (HSTRING)v13[1].Reserved.Reserved1,
             v12,
             v14);
      if ( v6 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
        v6 = 0;
        goto LABEL_8;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x488,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x486,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  }
LABEL_8:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  return (unsigned int)v6;
}
