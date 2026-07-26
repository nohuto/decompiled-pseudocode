/*
 * XREFs of ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x140098A30
 * Callers:
 *     NdisMPromoteMiniport @ 0x1400A8190 (NdisMPromoteMiniport.c)
 *     NdisMSetMiniportSecondary @ 0x1400A85E0 (NdisMSetMiniportSecondary.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x14018BFF0 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1400820E0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     _tlgKeywordOn @ 0x14008DAF0 (_tlgKeywordOn.c)
 */

void NdisTraceLoggingRareMiniportPath()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // r10d
  int v4; // [rsp+40h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp-10h] BYREF
  int v6; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1401247E8 > 5 && tlgKeywordOn((__int64)&dword_1401247E8, 0x400000000000LL) )
  {
    v6 = v1;
    v4 = v3;
    v5 = v2 + 4008;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v0,
      (__int64)&unk_14010AC06,
      v1,
      v2 + 4008,
      &v5,
      (__int64)&v4,
      (__int64)&v6);
  }
}
