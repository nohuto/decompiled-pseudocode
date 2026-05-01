/*
 * XREFs of ?FallbackWindowActivated@GamingPosturePositioner@@QEAAX_N@Z @ 0x1804FC718
 * Callers:
 *     ?FallbackWindowActivated@GamingFallbackWindow@@AEAAX_N@Z @ 0x1804FC6C8 (-FallbackWindowActivated@GamingFallbackWindow@@AEAAX_N@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ?CancelViewFallbackTimer@GamingPosturePositioner@@AEAAXXZ @ 0x1804FB2EC (-CancelViewFallbackTimer@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?HandleViewFallback@GamingPosturePositioner@@AEAAX_N@Z @ 0x180500B10 (-HandleViewFallback@GamingPosturePositioner@@AEAAX_N@Z.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_61038858@@@details@wil@@QEAA_NXZ @ 0x180508A24 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_61038858@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall GamingPosturePositioner::FallbackWindowActivated(GamingPosturePositioner *this, char a2)
{
  GamingPosturePositioner *v4; // rcx
  const struct _tlgProvider_t *v5; // rax

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_61038858>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_61038858>::GetImpl'::`2'::impl) )
  {
    v4 = this;
    if ( !a2 )
    {
      GamingPosturePositioner::CancelViewFallbackTimer(this);
      return;
    }
  }
  else
  {
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      v5 = GamingPosturePositionerTelemetryProvider::Provider();
      if ( *(_DWORD *)v5 > 4u )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          (__int64)v5,
          byte_180808EC9,
          0LL);
    }
    v4 = this;
  }
  GamingPosturePositioner::HandleViewFallback(v4, 1);
}
