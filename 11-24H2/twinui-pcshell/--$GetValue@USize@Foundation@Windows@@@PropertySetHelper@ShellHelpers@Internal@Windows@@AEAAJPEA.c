/*
 * XREFs of ??$GetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAUSize@63@@Z1@Z @ 0x1800E6B7C
 * Callers:
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800E4500 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800E6C60 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x1800276B0 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BMA@AA @ 0x18036C708 (--_9IPropertyValue@Foundation@Windows@@$BMA@AA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<Windows::Foundation::Size>(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        __int64 a3,
        _QWORD *a4)
{
  int PropVal; // ebx
  int v8; // eax
  struct Windows::Foundation::IPropertyValue *v9; // rcx
  struct Windows::Foundation::IPropertyValue *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Foundation::IPropertyValue *v13; // [rsp+40h] [rbp+18h] BYREF

  *a4 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(this, a2, &v13);
  if ( PropVal < 0 )
  {
    v11 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return (unsigned int)PropVal;
  }
  v8 =  Windows::Foundation::IPropertyValue::`vcall'{192,{flat}}(v13, a4);
  PropVal = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    return (unsigned int)PropVal;
  }
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
