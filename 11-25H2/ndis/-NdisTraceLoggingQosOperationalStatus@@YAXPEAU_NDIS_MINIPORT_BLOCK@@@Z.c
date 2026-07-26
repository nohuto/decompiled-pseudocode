/*
 * XREFs of ?NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B728C
 * Callers:
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1400A5B84 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U_tlgWrapperPtrSize@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@444AEBU_tlgWrapperPtrSize@@55@Z @ 0x140001F30 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U_tlgWrapperPtrSize@@U3@U3.c)
 *     _tlgKeywordOn @ 0x14008DAF0 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingQosOperationalStatus(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  _DWORD *v3; // rdx
  int v4; // [rsp+60h] [rbp+17h] BYREF
  __int64 v5; // [rsp+68h] [rbp+1Fh] BYREF
  _DWORD *v6; // [rsp+70h] [rbp+27h] BYREF
  int v7; // [rsp+78h] [rbp+2Fh]
  _DWORD *v8; // [rsp+80h] [rbp+37h] BYREF
  int v9; // [rsp+88h] [rbp+3Fh]
  _DWORD *v10; // [rsp+90h] [rbp+47h] BYREF
  int v11; // [rsp+98h] [rbp+4Fh]
  int v12; // [rsp+B8h] [rbp+6Fh] BYREF
  int v13; // [rsp+C0h] [rbp+77h] BYREF
  int v14; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1401247E8 > 5 && tlgKeywordOn((__int64)&dword_1401247E8, 0x200000000000LL) )
  {
    v3 = *(_DWORD **)(v1 + 4928);
    v7 = 8;
    v9 = 8;
    v11 = 8;
    v6 = v3 + 7;
    v8 = v3 + 5;
    v10 = v3 + 3;
    v12 = v3[10];
    v13 = v3[9];
    v14 = v3[2];
    v4 = v3[1];
    v5 = v1 + 4008;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
      8LL,
      (__int64)&unk_14010A9E5,
      v1,
      v2,
      &v5,
      (__int64)&v4,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64 *)&v10,
      (__int64 *)&v8,
      (__int64 *)&v6);
  }
}
