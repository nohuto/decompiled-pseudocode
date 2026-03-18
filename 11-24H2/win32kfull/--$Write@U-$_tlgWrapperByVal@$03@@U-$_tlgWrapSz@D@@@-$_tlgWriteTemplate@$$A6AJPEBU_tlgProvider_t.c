/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1400051D4
 * Callers:
 *     ?StartDesktopRecalc@DesktopRecalc@InputTraceLogging@@SAXIW4InputTracing_DesktopRecalcInitReason@@@Z @ 0x1401CB6DC (-StartDesktopRecalc@DesktopRecalc@InputTraceLogging@@SAXIW4InputTracing_DesktopRecalcInitReason@.c)
 *     ?SessionDisconnectEvent@DesktopRecalc@InputTraceLogging@@SAXIH@Z @ 0x1402204E8 (-SessionDisconnectEvent@DesktopRecalc@InputTraceLogging@@SAXIH@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140119524 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v6; // rax

  if ( *a6 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(*a6 + v6) );
  }
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL);
}
