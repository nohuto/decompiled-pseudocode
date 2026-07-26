/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1400029C8
 * Callers:
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1400AF3EC (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 *     ?NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z @ 0x14013F42C (-NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140045E80 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _BYTE v6[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v9 = 0;
  v7 = a5;
  v8 = 4;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14011A7E8, a2, 0LL, 0LL, 3, v6);
}
