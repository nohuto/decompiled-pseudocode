/*
 * XREFs of ?GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAPEAUIBuffer@Streams@Storage@4@PEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18003A70C
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x18003A388 (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18003EE68 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x180122500 (-InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAU.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GetSeralizedPropertysetAndActivateOptions(
        const unsigned __int16 *a1,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        char a3,
        struct Windows::Storage::Streams::IBuffer **a4,
        _DWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // esi
  int inserted; // eax
  int v15; // eax
  struct Windows::Storage::Streams::IBuffer *v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+28h] [rbp-38h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v19; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v20[32]; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v19 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
  Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v18,
    a2);
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v20, &off_18075DA60);
  LOBYTE(v10) = a3 & 1;
  v12 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
          &v18,
          *(_QWORD *)(v9 + 24),
          v11,
          v10);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    inserted = InsertExperienceIdAndSerialize(a2, a1, &v17);
    v13 = inserted;
    if ( inserted >= 0 )
    {
      v15 = 16777222;
      *a5 = 16777222;
      if ( (a3 & 4) != 0 )
      {
        v15 = 150994950;
        *a5 = 150994950;
      }
      if ( (a3 & 0x10) != 0 )
      {
        v15 |= 0x10000000u;
        *a5 = v15;
      }
      if ( (a3 & 0x20) != 0 || (a3 & 1) == 0 )
      {
        v15 |= 0x40000000u;
        *a5 = v15;
      }
      if ( (a3 & 0x40) != 0 )
      {
        v15 |= 0x400000u;
        *a5 = v15;
      }
      if ( a3 < 0 )
      {
        v15 |= 0x2001000u;
        *a5 = v15;
      }
      if ( (a3 & 8) != 0 )
        *a5 = v15 & 0xFFFFFFFB;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
      *a4 = v17;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      v13 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x69,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)inserted);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v12);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  return v13;
}
