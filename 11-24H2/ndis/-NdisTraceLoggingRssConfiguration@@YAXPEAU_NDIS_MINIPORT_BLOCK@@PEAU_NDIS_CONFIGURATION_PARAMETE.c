/*
 * XREFs of ?NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETER@@H@Z @ 0x140045530
 * Callers:
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140044180 (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1400455D0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 */

void __fastcall NdisTraceLoggingRssConfiguration(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_CONFIGURATION_PARAMETER *a2,
        int a3)
{
  int v3; // eax
  unsigned int IntegerData; // r9d
  int v5; // [rsp+40h] [rbp-18h] BYREF
  _GUID *p_InterfaceGuid; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14011A7E8 > 5
    && (qword_14011A7F8 & 0x200000000000LL) != 0
    && (qword_14011A800 & 0x200000000000LL) == qword_14011A800 )
  {
    v3 = 0;
    if ( a3 )
      IntegerData = 0;
    else
      IntegerData = a2->ParameterData.IntegerData;
    v7 = IntegerData;
    LOBYTE(v3) = a3 == 0;
    v5 = v3;
    p_InterfaceGuid = &a1->InterfaceGuid;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)a1,
      (unsigned int)&unk_140101A2F,
      a3,
      IntegerData,
      (__int64)&p_InterfaceGuid,
      (__int64)&v5,
      (__int64)&v7);
  }
}
