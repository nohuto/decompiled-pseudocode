/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x14000533C
 * Callers:
 *     ?ApplyEnd@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGUtagRECT@@PEBDH@Z @ 0x1402D2400 (-ApplyEnd@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGUtagRECT@@PEBDH@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140119524 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10,
        __int64 a11,
        _QWORD *a12)
{
  __int64 v13; // rcx
  __int64 v14; // rax

  v13 = -1LL;
  if ( *a12 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(*a12 + 2 * v14) );
  }
  if ( *a10 )
  {
    do
      ++v13;
    while ( *(_BYTE *)(*a10 + v13) );
  }
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL);
}
