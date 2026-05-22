/*
 * XREFs of ?OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUHitTestInfo@@PEBGW4ContextualProcessorState@@@Z @ 0x18001A650
 * Callers:
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180019FE0 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AA20 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x180077810 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapSz@G@@5@Z @ 0x180079894 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapSz@G@@.c)
 *     ?ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z @ 0x18007F6EC (-ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z.c)
 */

__int64 __fastcall InputTraceLogging::ContextualProcessing::OnHitTest(unsigned int *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h] BYREF
  __int64 v14; // [rsp+60h] [rbp-28h] BYREF
  __int64 v15; // [rsp+68h] [rbp-20h] BYREF
  __int64 v16; // [rsp+70h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+20h] BYREF

  result = (__int64)InputTraceLogging::Provider();
  v7 = result;
  if ( *(_DWORD *)result > 4u )
  {
    result = *(unsigned int *)(result + 16);
    if ( (result & 0x400) != 0 )
    {
      result = *(_QWORD *)(v7 + 24) & 0x400LL;
      if ( result == *(_QWORD *)(v7 + 24) )
      {
        v8 = InputTraceLogging::ProcessorStateToString(a3);
        v9 = *a1;
        v13 = v8;
        v17 = a1[1];
        v14 = a2;
        v15 = InputTraceLogging::InputTypeToString(v9);
        v12 = a1[10];
        v16 = *((_QWORD *)a1 + 2);
        return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
                 v11,
                 (unsigned int)&unk_18021CBC6,
                 v10,
                 v11,
                 (__int64)&v16,
                 (__int64)&v12,
                 (__int64)&v15,
                 (__int64)&v17,
                 (__int64)&v14,
                 (__int64)&v13);
      }
    }
  }
  return result;
}
