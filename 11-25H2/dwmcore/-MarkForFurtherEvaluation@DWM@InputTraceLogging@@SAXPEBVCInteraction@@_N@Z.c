/*
 * XREFs of ?MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x1802637BC
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B42D0 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapSz@D@@U3@U1@U2@U1@U1@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapSz@D@@534333334@Z @ 0x180002D28 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapSz@D@@U3@U1@U2@U1@U1@U1.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180137874 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801CA764 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801CA780 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801CA7C4 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801CA924 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801CA974 (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1801CAD60 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::DWM::MarkForFurtherEvaluation(unsigned __int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+A0h] [rbp+17h] BYREF
  _QWORD *InputHandle; // [rsp+A8h] [rbp+1Fh]
  __int64 v11; // [rsp+B0h] [rbp+27h]
  const char *v12; // [rsp+B8h] [rbp+2Fh] BYREF
  const char *v13; // [rsp+C0h] [rbp+37h] BYREF
  unsigned __int64 v14; // [rsp+C8h] [rbp+3Fh] BYREF
  unsigned __int64 v15; // [rsp+D0h] [rbp+47h] BYREF

  v2 = a2;
  v4 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 2LL) )
  {
    if ( a1 )
      v5 = *(_QWORD *)(a1 + 1712);
    else
      v5 = 0LL;
    v11 = v5;
    InputTraceLogging::InteractionHoverSource((const struct CInteraction *)a1);
    InputTraceLogging::InteractionInputTransparency((const struct CInteraction *)a1);
    InputTraceLogging::InteractionFurtherProcessingForInput((const struct CInteraction *)a1);
    if ( a1 )
      InputHandle = CInteraction::GetInputHandle((CInteraction *)a1);
    else
      InputHandle = v6;
    v12 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)a1);
    v13 = InputTraceLogging::InteractionSourceTypeToString((const struct CInteraction *)a1);
    v15 = a1;
    v9 = v2;
    v14 = a1 & -(__int64)(a1 != 0);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v8,
      (__int64)&unk_1803D75A1,
      v7,
      v8,
      (__int64)&v9,
      (__int64)&v15,
      (__int64)&v14,
      &v13,
      &v12);
  }
  InputTraceLogging::GestureTargeting::TraceInteractionConfiguration((const struct CInteraction *)a1);
}
