/*
 * XREFs of ?ReceiveKernelMessage@Cursor@InputTraceLogging@@SAXAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x180014E74
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x180014D64 (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x180001330 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AA20 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?CursorMessageToString@InputTraceLogging@@CAPEBDW4_MIT_CURSOR_MANAGEMENT_MESSAGE_ID@@@Z @ 0x1800F1B50 (-CursorMessageToString@InputTraceLogging@@CAPEBDW4_MIT_CURSOR_MANAGEMENT_MESSAGE_ID@@@Z.c)
 */

void __fastcall InputTraceLogging::Cursor::ReceiveKernelMessage(const struct _MIT_CURSOR_MANAGEMENT_MESSAGE *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r10
  const unsigned __int16 *v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u && (*((_BYTE *)v2 + 16) & 8) != 0 && (*((_QWORD *)v2 + 3) & 8LL) == *((_QWORD *)v2 + 3) )
  {
    v4 = (const unsigned __int16 *)InputTraceLogging::CursorMessageToString(*(unsigned int *)a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v3,
      (__int64)&unk_18020AE33,
      0LL,
      0LL,
      &v4);
  }
}
