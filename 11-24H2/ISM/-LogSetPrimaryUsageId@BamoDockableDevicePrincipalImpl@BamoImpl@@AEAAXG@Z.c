/*
 * XREFs of ?LogSetPrimaryUsageId@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXG@Z @ 0x18017FB38
 * Callers:
 *     ?SetPrimaryUsageId@BamoDockableDevicePrincipal@@UEAAXG@Z @ 0x180181D50 (-SetPrimaryUsageId@BamoDockableDevicePrincipal@@UEAAXG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x180006338 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180044CA8 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 */

void __fastcall BamoImpl::BamoDockableDevicePrincipalImpl::LogSetPrimaryUsageId(
        BamoImpl::BamoDockableDevicePrincipalImpl *this)
{
  __int64 v1; // rbx
  __int16 v2; // r8
  Microsoft::BamoImpl::BamoPrincipalImpl *v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  __int16 v6; // [rsp+50h] [rbp+18h] BYREF
  int ItemId; // [rsp+58h] [rbp+20h] BYREF

  v1 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v6 = v2;
    ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(v3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<2>>(
      v1,
      (__int64)&unk_180223E16,
      v4,
      v5,
      (__int64)&ItemId,
      (__int64)&v6);
  }
}
