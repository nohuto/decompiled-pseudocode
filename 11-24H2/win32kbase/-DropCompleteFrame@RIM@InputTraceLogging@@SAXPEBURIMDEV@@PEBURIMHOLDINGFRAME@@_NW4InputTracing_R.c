/*
 * XREFs of ?DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_RimCompletionReason@@@Z @ 0x1400564D8
 * Callers:
 *     rimFindAndReclaimHoldingFrame @ 0x1400563A0 (rimFindAndReclaimHoldingFrame.c)
 * Callees:
 *     ?CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z @ 0x1400566F0 (-CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@@Z @ 0x140056754 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@@-$_t.c)
 */

void __fastcall InputTraceLogging::RIM::DropCompleteFrame(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rdx
  int v9; // r11d
  __int64 v10; // r10
  int v11; // r9d
  int v12; // [rsp+60h] [rbp+27h] BYREF
  int v13; // [rsp+64h] [rbp+2Bh] BYREF
  int v14; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v15; // [rsp+70h] [rbp+37h] BYREF
  __int64 v16; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v17; // [rsp+80h] [rbp+47h] BYREF
  __int64 v18; // [rsp+88h] [rbp+4Fh] BYREF
  int v19; // [rsp+A8h] [rbp+6Fh] BYREF

  if ( (unsigned int)dword_14029AE30 > 4
    && (qword_14029AE40 & 0x100) != 0
    && (qword_14029AE48 & 0x100) == qword_14029AE48 )
  {
    v5 = InputTraceLogging::CompletionReasonToString(a4);
    v6 = *(_QWORD *)(a1 + 448);
    v15 = v5;
    v19 = *(unsigned __int16 *)(v6 + 18);
    v12 = *(unsigned __int16 *)(v6 + 16);
    v13 = (unsigned __int8)v7;
    v16 = *(_QWORD *)(v8 + 32);
    v14 = v9;
    v17 = v10;
    v18 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (unsigned int)&dword_14029AE30,
      (unsigned int)&unk_140278BFE,
      v7,
      v11,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v19,
      (__int64)&v15);
  }
}
