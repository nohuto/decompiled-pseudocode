/*
 * XREFs of ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x180087730
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x18007F630 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     _lambda_69a92d371a2c7508f1f4ce514cd8b1f7_::operator() @ 0x180084200 (_lambda_69a92d371a2c7508f1f4ce514cd8b1f7_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@V_lambda_086e13a8bd4c581c1d26f0fece32f4a3_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@AEAAJPEBGAEBV_lambda_086e13a8bd4c581c1d26f0fece32f4a3_@@@Z @ 0x1800482FC (--$SetValue@V_lambda_086e13a8bd4c581c1d26f0fece32f4a3_@@@-$PropertySetHelperBase@$1-RuntimeClass.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004AF68 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAA@XZ @ 0x18004C15C (--1-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Trigge.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180059B44 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18008030C (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x180081C88 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180083B0C (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x18008480C (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?GetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800858BC (-GetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180086B70 (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall Windows::Services::TargetedContent::Internal::SetTriggerState(__int64 *a1, __int64 a2, int a3)
{
  PCWSTR StringRawBuffer; // rbx
  _QWORD *v6; // rax
  __int64 (__fastcall ****v7)(_QWORD, GUID *, __int64 *); // rbx
  int CompositeValue; // eax
  int v9; // eax
  int v10; // eax
  std::_Ref_count_base *v11; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v12; // [rsp+20h] [rbp-50h] BYREF
  const WCHAR *v13; // [rsp+28h] [rbp-48h] BYREF
  __int64 (__fastcall ****v14)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-38h]
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  __int64 (__fastcall ***v17[4])(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  HSTRING string; // [rsp+A8h] [rbp+38h] BYREF

  Windows::Services::TargetedContent::Internal::CreateTriggerKey((Microsoft::WRL::Wrappers::HString *)&string, a2);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v6 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v16,
         a1);
  if ( !Windows::Services::TargetedContent::Internal::AlreadyRegistered(v6, (__int64)StringRawBuffer) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL,
      (int)v12);
  (*(void (__fastcall **)(__int64, __int64 (__fastcall *****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*a1 + 24LL))(
    *a1,
    &v14);
  v12 = 0LL;
  v7 = v14;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  CompositeValue = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetCompositeValue(
                     v7,
                     (__int64)string,
                     (__int64 *)&v12);
  if ( CompositeValue < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x73,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)CompositeValue,
      (int)v12);
  CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
    (CreativeFramework::Triggers::PropertySetHelper *)v17,
    v12);
  v13 = (const WCHAR *)Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(a3);
  v9 = CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetValue<_lambda_086e13a8bd4c581c1d26f0fece32f4a3_>(
         (__int64)v17,
         L"triggerState",
         &v13);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v9,
      (int)v12);
  v10 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
          (__int64)v14,
          (__int64)string,
          v17[0]);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v10,
      (int)v12);
  CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::~PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>((__int64 *)v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  WindowsDeleteString(string);
  string = 0LL;
  v11 = (std::_Ref_count_base *)a1[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
}
