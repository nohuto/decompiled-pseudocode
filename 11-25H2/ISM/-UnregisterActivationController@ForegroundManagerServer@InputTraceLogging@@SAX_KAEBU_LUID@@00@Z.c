/*
 * XREFs of ?UnregisterActivationController@ForegroundManagerServer@InputTraceLogging@@SAX_KAEBU_LUID@@00@Z @ 0x18007E700
 * Callers:
 *     ?UnregisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x18006D688 (-UnregisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x180002058 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AA20 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall InputTraceLogging::ForegroundManagerServer::UnregisterActivationController(
        __int64 a1,
        const struct _LUID *a2,
        __int64 a3,
        __int64 a4)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h] BYREF

  v8 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v8 > 4u && (*((_DWORD *)v8 + 4) & 0x8000LL) != 0 )
  {
    v10 = *((_QWORD *)v8 + 3) & 0x8000LL;
    if ( v10 == *((_QWORD *)v8 + 3) )
    {
      v13 = (__int64)*a2;
      v11 = a4;
      v12 = a3;
      v14 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)v8,
        (__int64)&unk_180206144,
        v10,
        v9,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11);
    }
  }
}
