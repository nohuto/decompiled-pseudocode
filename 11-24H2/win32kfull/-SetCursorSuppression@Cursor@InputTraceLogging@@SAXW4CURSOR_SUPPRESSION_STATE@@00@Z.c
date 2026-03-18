/*
 * XREFs of ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1401331EC
 * Callers:
 *     _anonymous_namespace_::RenderCursor @ 0x140091F44 (_anonymous_namespace_--RenderCursor.c)
 *     _anonymous_namespace_::xxxSwitchCursors @ 0x140132D94 (_anonymous_namespace_--xxxSwitchCursors.c)
 *     TransitionCursorSuppressionState @ 0x140132F80 (TransitionCursorSuppressionState.c)
 *     NtUserEnableMouseInputForCursorSuppression @ 0x140134C70 (NtUserEnableMouseInputForCursorSuppression.c)
 *     PowerOnGdi @ 0x140134F50 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x140135140 (PowerOffGdi.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33@Z @ 0x140003260 (--$Write@U-$_tlgWrapSz@D@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     ?CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x140272D00 (-CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 */

void __fastcall InputTraceLogging::Cursor::SetCursorSuppression(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edx
  unsigned int v4; // r10d
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+48h] [rbp-10h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_140398B80 > 4 && (qword_140398B90 & 8) != 0 && (qword_140398B98 & 8) == qword_140398B98 )
  {
    v9 = InputTraceLogging::CursorSuppressionToString(a3);
    v7 = InputTraceLogging::CursorSuppressionToString(v3);
    v8 = InputTraceLogging::CursorSuppressionToString(v4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
      (__int64)&dword_140398B80,
      (__int64)&unk_140364C16,
      v5,
      v6,
      &v8,
      &v7,
      &v9);
  }
}
