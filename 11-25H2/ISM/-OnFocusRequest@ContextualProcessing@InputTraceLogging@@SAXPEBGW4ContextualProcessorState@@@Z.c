/*
 * XREFs of ?OnFocusRequest@ContextualProcessing@InputTraceLogging@@SAXPEBGW4ContextualProcessorState@@@Z @ 0x180016F98
 * Callers:
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180016B70 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSz@D@@@Z @ 0x180001150 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AA20 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z @ 0x18007F6EC (-ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z.c)
 */

__int64 __fastcall InputTraceLogging::ContextualProcessing::OnFocusRequest(const WCHAR *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  int v6; // r8d
  __int64 v7; // r8
  __int64 v8; // r9
  const unsigned __int16 *v9; // [rsp+50h] [rbp+18h] BYREF
  const WCHAR *v10; // [rsp+58h] [rbp+20h] BYREF

  result = (__int64)InputTraceLogging::Provider();
  v5 = result;
  if ( *(_DWORD *)result > 4u )
  {
    v6 = *(_DWORD *)(result + 16);
    result = 1024LL;
    if ( (v6 & 0x400) != 0 && (*(_QWORD *)(v5 + 24) & 0x400LL) == *(_QWORD *)(v5 + 24) )
    {
      v9 = (const unsigned __int16 *)InputTraceLogging::ProcessorStateToString(a2);
      v10 = a1;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
               v8,
               (__int64)&unk_18021CB80,
               v7,
               v8,
               &v10,
               &v9);
    }
  }
  return result;
}
