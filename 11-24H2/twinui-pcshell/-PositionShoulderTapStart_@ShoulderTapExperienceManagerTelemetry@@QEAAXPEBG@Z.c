/*
 * XREFs of ?PositionShoulderTapStart_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG@Z @ 0x18038D0B0
 * Callers:
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x18038CB18 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180164DB8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@ShoulderTapExperienceManagerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18038D108 (-Provider@ShoulderTapExperienceManagerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall ShoulderTapExperienceManagerTelemetry::PositionShoulderTapStart_(
        const WCHAR *this,
        const unsigned __int16 *a2)
{
  const struct _tlgProvider_t *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  const WCHAR *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = this;
  v3 = ShoulderTapExperienceManagerLogging::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x400000000000LL) )
    {
      v6 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v4,
        byte_1807ED60C,
        0LL,
        v5,
        &v6);
    }
  }
}
