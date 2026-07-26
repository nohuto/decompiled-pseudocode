/*
 * XREFs of ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140099690
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140013AB0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x140015040 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140060520 (-ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@5@Z @ 0x140004230 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlg_ea_140004230.c)
 *     _tlgKeywordOn @ 0x14008DAF0 (_tlgKeywordOn.c)
 *     ?GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x140098600 (-GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x140098630 (-GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x140098660 (-GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestSourceInstanceName@@YAPEBU_UNICODE_STRING@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1400E43B8 (-GetRequestSourceInstanceName@@YAPEBU_UNICODE_STRING@@PEBU_NDIS_OID_REQUEST@@@Z.c)
 */

void TraceLoggingWriteOidRequestQueuedActivity<0,_NDIS_MINIPORT_BLOCK>()
{
  const struct _NDIS_OID_REQUEST *v0; // r9
  __int64 v1; // r10
  __int64 v2; // r9
  const struct _NDIS_OID_REQUEST *v3; // rcx
  const struct _NDIS_OID_REQUEST *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  int RequestVPortID; // [rsp+70h] [rbp-38h] BYREF
  int RequestSwitchID; // [rsp+74h] [rbp-34h] BYREF
  int v10; // [rsp+78h] [rbp-30h] BYREF
  int v11; // [rsp+7Ch] [rbp-2Ch] BYREF
  unsigned __int16 *v12; // [rsp+80h] [rbp-28h] BYREF
  const struct _UNICODE_STRING *RequestSourceInstanceName; // [rsp+88h] [rbp-20h] BYREF
  __int64 v14[3]; // [rsp+90h] [rbp-18h] BYREF
  int v15; // [rsp+C0h] [rbp+18h] BYREF
  int RequestFlags; // [rsp+C8h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1401247B0 > 4 && tlgKeywordOn((__int64)&dword_1401247B0, 1024LL) )
  {
    v12 = *(unsigned __int16 **)(v1 + 3856);
    RequestSourceInstanceName = GetRequestSourceInstanceName(v0);
    v15 = *(_DWORD *)(v2 + 88);
    RequestFlags = GetRequestFlags((const struct _NDIS_OID_REQUEST *)v2);
    RequestVPortID = GetRequestVPortID(v3);
    RequestSwitchID = GetRequestSwitchID(v4);
    v10 = *(_DWORD *)(v5 + 32);
    v11 = *(_DWORD *)(v5 + 4);
    v14[0] = v6 + 4008;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
      v7,
      (__int64)&unk_14010BCB6,
      v5 + 168,
      v5,
      v14,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&RequestSwitchID,
      (__int64)&RequestVPortID,
      (__int64)&RequestFlags,
      (__int64)&v15,
      (unsigned __int16 **)&RequestSourceInstanceName,
      &v12);
  }
}
