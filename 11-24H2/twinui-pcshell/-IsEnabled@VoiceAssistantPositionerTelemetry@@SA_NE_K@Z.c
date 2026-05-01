/*
 * XREFs of ?IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z @ 0x18050BF84
 * Callers:
 *     ?OnApplicationViewChanged@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18018CEC0 (-OnApplicationViewChanged@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIE.c)
 *     ??$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAHAEAHAEAUtagSIZE@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAH3AEAUtagSIZE@@@Z @ 0x180509E58 (--$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AE.c)
 *     ?CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18050A464 (-CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18050AC08 (-ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleRecoveryForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18050BB90 (-HandleRecoveryForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18050BCE0 (-HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPositionerTelemetry@@P6AXXZ@Z @ 0x180510444 (-get@-$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPosit.c)
 */

char __fastcall VoiceAssistantPositionerTelemetry::IsEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // r9
  _DWORD *v3; // rcx

  v1 = wil::details::static_lazy<VoiceAssistantPositionerTelemetry>::get(
         a1,
         _lambda_b2cc13a1030bf75285c22b578959c011_::_lambda_invoker_cdecl_);
  v2 = 0;
  v3 = *(_DWORD **)(v1 + 8);
  if ( v3 && *v3 )
    return tlgKeywordOn((__int64)v3, 0LL) != 0;
  return v2;
}
