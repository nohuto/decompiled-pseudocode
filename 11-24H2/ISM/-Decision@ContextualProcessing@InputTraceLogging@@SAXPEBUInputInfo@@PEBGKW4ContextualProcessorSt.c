/*
 * XREFs of ?Decision@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKW4ContextualProcessorState@@W4ContextualProcessorDecision@@2_NPEBUIInputTarget@@4444@Z @ 0x18001C684
 * Callers:
 *     ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x18001D9F4 (-ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextua.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U2@U2@U3@U1@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5444535555@Z @ 0x180008AC4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AFF0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800774A0 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     ?ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z @ 0x18007F51C (-ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z.c)
 *     ?ProcessorDecisionToString@InputTraceLogging@@CAPEBDW4ContextualProcessorDecision@@@Z @ 0x180159E2C (-ProcessorDecisionToString@InputTraceLogging@@CAPEBDW4ContextualProcessorDecision@@@Z.c)
 */

__int64 __fastcall InputTraceLogging::ContextualProcessing::Decision(
        unsigned int *a1,
        const WCHAR *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int8 a7,
        __int64 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        unsigned __int8 a12)
{
  __int64 result; // rax
  __int64 v17; // r11
  int v18; // r10d
  const unsigned __int16 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r11
  int v24; // [rsp+98h] [rbp-49h] BYREF
  int v25; // [rsp+9Ch] [rbp-45h] BYREF
  int v26; // [rsp+A0h] [rbp-41h] BYREF
  int v27; // [rsp+A4h] [rbp-3Dh] BYREF
  int v28; // [rsp+A8h] [rbp-39h] BYREF
  int v29; // [rsp+ACh] [rbp-35h] BYREF
  unsigned int v30; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-29h] BYREF
  const unsigned __int16 *v32; // [rsp+C0h] [rbp-21h] BYREF
  const unsigned __int16 *v33; // [rsp+C8h] [rbp-19h] BYREF
  const unsigned __int16 *v34; // [rsp+D0h] [rbp-11h] BYREF
  const WCHAR *v35; // [rsp+D8h] [rbp-9h] BYREF
  const unsigned __int16 *v36; // [rsp+E0h] [rbp-1h] BYREF
  __int64 v37; // [rsp+E8h] [rbp+7h] BYREF

  result = (__int64)InputTraceLogging::Provider();
  v17 = result;
  if ( *(_DWORD *)result > 4u )
  {
    v18 = *(_DWORD *)(result + 16);
    result = 1024LL;
    if ( (v18 & 0x400) != 0 && (*(_QWORD *)(v17 + 24) & 0x400LL) == *(_QWORD *)(v17 + 24) )
    {
      v24 = a12;
      v25 = a11;
      v26 = a10;
      v27 = a9;
      v31 = a8;
      v28 = a7;
      v32 = (const unsigned __int16 *)InputTraceLogging::ProcessorStateToString(a6);
      v33 = (const unsigned __int16 *)InputTraceLogging::ProcessorDecisionToString(a5);
      v19 = (const unsigned __int16 *)InputTraceLogging::ProcessorStateToString(a4);
      v20 = *a1;
      v34 = v19;
      v30 = a1[1];
      v29 = a3;
      v35 = a2;
      v36 = (const unsigned __int16 *)InputTraceLogging::InputTypeToString(v20);
      v37 = *((_QWORD *)a1 + 2);
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               v23,
               (__int64)&unk_18022688C,
               v21,
               v22,
               (__int64)&v37,
               &v36,
               (__int64)&v30,
               &v35,
               (__int64)&v29,
               &v34,
               &v33,
               &v32,
               (__int64)&v28,
               (__int64)&v31,
               (__int64)&v27,
               (__int64)&v26,
               (__int64)&v25,
               (__int64)&v24);
    }
  }
  return result;
}
