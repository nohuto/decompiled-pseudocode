/*
 * XREFs of ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180133668
 * Callers:
 *     ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x1801351D0 (-InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U1@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@4555554355@Z @ 0x180002694 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03_ea_180002694.c)
 *     ??$InteractionConfigurationUpdate@UDwmTouchInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801336CC (--$InteractionConfigurationUpdate@UDwmTouchInteractionConfigurationPrimitive@@@GestureTargeting@.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180137874 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801C8B58 (--$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@.c)
 *     ??$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801C91A0 (--$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTarge.c)
 *     ??$InteractionConfigurationUpdate@UDwmTouchpadInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801C95D0 (--$InteractionConfigurationUpdate@UDwmTouchpadInteractionConfigurationPrimitive@@@GestureTargeti.c)
 *     ??$InteractionConfigurationUpdate@UDwmPenInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801C9BC8 (--$InteractionConfigurationUpdate@UDwmPenInteractionConfigurationPrimitive@@@GestureTargeting@In.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801CA764 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801CA780 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z @ 0x1801CA79C (-InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigura.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801CA7C4 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x1801CA820 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801CA924 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801CA974 (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1801CAD60 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate(
        const struct CManipulationManager::InteractionUpdate *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  __int64 updated; // rax
  __int64 v8; // r8
  const struct CInteraction *v9; // rdx
  __int64 v10; // rax
  const struct CInteraction *v11; // rdx
  const struct CInteraction *v12; // rdx
  __int64 v13; // rdx
  void *v14; // r8
  unsigned __int8 v15; // al
  const struct CInteraction *v16; // rdx
  const char *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  BOOL v22; // [rsp+A0h] [rbp-9h] BYREF
  BOOL v23; // [rsp+A4h] [rbp-5h] BYREF
  int v24; // [rsp+A8h] [rbp-1h] BYREF
  int v25; // [rsp+ACh] [rbp+3h] BYREF
  void *InputHandle; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+C0h] [rbp+17h] BYREF
  const char *v29; // [rsp+C8h] [rbp+1Fh] BYREF
  const char *v30; // [rsp+D0h] [rbp+27h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+2Fh] BYREF
  __int64 v32; // [rsp+E0h] [rbp+37h] BYREF
  __int64 v33[3]; // [rsp+E8h] [rbp+3Fh] BYREF
  int v34; // [rsp+110h] [rbp+67h] BYREF
  int v35; // [rsp+118h] [rbp+6Fh]
  int v36; // [rsp+120h] [rbp+77h]
  BOOL v37; // [rsp+128h] [rbp+7Fh] BYREF

  switch ( *((_DWORD *)a1 + 11) )
  {
    case 1:
      InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmTouchInteractionConfigurationPrimitive>();
      break;
    case 2:
      InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmTouchpadInteractionConfigurationPrimitive>();
      break;
    case 3:
      InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmPenInteractionConfigurationPrimitive>();
      break;
    case 4:
      InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmMouseInteractionConfigurationPrimitive>();
      break;
    case 5:
      InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmMousewheelInteractionConfigurationPrimitive>();
      break;
    default:
      v2 = InputTraceLogging::Provider();
      if ( *(_DWORD *)v2 > 4u && (unsigned __int8)tlgKeywordOn(v2, 2048LL, v3, v2) )
      {
        v5 = *((_DWORD *)a1 + 11);
        v35 = *((_DWORD *)a1 + 12);
        v6 = *((unsigned int *)a1 + 10);
        v36 = v5;
        updated = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v6, v4, 0LL);
        v9 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
        v27 = updated;
        if ( v9 )
          v10 = *((_QWORD *)v9 + 214);
        else
          v10 = v8;
        v28 = v10;
        v37 = InputTraceLogging::InteractionHoverSource(v9);
        v22 = InputTraceLogging::InteractionInputTransparency(v11);
        v23 = InputTraceLogging::InteractionFurtherProcessingForInput(v12);
        if ( v13 )
          v15 = *(_BYTE *)(v13 + 200) & 1;
        else
          v15 = (unsigned __int8)v14;
        v24 = v15;
        if ( v13 )
        {
          v34 = *(_DWORD *)(v13 + 196);
          InputHandle = CInteraction::GetInputHandle((CInteraction *)v13);
          LODWORD(v14) = *(_DWORD *)(v13 + 1720);
        }
        else
        {
          v34 = (int)v14;
          InputHandle = v14;
        }
        v25 = (int)v14;
        v29 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v13);
        v17 = InputTraceLogging::InteractionSourceTypeToString(v16);
        v18 = *(unsigned int *)a1;
        v30 = v17;
        v31 = v19;
        v32 = v19;
        v33[0] = InputTraceLogging::MidManipulationUpdateTypeToString(v18);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v21,
          (__int64)&unk_1803D5C2C,
          v20,
          v21,
          v33,
          (__int64)&v32,
          (__int64)&v31,
          &v30,
          &v29,
          (__int64)&v25,
          (__int64)&InputHandle,
          (__int64)&v34,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v37,
          (__int64)&v28,
          &v27);
      }
      break;
  }
}
