/*
 * XREFs of ??$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14004CB10
 * Callers:
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140152C80 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x140045FC0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlg_ea_140045FC0.c)
 *     _tlgKeywordOn @ 0x1400713E0 (_tlgKeywordOn.c)
 *     ?GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x14008CCD0 (-GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x14008CD00 (-GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x14008CD30 (-GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisAzTelemetryOidDelivered<_NDIS_MINIPORT_BLOCK>(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  int v4; // eax
  int v5; // edx
  char v6; // cl
  unsigned int v7; // eax
  unsigned __int64 i; // rax
  int v9; // ecx
  const struct _NDIS_OID_REQUEST *v10; // r8
  __int64 v11; // r10
  int v12; // r11d
  const struct _NDIS_OID_REQUEST *v13; // rcx
  const struct _NDIS_OID_REQUEST *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned int RequestVPortID; // [rsp+60h] [rbp-28h] BYREF
  unsigned int RequestSwitchID; // [rsp+64h] [rbp-24h] BYREF
  int v21; // [rsp+68h] [rbp-20h] BYREF
  int v22; // [rsp+6Ch] [rbp-1Ch] BYREF
  unsigned __int16 *v23; // [rsp+70h] [rbp-18h] BYREF
  __int64 v24; // [rsp+78h] [rbp-10h] BYREF
  int v25; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+20h] BYREF

  v2 = dword_14011A7B0;
  if ( (unsigned int)dword_14011A7B0 <= 4 )
    return;
  if ( (qword_14011A7C0 & 0x400) == 0 )
    return;
  if ( (qword_14011A7C8 & 0x400) != qword_14011A7C8 )
    return;
  v4 = *(_DWORD *)(a2 + 88) & 0x30000000;
  if ( v4 == 0x10000000 )
    return;
  if ( v4 )
  {
    if ( v4 != 0x20000000 )
      return;
    goto LABEL_22;
  }
  v5 = *(_DWORD *)(a2 + 32);
  if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress )
  {
LABEL_7:
    v6 = 1;
    v7 = *(_DWORD *)(a2 + 88) & 0xCFFFFFFF | 0x20000000;
  }
  else
  {
    if ( (ndisAzOidTelemetryFilter & 2) != 0 )
    {
      for ( i = 0LL; i < 0x40; i += 4LL )
      {
        v9 = *(_DWORD *)((char *)&ndisAzOidTelemetryList + i);
        if ( !v9 )
          break;
        if ( v9 == v5 )
          goto LABEL_7;
      }
    }
    v6 = 0;
    v7 = *(_DWORD *)(a2 + 88) & 0xCFFFFFFF | 0x10000000;
  }
  *(_DWORD *)(a2 + 88) = v7;
  if ( v6 )
  {
    v2 = dword_14011A7B0;
LABEL_22:
    if ( v2 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_14011A7B0, 1024LL) )
      {
        v23 = *(unsigned __int16 **)(v11 + 3856);
        v25 = v12;
        LODWORD(v26) = GetRequestFlags(v10);
        RequestVPortID = GetRequestVPortID(v13);
        RequestSwitchID = GetRequestSwitchID(v14);
        v21 = *(_DWORD *)(v15 + 32);
        v22 = *(_DWORD *)(v15 + 4);
        v24 = v16 + 4008;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>>(
          v17,
          (unsigned __int8 *)&unk_140102AE8,
          (const GUID *)(v15 + 168),
          v18,
          &v24,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&RequestSwitchID,
          (__int64)&RequestVPortID,
          (__int64)&v26,
          (__int64)&v25,
          &v23);
      }
    }
  }
}
