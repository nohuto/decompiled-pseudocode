/*
 * XREFs of ??$StateChange@AEAY0BB@$$CBG@TestCursorTraceLogging@@SAXAEAY0BB@$$CBG@Z @ 0x1801470F0
 * Callers:
 *     ?OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180147430 (-OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualPro.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180059800 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@TestCursorTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800FAAFC (-Provider@TestCursorTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall TestCursorTraceLogging::StateChange<unsigned short const (&)[17]>(const WCHAR *a1)
{
  const struct _tlgProvider_t *v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  const WCHAR *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  v1 = TestCursorTraceLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v1 > 4u )
  {
    v5 = L"ShowingPenCursor";
    LODWORD(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                    (__int64)v1,
                    byte_18021FCE8,
                    v2,
                    v3,
                    &v5);
  }
  return (int)v1;
}
