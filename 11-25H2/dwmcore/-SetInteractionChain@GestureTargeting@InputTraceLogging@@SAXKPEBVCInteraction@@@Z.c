/*
 * XREFs of ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x1800FB684
 * Callers:
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x1800FAAB0 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x180216418 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180238940 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapSz@D@@U3@U1@U2@U1@U1@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapSz@D@@534333334@Z @ 0x180002D28 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapSz@D@@U3@U1@U2@U1@U1@U1.c)
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x18013743C (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180137874 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x180137A84 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801CA764 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801CA780 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801CA7C4 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801CA924 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801CA974 (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1801CAD60 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18022968C (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::SetInteractionChain(int a1, const struct CInteraction *a2)
{
  const struct _tlgProvider_t *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+A0h] [rbp+17h] BYREF
  void *InputHandle; // [rsp+A8h] [rbp+1Fh]
  __int64 v16; // [rsp+B0h] [rbp+27h]
  const char *v17; // [rsp+B8h] [rbp+2Fh] BYREF
  const char *v18; // [rsp+C0h] [rbp+37h] BYREF
  const struct CInteraction *v19; // [rsp+C8h] [rbp+3Fh] BYREF
  const struct CInteraction *v20; // [rsp+D0h] [rbp+47h] BYREF
  int v21; // [rsp+100h] [rbp+77h] BYREF
  BOOL v22; // [rsp+108h] [rbp+7Fh]

  if ( (unsigned __int8)InputTraceLogging::Enabled(2048LL, 0LL) )
  {
    if ( a2 )
    {
      do
      {
        v10 = InputTraceLogging::Provider();
        if ( *(_DWORD *)v10 > 4u && (unsigned __int8)tlgKeywordOn(v10, 2048LL, v10, v11) )
        {
          v16 = *((_QWORD *)a2 + 214);
          v22 = InputTraceLogging::InteractionHoverSource(a2);
          InputTraceLogging::InteractionInputTransparency(a2);
          InputTraceLogging::InteractionFurtherProcessingForInput(a2);
          v21 = *((_DWORD *)a2 + 49);
          InputHandle = CInteraction::GetInputHandle(a2);
          v17 = InputTraceLogging::InteractionDefaultToString(a2);
          v18 = InputTraceLogging::InteractionSourceTypeToString(a2);
          v19 = a2;
          v20 = a2;
          v14 = a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            v12,
            (__int64)&unk_1803D678B,
            v12,
            v13,
            (__int64)&v14,
            (__int64)&v20,
            (__int64)&v19,
            &v18,
            &v17);
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
        if ( (unsigned __int8)tlgKeywordOn(v4, 2048LL, v5, v6) )
        {
          v21 = a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            v7,
            (unsigned int)&unk_1803D6746,
            v8,
            v9,
            (__int64)&v21);
        }
      }
    }
  }
}
