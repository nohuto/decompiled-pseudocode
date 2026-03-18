/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1400057E4
 * Callers:
 *     ?ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z @ 0x140219AE8 (-ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140119524 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  v8 = -1LL;
  if ( *a7 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_BYTE *)(*a7 + v9) );
  }
  if ( *a6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(*a6 + v10) );
  }
  if ( *a5 )
  {
    do
      ++v8;
    while ( *(_BYTE *)(*a5 + v8) );
  }
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL);
}
