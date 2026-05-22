/*
 * XREFs of ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKJ@Z @ 0x18001EB30
 * Callers:
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x18001EC20 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F920 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@55@Z @ 0x180008CF0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlg_ea_180008CF0.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AFF0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800774A0 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 */

void __fastcall InputTraceLogging::ContextualProcessing::OnInput(
        const struct InputInfo *a1,
        const unsigned __int16 *a2,
        int a3,
        int a4)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r11
  int v13; // [rsp+50h] [rbp-30h] BYREF
  int v14; // [rsp+54h] [rbp-2Ch] BYREF
  int v15; // [rsp+58h] [rbp-28h] BYREF
  const WCHAR *v16; // [rsp+60h] [rbp-20h] BYREF
  const unsigned __int16 *v17; // [rsp+68h] [rbp-18h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h] BYREF

  v8 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v8 > 4u
    && (*((_DWORD *)v8 + 4) & 0x400LL) != 0
    && (*((_QWORD *)v8 + 3) & 0x400LL) == *((_QWORD *)v8 + 3) )
  {
    v9 = *(unsigned int *)a1;
    v15 = *((_DWORD *)a1 + 1);
    v13 = a4;
    v14 = a3;
    v16 = a2;
    v17 = (const unsigned __int16 *)InputTraceLogging::InputTypeToString(v9);
    v18 = *((_QWORD *)a1 + 2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      (__int64)&unk_1802269A6,
      v10,
      v11,
      (__int64)&v18,
      &v17,
      (__int64)&v15,
      &v16,
      (__int64)&v14,
      (__int64)&v13);
  }
}
