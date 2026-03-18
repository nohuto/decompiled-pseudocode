/*
 * XREFs of ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x180194A88
 * Callers:
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x180193E48 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x18019415C (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x18022CC90 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapSz@D@@U3@U1@U2@U1@U1@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapSz@D@@534333334@Z @ 0x180002D28 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapSz@D@@U3@U1@U2@U1@U1@U1.c)
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x18009281C (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180092C54 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x180092E64 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801B8CA4 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801B8CC0 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801B8D04 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801B8E64 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801B8EB4 (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1801B92A0 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18021DE3C (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::SetInteractionChain(int a1, const struct CInteraction *a2)
{
  const struct _tlgProvider_t *v4; // rcx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+A0h] [rbp+17h] BYREF
  void *InputHandle; // [rsp+A8h] [rbp+1Fh]
  __int64 v13; // [rsp+B0h] [rbp+27h]
  const char *v14; // [rsp+B8h] [rbp+2Fh] BYREF
  const char *v15; // [rsp+C0h] [rbp+37h] BYREF
  const struct CInteraction *v16; // [rsp+C8h] [rbp+3Fh] BYREF
  const struct CInteraction *v17; // [rsp+D0h] [rbp+47h] BYREF
  int v18; // [rsp+100h] [rbp+77h] BYREF
  BOOL v19; // [rsp+108h] [rbp+7Fh]

  if ( InputTraceLogging::Enabled(2048, 0) )
  {
    if ( a2 )
    {
      do
      {
        v8 = InputTraceLogging::Provider();
        if ( *(_DWORD *)v8 > 4u && (unsigned __int8)tlgKeywordOn(v8, 2048LL) )
        {
          v13 = *((_QWORD *)a2 + 214);
          v19 = InputTraceLogging::InteractionHoverSource(a2);
          InputTraceLogging::InteractionInputTransparency(a2);
          InputTraceLogging::InteractionFurtherProcessingForInput(a2);
          v18 = *((_DWORD *)a2 + 49);
          InputHandle = CInteraction::GetInputHandle(a2);
          v14 = InputTraceLogging::InteractionDefaultToString(a2);
          v15 = InputTraceLogging::InteractionSourceTypeToString(a2);
          v16 = a2;
          v17 = a2;
          v11 = a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            v9,
            (__int64)&unk_1803CB7CE,
            v9,
            v10,
            (__int64)&v11,
            (__int64)&v17,
            (__int64)&v16,
            &v15,
            &v14);
        }
        InputTraceLogging::GestureTargeting::TraceInteractionConfiguration(a2);
        a2 = (const struct CInteraction *)*((_QWORD *)a2 + 28);
      }
      while ( a2 );
    }
    else
    {
      v4 = InputTraceLogging::Provider();
      if ( *(_DWORD *)v4 > 4u )
      {
        if ( (unsigned __int8)tlgKeywordOn(v4, 2048LL) )
        {
          v18 = a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            v5,
            (unsigned int)&unk_1803CB8CB,
            v6,
            v7,
            (__int64)&v18);
        }
      }
    }
  }
}
