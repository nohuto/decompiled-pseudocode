/*
 * XREFs of ?perform_delayed_initialization@GamingPosturePositioner@@UEAAXXZ @ 0x180508EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x18032A9E0 (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     ??1?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ @ 0x18032CFA4 (--1-$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ?HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ @ 0x180500E88 (-HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z @ 0x180503C88 (-OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180507228 (-WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA-AVActivityThreadWatcher@wil@@PE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingPosturePositioner::perform_delayed_initialization(GamingPosturePositioner *this)
{
  __int64 v2; // rcx
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // rcx
  wil::ActivityThreadWatcher *v5; // rax
  _BYTE v6[96]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v7[88]; // [rsp+80h] [rbp-58h] BYREF

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v3 = GamingPosturePositionerTelemetryProvider::Provider(v2);
    if ( *(_DWORD *)v3 > 4u )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (__int64)v3,
        byte_180809EBE,
        0LL);
  }
  v6[80] = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v5 = GamingPosturePositionerTelemetryProvider::WatchCurrentThread(
           (wil::ActivityThreadWatcher *)v7,
           "perform_delayed_initialization");
    std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>((__int64)v6, (__int64)v5);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v7);
  }
  if ( (unsigned int)IsGamingFullScreenExperienceActive(v4) )
  {
    GamingPosturePositioner::OnGamingPostureChanged((GamingPosturePositioner *)((char *)this - 72), 1);
    GamingPosturePositioner::HandleViewRecovery((GamingPosturePositioner *)((char *)this - 72));
  }
  std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)v6);
}
