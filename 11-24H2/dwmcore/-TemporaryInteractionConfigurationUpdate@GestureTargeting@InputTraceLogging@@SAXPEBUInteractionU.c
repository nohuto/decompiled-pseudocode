/*
 * XREFs of ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800945BC
 * Callers:
 *     ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x180090610 (-InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180092C54 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801B8CA4 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801B8CC0 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z @ 0x1801B8CDC (-InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigura.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801B8D04 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x1801B8D60 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801B8E64 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801B8EB4 (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1801B92A0 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@45555543AEBU?$_tlgWrapperByVal@$00@@3333333@Z @ 0x180221724 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03_ea_180221724.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::TemporaryInteractionConfigurationUpdate(
        const struct CManipulationManager::InteractionUpdate *a1)
{
  int v2; // ebx
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // rdx
  const char *v5; // rax
  const char *v6; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  int v11; // ecx
  int v12; // ecx
  const char *v13; // rax
  __int64 v14; // rcx
  __int64 updated; // rax
  __int64 v16; // r8
  const struct CInteraction *v17; // rdx
  __int64 v18; // rax
  const struct CInteraction *v19; // rdx
  const struct CInteraction *v20; // rdx
  __int64 v21; // rdx
  void *v22; // r8
  char v23; // r10
  unsigned __int8 v24; // al
  const struct CInteraction *v25; // rdx
  const char *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // r8d
  int v30; // r9d
  BOOL v31; // [rsp+D0h] [rbp-80h] BYREF
  int v32; // [rsp+D4h] [rbp-7Ch] BYREF
  int v33; // [rsp+D8h] [rbp-78h] BYREF
  void *InputHandle; // [rsp+E0h] [rbp-70h] BYREF
  const char *v35; // [rsp+E8h] [rbp-68h] BYREF
  const char *v36; // [rsp+F0h] [rbp-60h] BYREF
  const char *v37; // [rsp+F8h] [rbp-58h] BYREF
  const char *v38; // [rsp+100h] [rbp-50h] BYREF
  const char *v39; // [rsp+108h] [rbp-48h] BYREF
  const char *v40; // [rsp+110h] [rbp-40h] BYREF
  const char *v41; // [rsp+118h] [rbp-38h] BYREF
  __int64 v42; // [rsp+120h] [rbp-30h] BYREF
  __int64 v43; // [rsp+128h] [rbp-28h] BYREF
  const char *v44; // [rsp+130h] [rbp-20h] BYREF
  const char *v45; // [rsp+138h] [rbp-18h] BYREF
  __int64 v46; // [rsp+140h] [rbp-10h] BYREF
  __int64 v47; // [rsp+148h] [rbp-8h] BYREF
  __int64 v48[4]; // [rsp+150h] [rbp+0h] BYREF
  char v49; // [rsp+180h] [rbp+30h] BYREF
  int v50; // [rsp+188h] [rbp+38h] BYREF
  BOOL v51; // [rsp+190h] [rbp+40h] BYREF
  BOOL v52; // [rsp+198h] [rbp+48h] BYREF

  v2 = **((_DWORD **)a1 + 7);
  v3 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v3 > 4u )
  {
    v4 = *((unsigned int *)v3 + 4);
    if ( (v4 & 0x800) != 0 && (*((_QWORD *)v3 + 3) & 0x800LL) == *((_QWORD *)v3 + 3) )
    {
      v5 = "Zoom-";
      if ( (v2 & 0x20) == 0 )
        v5 = word_18032AF78;
      v35 = v5;
      v6 = "Zoom+";
      if ( (v2 & 0x10) == 0 )
        v6 = word_18032AF78;
      v36 = v6;
      v7 = "PanY-";
      if ( (v2 & 8) == 0 )
        v7 = word_18032AF78;
      v37 = v7;
      v8 = "PanY+";
      if ( (v2 & 4) == 0 )
        v8 = word_18032AF78;
      v38 = v8;
      v9 = "PanX-";
      if ( (v2 & 2) == 0 )
        v9 = word_18032AF78;
      v39 = v9;
      v10 = "PanX+";
      if ( (v2 & 1) == 0 )
        v10 = word_18032AF78;
      v11 = *((_DWORD *)a1 + 11);
      v40 = v10;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
            v13 = "Scale";
          else
            v13 = "UNKNOWN";
        }
        else
        {
          v13 = "Y";
        }
      }
      else
      {
        v13 = "X";
      }
      v14 = *((unsigned int *)a1 + 10);
      v41 = v13;
      v49 = *((_BYTE *)a1 + 64) & 1;
      updated = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v14, v4, 0LL);
      v17 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
      v42 = updated;
      if ( v17 )
        v18 = *((_QWORD *)v17 + 214);
      else
        v18 = v16;
      v43 = v18;
      v51 = InputTraceLogging::InteractionHoverSource(v17);
      v52 = InputTraceLogging::InteractionInputTransparency(v19);
      v31 = InputTraceLogging::InteractionFurtherProcessingForInput(v20);
      if ( v21 )
        v24 = v23 & *(_BYTE *)(v21 + 200);
      else
        v24 = (unsigned __int8)v22;
      v32 = v24;
      if ( v21 )
      {
        v50 = *(_DWORD *)(v21 + 196);
        InputHandle = CInteraction::GetInputHandle((CInteraction *)v21);
        LODWORD(v22) = *(_DWORD *)(v21 + 1720);
      }
      else
      {
        v50 = (int)v22;
        InputHandle = v22;
      }
      v33 = (int)v22;
      v44 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v21);
      v26 = InputTraceLogging::InteractionSourceTypeToString(v25);
      v27 = *(unsigned int *)a1;
      v45 = v26;
      v46 = v28;
      v47 = v28;
      v48[0] = InputTraceLogging::MidManipulationUpdateTypeToString(v27);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        v30,
        (unsigned int)&unk_1803CAB2F,
        v29,
        v30,
        (__int64)v48,
        (__int64)&v47,
        (__int64)&v46,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)&v33,
        (__int64)&InputHandle,
        (__int64)&v50,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v52,
        (__int64)&v51,
        (__int64)&v43,
        (__int64)&v42,
        (__int64)&v49,
        (__int64)&v41,
        (__int64)&v40,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v35);
    }
  }
}
