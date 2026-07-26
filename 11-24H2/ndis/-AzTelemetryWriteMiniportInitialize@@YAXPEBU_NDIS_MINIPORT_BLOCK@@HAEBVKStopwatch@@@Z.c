/*
 * XREFs of ?AzTelemetryWriteMiniportInitialize@@YAXPEBU_NDIS_MINIPORT_BLOCK@@HAEBVKStopwatch@@@Z @ 0x1400727C0
 * Callers:
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x140165450 (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140004520 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$0.c)
 *     ?GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ @ 0x14008CB10 (-GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ.c)
 */

void __fastcall AzTelemetryWriteMiniportInitialize(
        const struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        const struct KStopwatch *a3)
{
  __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // rcx
  unsigned __int64 ElapsedTimeInMilliseconds; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int16 *v7; // [rsp+48h] [rbp-20h] BYREF
  __int64 v8[3]; // [rsp+50h] [rbp-18h] BYREF
  int v9; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14011A7B0 > 5
    && (qword_14011A7C0 & 0x200) != 0
    && (qword_14011A7C8 & 0x200) == qword_14011A7C8 )
  {
    ElapsedTimeInMilliseconds = KStopwatch::GetElapsedTimeInMilliseconds(a3);
    v7 = *(unsigned __int16 **)(v3 + 3856);
    v8[0] = v3 + 4008;
    v9 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v5,
      (__int64)&unk_140102F86,
      v3 + 6068,
      v3,
      v8,
      &v7,
      (__int64)&v9,
      (__int64)&ElapsedTimeInMilliseconds);
  }
}
