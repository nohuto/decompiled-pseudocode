/*
 * XREFs of ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x180090610
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1800901C0 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@45555544@Z @ 0x18000184C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03_ea_18000184C.c)
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18008EAA8 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 *     ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800907A8 (-UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180092C54 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800945BC (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
 *     ?RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801B74B0 (-RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801B8CA4 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801B8CC0 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801B8D04 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x1801B8D60 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801B8E64 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801B8EB4 (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1801B92A0 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::InteractionUpdate(const struct CInteraction **a1)
{
  const struct _tlgProvider_t *v2; // rax
  const struct CInteraction *v3; // rdx
  const struct CInteraction *v4; // rdx
  CInteraction *v5; // rdx
  const struct CInteraction *v6; // rdx
  const char *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  const char *v12; // [rsp+B0h] [rbp+17h] BYREF
  const char *v13; // [rsp+B8h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+C0h] [rbp+27h] BYREF
  __int64 v15; // [rsp+C8h] [rbp+2Fh] BYREF
  __int64 v16[4]; // [rsp+D0h] [rbp+37h] BYREF

  switch ( *(_DWORD *)a1 )
  {
    case 5:
    case 6:
      InputTraceLogging::GestureTargeting::UpdateCapture((const struct CManipulationManager::InteractionUpdate *)a1);
      break;
    case 7:
      InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate((const struct CManipulationManager::InteractionUpdate *)a1);
      break;
    case 8:
      InputTraceLogging::GestureTargeting::TemporaryInteractionConfigurationUpdate((const struct CManipulationManager::InteractionUpdate *)a1);
      break;
    case 9:
      InputTraceLogging::GestureTargeting::RailsUpdate((const struct CManipulationManager::InteractionUpdate *)a1);
      break;
    default:
      v2 = InputTraceLogging::Provider();
      if ( *(_DWORD *)v2 > 4u && (unsigned __int8)tlgKeywordOn(v2, 2048LL) )
      {
        InputTraceLogging::InteractionHoverSource(a1[2]);
        InputTraceLogging::InteractionInputTransparency(v3);
        InputTraceLogging::InteractionFurtherProcessingForInput(v4);
        if ( v5 )
          CInteraction::GetInputHandle(v5);
        v12 = InputTraceLogging::InteractionDefaultToString(v5);
        v7 = InputTraceLogging::InteractionSourceTypeToString(v6);
        v8 = *(unsigned int *)a1;
        v13 = v7;
        v14 = v9;
        v15 = v9;
        v16[0] = InputTraceLogging::MidManipulationUpdateTypeToString(v8);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v11,
          (__int64)&unk_1803CAFCE,
          v10,
          v11,
          v16,
          (__int64)&v15,
          (__int64)&v14,
          &v13,
          &v12);
      }
      break;
  }
}
