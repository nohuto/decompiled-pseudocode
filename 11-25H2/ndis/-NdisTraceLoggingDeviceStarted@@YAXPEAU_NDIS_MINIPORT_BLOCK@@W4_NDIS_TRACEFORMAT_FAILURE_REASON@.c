/*
 * XREFs of ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x14004E390
 * Callers:
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14004E200 (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140001560 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapperByRef@$0BA@@@@-$_tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140002904 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ?NdisTraceLoggingDiscoverOperationalStatus@@YA?AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008B670 (-NdisTraceLoggingDiscoverOperationalStatus@@YA-AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDI.c)
 *     _tlgKeywordOn @ 0x14008DAF0 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingDeviceStarted(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11[2]; // [rsp+48h] [rbp-10h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  if ( (int)a3 < 0 )
  {
    if ( (unsigned int)dword_1401247E8 > 5
      && (unsigned __int8)tlgKeywordOn(&dword_1401247E8, 0x200000000000LL, a3, (unsigned int)a2) )
    {
      v12 = v8;
      v11[0] = v9 + 4008;
      v13 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        v6,
        (__int64)&unk_14010B0C0,
        v7,
        v8,
        (__int64)&v13,
        (__int64)&v12,
        v11);
    }
  }
  else if ( (unsigned int)dword_1401247E8 > 5
         && (qword_1401247F8 & 0x200000000000LL) != 0
         && (qword_140124800 & 0x200000000000LL) == qword_140124800 )
  {
    v11[0] = a1 + 4008;
    LOBYTE(v12) = *(_BYTE *)(a1 + 33);
    LOBYTE(v13) = *(_BYTE *)(a1 + 32);
    v10 = NdisTraceLoggingDiscoverOperationalStatus(a1, a2, a3, (unsigned int)a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>>(
      v3,
      (__int64)&unk_14010B109,
      v4,
      v5,
      (__int64)&v10,
      (__int64)&v13,
      (__int64)&v12,
      v11);
  }
}
