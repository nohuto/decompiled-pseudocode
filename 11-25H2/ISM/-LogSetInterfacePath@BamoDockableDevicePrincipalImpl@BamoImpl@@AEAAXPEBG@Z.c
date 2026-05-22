/*
 * XREFs of ?LogSetInterfacePath@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEBG@Z @ 0x18017DE88
 * Callers:
 *     ?SetInterfacePath@BamoDockableDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x18017FF4C (-SetInterfacePath@BamoDockableDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18000381C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180048218 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 */

void __fastcall BamoImpl::BamoDockableDevicePrincipalImpl::LogSetInterfacePath(
        BamoImpl::BamoDockableDevicePrincipalImpl *this,
        const unsigned __int16 *a2)
{
  __int64 v2; // rbx
  const WCHAR *v3; // r8
  Microsoft::BamoImpl::BamoPrincipalImpl *v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  int ItemId; // [rsp+50h] [rbp+18h] BYREF
  const WCHAR *v8; // [rsp+58h] [rbp+20h] BYREF

  v2 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v8 = v3;
    ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(v4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v2,
      (__int64)&unk_18021A791,
      v5,
      v6,
      (__int64)&ItemId,
      &v8);
  }
}
