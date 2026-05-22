/*
 * XREFs of ?LogSetLuid@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXAEBU_LUID@@@Z @ 0x18008BF30
 * Callers:
 *     ?SetLuid@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXAEBU_LUID@@@Z @ 0x180074B28 (-SetLuid@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXAEBU_LUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800020EC (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180048218 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 */

void __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::LogSetLuid(
        BamoImpl::BamoActivatableEntityPrincipalImpl *this,
        const struct _LUID *a2)
{
  __int64 v2; // rbx
  Microsoft::BamoImpl::BamoPrincipalImpl *v3; // r8
  __int64 v4; // r8
  __int64 v5; // r9
  const struct _LUID *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v2 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    LODWORD(v6) = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(v3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v2,
      (__int64)&unk_180206A2F,
      v4,
      v5,
      (__int64)&v6);
  }
}
