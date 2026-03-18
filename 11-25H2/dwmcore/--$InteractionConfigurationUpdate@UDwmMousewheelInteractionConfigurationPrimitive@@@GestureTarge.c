/*
 * XREFs of ??$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801C91A0
 * Callers:
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180133668 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180137874 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x180137A84 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U1@U1@U3@U3@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@455555433553333333333333355@Z @ 0x1801CA1CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03_ea_1801CA1CC.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801CA764 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801CA780 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z @ 0x1801CA79C (-InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigura.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801CA7C4 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x1801CA820 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 *     ?InteractionInputTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionInputType@@@Z @ 0x1801CA8CC (-InteractionInputTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionInputType@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801CA924 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801CA974 (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@4555554335@Z @ 0x1801CA990 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03_ea_1801CA990.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1801CAD60 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 */

char __fastcall InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmMousewheelInteractionConfigurationPrimitive>(
        unsigned int *a1)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // ebx
  __int64 v4; // r14
  unsigned int v5; // esi
  const struct _tlgProvider_t *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // rax
  const char *v18; // rax
  const char *v19; // rax
  const char *v20; // rax
  const char *v21; // rax
  const char *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 updated; // rax
  const struct CInteraction *v28; // rdx
  __int64 v29; // rax
  const struct CInteraction *v30; // rdx
  const struct CInteraction *v31; // rdx
  __int64 v32; // rdx
  unsigned __int8 v33; // al
  int v34; // eax
  const struct CInteraction *v35; // rdx
  const char *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rax
  const struct CInteraction *v49; // rdx
  __int64 v50; // rax
  const struct CInteraction *v51; // rdx
  const struct CInteraction *v52; // rdx
  __int64 v53; // rdx
  unsigned __int8 v54; // al
  const struct CInteraction *v55; // rdx
  const char *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  int v59; // r8d
  int v60; // r9d
  BOOL v62; // [rsp+130h] [rbp-80h] BYREF
  int v63; // [rsp+134h] [rbp-7Ch] BYREF
  int v64; // [rsp+138h] [rbp-78h] BYREF
  BOOL v65; // [rsp+13Ch] [rbp-74h] BYREF
  void *InputHandle; // [rsp+140h] [rbp-70h] BYREF
  unsigned int v67; // [rsp+148h] [rbp-68h] BYREF
  unsigned int v68; // [rsp+14Ch] [rbp-64h] BYREF
  BOOL v69; // [rsp+150h] [rbp-60h] BYREF
  __int64 v70; // [rsp+158h] [rbp-58h] BYREF
  __int64 v71; // [rsp+160h] [rbp-50h] BYREF
  __int64 v72; // [rsp+168h] [rbp-48h] BYREF
  const char *v73; // [rsp+170h] [rbp-40h] BYREF
  const char *v74; // [rsp+178h] [rbp-38h] BYREF
  __int64 v75; // [rsp+180h] [rbp-30h] BYREF
  __int64 v76; // [rsp+188h] [rbp-28h] BYREF
  __int64 v77; // [rsp+190h] [rbp-20h] BYREF
  const char *v78; // [rsp+198h] [rbp-18h] BYREF
  const char *v79; // [rsp+1A0h] [rbp-10h] BYREF
  const char *v80; // [rsp+1A8h] [rbp-8h] BYREF
  const char *v81; // [rsp+1B0h] [rbp+0h] BYREF
  const char *v82; // [rsp+1B8h] [rbp+8h] BYREF
  const char *v83; // [rsp+1C0h] [rbp+10h] BYREF
  const char *v84; // [rsp+1C8h] [rbp+18h] BYREF
  const char *v85; // [rsp+1D0h] [rbp+20h] BYREF
  const char *v86; // [rsp+1D8h] [rbp+28h] BYREF
  const char *v87; // [rsp+1E0h] [rbp+30h] BYREF
  const char *v88; // [rsp+1E8h] [rbp+38h] BYREF
  const char *v89; // [rsp+1F0h] [rbp+40h] BYREF
  const char *v90; // [rsp+1F8h] [rbp+48h] BYREF
  const char *v91; // [rsp+200h] [rbp+50h] BYREF
  int v92; // [rsp+258h] [rbp+A8h] BYREF
  unsigned int v93; // [rsp+260h] [rbp+B0h] BYREF
  int v94; // [rsp+268h] [rbp+B8h] BYREF

  LOBYTE(v2) = InputTraceLogging::Enabled(2048, 0);
  v3 = 0;
  if ( (_BYTE)v2 )
  {
    v4 = *((_QWORD *)a1 + 7);
    if ( a1[12] )
    {
      v5 = 0;
      do
      {
        v2 = InputTraceLogging::Provider();
        v6 = v2;
        if ( *(_DWORD *)v2 > 4u
          && (*((_DWORD *)v2 + 4) & 0x800LL) != 0
          && (*((_QWORD *)v2 + 3) & 0x800LL) == *((_QWORD *)v2 + 3) )
        {
          v67 = v5;
          v7 = *(unsigned int *)(v4 + 12LL * v5 + 8);
          v93 = *(_DWORD *)(v4 + 12LL * v5 + 4);
          v8 = a1[11];
          v94 = *(_DWORD *)(v4 + 12LL * v5);
          v9 = "StopInertia";
          if ( (v7 & 0x20000000) == 0 )
            v9 = word_180336D88;
          v78 = v9;
          v10 = "DisableGestures";
          if ( (v7 & 0x10000000) == 0 )
            v10 = word_180336D88;
          v79 = v10;
          v11 = "Wheel";
          if ( (v7 & 0x8000) == 0 )
            v11 = word_180336D88;
          v80 = v11;
          v12 = "Hover";
          if ( (v7 & 0x400) == 0 )
            v12 = word_180336D88;
          v81 = v12;
          v13 = "Eraser";
          if ( (v7 & 0x200) == 0 )
            v13 = word_180336D88;
          v82 = v13;
          v14 = "Button";
          if ( (v7 & 0x100) == 0 )
            v14 = word_180336D88;
          v83 = v14;
          v15 = "Hold";
          if ( (v7 & 0x80u) == 0LL )
            v15 = word_180336D88;
          v84 = v15;
          v16 = "Tap";
          if ( (v7 & 0x40) == 0 )
            v16 = word_180336D88;
          v85 = v16;
          v17 = "Zoom-";
          if ( (v7 & 0x20) == 0 )
            v17 = word_180336D88;
          v86 = v17;
          v18 = "Zoom+";
          if ( (v7 & 0x10) == 0 )
            v18 = word_180336D88;
          v87 = v18;
          v19 = "PanY-";
          if ( (v7 & 8) == 0 )
            v19 = word_180336D88;
          v88 = v19;
          v20 = "PanY+";
          if ( (v7 & 4) == 0 )
            v20 = word_180336D88;
          v89 = v20;
          v21 = "PanX-";
          if ( (v7 & 2) == 0 )
            v21 = word_180336D88;
          v90 = v21;
          v22 = "PanX+";
          if ( (v7 & 1) == 0 )
            v22 = word_180336D88;
          v91 = v22;
          v68 = a1[12];
          v23 = InputTraceLogging::InteractionInputTypeToString(v8, v7, v6);
          v24 = a1[10];
          v70 = v23;
          updated = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v24, v25, v26);
          v28 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
          v71 = updated;
          if ( v28 )
            v29 = *((_QWORD *)v28 + 214);
          else
            v29 = 0LL;
          v72 = v29;
          v69 = InputTraceLogging::InteractionHoverSource(v28);
          v62 = InputTraceLogging::InteractionInputTransparency(v30);
          v63 = InputTraceLogging::InteractionFurtherProcessingForInput(v31);
          if ( v32 )
            v33 = *(_BYTE *)(v32 + 200) & 1;
          else
            v33 = 0;
          v64 = v33;
          if ( v32 )
          {
            v92 = *(_DWORD *)(v32 + 196);
            InputHandle = CInteraction::GetInputHandle((CInteraction *)v32);
            v34 = *(_DWORD *)(v32 + 1720);
          }
          else
          {
            v92 = 0;
            v34 = 0;
            InputHandle = 0LL;
          }
          v65 = v34;
          v73 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v32);
          v36 = InputTraceLogging::InteractionSourceTypeToString(v35);
          v37 = *a1;
          v74 = v36;
          v75 = v38;
          v76 = v38;
          v77 = InputTraceLogging::MidManipulationUpdateTypeToString(v37);
          LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                         v39,
                         (unsigned int)&unk_1803D5154,
                         v39,
                         v40,
                         (__int64)&v77,
                         (__int64)&v76,
                         (__int64)&v75,
                         (__int64)&v74,
                         (__int64)&v73,
                         (__int64)&v65,
                         (__int64)&InputHandle,
                         (__int64)&v92,
                         (__int64)&v64,
                         (__int64)&v63,
                         (__int64)&v62,
                         (__int64)&v69,
                         (__int64)&v72,
                         (__int64)&v71,
                         (__int64)&v70,
                         (__int64)&v68,
                         (__int64)&v67,
                         (__int64)&v91,
                         (__int64)&v90,
                         (__int64)&v89,
                         (__int64)&v88,
                         (__int64)&v87,
                         (__int64)&v86,
                         (__int64)&v85,
                         (__int64)&v84,
                         (__int64)&v83,
                         (__int64)&v82,
                         (__int64)&v81,
                         (__int64)&v80,
                         (__int64)&v79,
                         (__int64)&v78,
                         (__int64)&v94,
                         (__int64)&v93);
        }
        ++v5;
      }
      while ( v5 < a1[12] );
    }
    else
    {
      v2 = InputTraceLogging::Provider();
      if ( *(_DWORD *)v2 > 4u )
      {
        LOBYTE(v2) = tlgKeywordOn(v2, 2048LL, v2, v41);
        if ( (_BYTE)v2 )
        {
          v93 = a1[12];
          v44 = InputTraceLogging::InteractionInputTypeToString(a1[11], v42, v43);
          v45 = a1[10];
          v77 = v44;
          v48 = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v45, v46, v47);
          v49 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
          v76 = v48;
          if ( v49 )
            v50 = *((_QWORD *)v49 + 214);
          else
            v50 = 0LL;
          v75 = v50;
          v94 = InputTraceLogging::InteractionHoverSource(v49);
          v65 = InputTraceLogging::InteractionInputTransparency(v51);
          v64 = InputTraceLogging::InteractionFurtherProcessingForInput(v52);
          if ( v53 )
            v54 = *(_BYTE *)(v53 + 200) & 1;
          else
            v54 = 0;
          v63 = v54;
          if ( v53 )
          {
            v92 = *(_DWORD *)(v53 + 196);
            InputHandle = CInteraction::GetInputHandle((CInteraction *)v53);
            v3 = *(_DWORD *)(v53 + 1720);
          }
          else
          {
            v92 = 0;
            InputHandle = 0LL;
          }
          v62 = v3;
          v74 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v53);
          v56 = InputTraceLogging::InteractionSourceTypeToString(v55);
          v57 = *a1;
          v73 = v56;
          v72 = v58;
          v71 = v58;
          v70 = InputTraceLogging::MidManipulationUpdateTypeToString(v57);
          LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                         v59,
                         (unsigned int)&unk_1803D5033,
                         v59,
                         v60,
                         (__int64)&v70,
                         (__int64)&v71,
                         (__int64)&v72,
                         (__int64)&v73,
                         (__int64)&v74,
                         (__int64)&v62,
                         (__int64)&InputHandle,
                         (__int64)&v92,
                         (__int64)&v63,
                         (__int64)&v64,
                         (__int64)&v65,
                         (__int64)&v94,
                         (__int64)&v75,
                         (__int64)&v76,
                         (__int64)&v77,
                         (__int64)&v93);
        }
      }
    }
  }
  return (char)v2;
}
