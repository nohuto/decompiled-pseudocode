/*
 * XREFs of ?SetStringValue@Internal@TargetedContent@Services@Windows@@YAXAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAUHSTRING__@@@Z @ 0x18008690C
 * Callers:
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180086994 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@V_lambda_086e13a8bd4c581c1d26f0fece32f4a3_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@AEAAJPEBGAEBV_lambda_086e13a8bd4c581c1d26f0fece32f4a3_@@@Z @ 0x1800480FC (--$SetValue@V_lambda_086e13a8bd4c581c1d26f0fece32f4a3_@@@-$PropertySetHelperBase@$1-RuntimeClass.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::SetStringValue(
        Windows::Services::TargetedContent::Internal *this,
        const WCHAR *a2,
        wchar_t *a3,
        HSTRING a4)
{
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PCWSTR StringRawBuffer; // [rsp+48h] [rbp+20h] BYREF

  if ( !WindowsIsStringEmpty((HSTRING)a3) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)a3, 0LL);
    v7 = CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetValue<_lambda_086e13a8bd4c581c1d26f0fece32f4a3_>(
           (__int64)this,
           a2,
           &StringRawBuffer);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C3,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v7,
        v8);
  }
}
