/*
 * XREFs of ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVKStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x140097340
 * Callers:
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x140171750 (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByRef@$0BA@@@U1@U1@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByRef@$0BA@@@33AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x140001470 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByRef@$0BA@@@U1@U1@U-$_tlgWrapperByVal@$00@@U.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U1@U1@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@33AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x140002AD0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U1@U1@U-$_tlgWrapperByVal@$00@@U3@@.c)
 *     _tlgKeywordOn @ 0x14008DAF0 (_tlgKeywordOn.c)
 *     ?GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ @ 0x1400982C0 (-GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ.c)
 */

void __fastcall NdisTraceLoggingDeviceInitialized(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KStopwatch *v4; // r10
  __int64 v5; // r11
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE v9[4]; // [rsp+60h] [rbp-20h] BYREF
  int v10; // [rsp+64h] [rbp-1Ch] BYREF
  int v11; // [rsp+68h] [rbp-18h] BYREF
  int ElapsedTimeInMilliseconds; // [rsp+6Ch] [rbp-14h] BYREF
  __int64 v13; // [rsp+70h] [rbp-10h] BYREF
  __int64 v14; // [rsp+78h] [rbp-8h] BYREF
  char v15; // [rsp+A8h] [rbp+28h] BYREF

  if ( (_DWORD)a4 )
  {
    if ( (unsigned int)dword_1401247E8 > 5
      && (qword_1401247F8 & 0x400000000000LL) != 0
      && (qword_140124800 & 0x400000000000LL) == qword_140124800 )
    {
      v15 = *(_BYTE *)(a1 + 33);
      v9[0] = *(_BYTE *)(a1 + 32);
      ElapsedTimeInMilliseconds = *(_DWORD *)(a1 + 1832);
      v11 = *(_DWORD *)(a1 + 464);
      v14 = a1 + 4008;
      v10 = a3;
      LODWORD(v13) = a4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        a1,
        (__int64)&unk_14010B174,
        a3,
        a4,
        (__int64)&v13,
        (__int64)&v10,
        &v14,
        (__int64)&v11,
        (__int64)&ElapsedTimeInMilliseconds,
        (__int64)v9,
        (__int64)&v15);
    }
  }
  else if ( (unsigned int)dword_1401247E8 > 5 && tlgKeywordOn((__int64)&dword_1401247E8, 0x400000000000LL) )
  {
    v15 = *(_BYTE *)(v5 + 33);
    v9[0] = *(_BYTE *)(v5 + 32);
    v10 = *(_DWORD *)(v5 + 1832);
    v11 = *(_DWORD *)(v5 + 464);
    v13 = v5 + 4008;
    ElapsedTimeInMilliseconds = KStopwatch::GetElapsedTimeInMilliseconds(v4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v6,
      (__int64)&unk_14010B206,
      v7,
      v8,
      (__int64)&ElapsedTimeInMilliseconds,
      &v13,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)v9,
      (__int64)&v15);
  }
}
