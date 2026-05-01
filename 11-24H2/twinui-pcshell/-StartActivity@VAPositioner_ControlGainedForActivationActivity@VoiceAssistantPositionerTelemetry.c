/*
 * XREFs of ?StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18050D09C
 * Callers:
 *     ?ControlGainedForActivation@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18050A7F0 (-ControlGainedForActivation@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIO.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1800CD884 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@.c)
 *     ?GetActivationId@VoiceAssistantPositionerTelemetry@@CA_KPEAUIUnknown@@@Z @ 0x1800CD958 (-GetActivationId@VoiceAssistantPositionerTelemetry@@CA_KPEAUIUnknown@@@Z.c)
 *     ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x1800CDB4C (-GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1805105A0 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgRef.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::StartActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // rdi
  const GUID *v8; // rax
  __int64 ActivationId; // [rsp+50h] [rbp-38h] BYREF
  const WCHAR *CensoredAumidFromView; // [rsp+58h] [rbp-30h] BYREF
  __int64 v11[5]; // [rsp+60h] [rbp-28h] BYREF
  bool v12; // [rsp+90h] [rbp+8h] BYREF
  DWORD CurrentThreadId; // [rsp+A8h] [rbp+20h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v6 = WindowManagementLogging::Provider();
  v7 = (__int64)v6;
  if ( *(_DWORD *)v6 > 4u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
  {
    ActivationId = VoiceAssistantPositionerTelemetry::GetActivationId(a3);
    v12 = a3 != 0LL;
    CensoredAumidFromView = VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(a2);
    v11[0] = 50331648LL;
    CurrentThreadId = GetCurrentThreadId();
    v8 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v7,
      byte_18080AE5F,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL),
      v8,
      (__int64)v11,
      (__int64)&CurrentThreadId,
      &CensoredAumidFromView,
      (__int64)&v12,
      (__int64)&ActivationId);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
