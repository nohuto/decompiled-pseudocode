/*
 * XREFs of ?HasFallbackOccurredRecently@GamingPosturePositioner@@AEAA_NXZ @ 0x180501938
 * Callers:
 *     ?HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@_N@Z @ 0x1805008B0 (-HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@_N@Z.c)
 *     ?HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x180501458 (-HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018E94C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$CheckedTimeSinceLastFallback@AEA_K@GamingPosturePositionerTelemetryProvider@@SAXAEA_K@Z @ 0x1804F49F8 (--$CheckedTimeSinceLastFallback@AEA_K@GamingPosturePositionerTelemetryProvider@@SAXAEA_K@Z.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall GamingPosturePositioner::HasFallbackOccurredRecently(GamingPosturePositioner *this)
{
  ULONGLONG v1; // rdi
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  ULONGLONG v5; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 786) || *((_BYTE *)this + 787) || !*((_QWORD *)this + 99) )
    return 0;
  v1 = GetTickCount64() - *((_QWORD *)this + 99);
  v5 = v1;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    GamingPosturePositionerTelemetryProvider::CheckedTimeSinceLastFallback<unsigned __int64 &>((__int64 *)&v5);
  if ( v1 >= 0x7530 )
    return 0;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v2 = GamingPosturePositionerTelemetryProvider::Provider();
    if ( *(_DWORD *)v2 > 4u )
    {
      v5 = v1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (__int64)v2,
        byte_180808DDE,
        0LL,
        v3,
        (__int64)&v5);
    }
  }
  return 1;
}
