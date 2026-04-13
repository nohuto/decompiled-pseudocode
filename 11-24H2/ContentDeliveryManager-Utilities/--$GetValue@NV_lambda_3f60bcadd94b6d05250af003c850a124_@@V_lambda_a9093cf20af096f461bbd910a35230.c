/*
 * XREFs of ??$GetValue@NV_lambda_3f60bcadd94b6d05250af003c850a124_@@V_lambda_a9093cf20af096f461bbd910a352307f_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEBAJPEB_W_NPEANAEBV_lambda_3f60bcadd94b6d05250af003c850a124_@@V_lambda_a9093cf20af096f461bbd910a352307f_@@@Z @ 0x180082978
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800848A0 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x1800866F8 (-HasKey@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     ?Lookup@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x1800868D0 (-Lookup@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetValue<double,_lambda_3f60bcadd94b6d05250af003c850a124_,_lambda_a9093cf20af096f461bbd910a352307f_>(
        __int64 a1,
        __int64 a2,
        char a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  int HasKey; // ebx
  __int64 v9; // rdx
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF
  char v17; // [rsp+40h] [rbp+18h] BYREF

  v17 = a3;
  v16 = a2;
  HasKey = *(_DWORD *)(a1 + 16);
  if ( HasKey < 0 )
  {
    v9 = 361LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)HasKey);
    return (unsigned int)HasKey;
  }
  v17 = 0;
  HasKey = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
             a1,
             L"scoreValue",
             &v17);
  if ( HasKey < 0 )
  {
    v9 = 366LL;
    goto LABEL_3;
  }
  if ( v17 )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    v11 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Lookup(
            a1,
            L"scoreValue",
            &v16);
    HasKey = v11;
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 376LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
        (const char *)v12);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
      return (unsigned int)HasKey;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v16 + 128LL))(v16, a4);
    HasKey = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x77,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v14);
      v12 = (unsigned int)HasKey;
      v13 = 377LL;
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  }
  else
  {
    *a4 = a6;
  }
  return 0LL;
}
