/*
 * XREFs of ??$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAXAEAW4TaskbarPinReason@Pinning@Mobility@@@Z @ 0x1800285C8
 * Callers:
 *     ??R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ @ 0x18002BA80 (--R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800010C0 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180001C8C (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VMobilityExperienceLogging@Telemetry@MobilityExperience@@@details@wil@@QEAAPEAVMobilityExperienceLogging@Telemetry@MobilityExperience@@P6AXXZ@Z @ 0x18003E454 (-get@-$static_lazy@VMobilityExperienceLogging@Telemetry@MobilityExperience@@@details@wil@@QEAAPE.c)
 */

char __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::YourPhoneTaskbarIconCreated<enum Mobility::Pinning::TaskbarPinReason &>(
        __int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // rcx
  __int64 v3; // rcx

  v1 = wil::details::static_lazy<MobilityExperience::Telemetry::MobilityExperienceLogging>::get(
         a1,
         _lambda_e5247b73c30e393fca6255a7d4a63886_::_lambda_invoker_cdecl_);
  v2 = *(_DWORD **)(v1 + 8);
  if ( *v2 > 5u )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)v2, 0x800000000000LL);
    if ( (_BYTE)v1 )
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                     v3,
                     (__int64)&unk_18015DD31,
                     0LL);
  }
  return v1;
}
