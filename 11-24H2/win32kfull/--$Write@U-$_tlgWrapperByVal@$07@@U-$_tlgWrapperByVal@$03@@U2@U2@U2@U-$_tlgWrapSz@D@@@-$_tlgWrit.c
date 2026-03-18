/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@@Z @ 0x140003184
 * Callers:
 *     ?EndLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z @ 0x1402127A4 (-EndLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z.c)
 *     ?StartLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z @ 0x14021BB90 (-StartLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z.c)
 *     ?SmuggleHidData@RawInput@InputTraceLogging@@SAXPEAX_NKK11@Z @ 0x140224504 (-SmuggleHidData@RawInput@InputTraceLogging@@SAXPEAX_NKK11@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140119524 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10)
{
  __int64 v10; // rax

  if ( *a10 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(*a10 + v10) );
  }
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL);
}
