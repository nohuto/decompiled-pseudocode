/*
 * XREFs of ??$InteractionConfigurationUpdate@UDwmPenInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801C9BC8
 * Callers:
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180133668 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180137874 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
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

const struct _tlgProvider_t *__fastcall InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmPenInteractionConfigurationPrimitive>(
        unsigned int *a1)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ebx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  const struct CInteraction *v14; // rdx
  __int64 v15; // rax
  const struct CInteraction *v16; // rdx
  const struct CInteraction *v17; // rdx
  __int64 v18; // rdx
  unsigned __int8 v19; // al
  const struct CInteraction *v20; // rdx
  const char *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // r8d
  int v25; // r9d
  unsigned int v26; // esi
  const struct _tlgProvider_t *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  const char *v30; // rax
  const char *v31; // rax
  const char *v32; // rax
  const char *v33; // rax
  const char *v34; // rax
  const char *v35; // rax
  const char *v36; // rax
  const char *v37; // rax
  const char *v38; // rax
  const char *v39; // rax
  const char *v40; // rax
  const char *v41; // rax
  const char *v42; // rax
  const char *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 updated; // rax
  const struct CInteraction *v49; // rdx
  __int64 v50; // rax
  const struct CInteraction *v51; // rdx
  const struct CInteraction *v52; // rdx
  __int64 v53; // rdx
  unsigned __int8 v54; // al
  int v55; // eax
  const struct CInteraction *v56; // rdx
  const char *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  int v60; // r8d
  int v61; // r9d
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

  result = InputTraceLogging::Provider();
  v5 = 0;
  if ( *(_DWORD *)result )
  {
    result = (const struct _tlgProvider_t *)tlgKeywordOn(result, 2048LL, v3, v4);
    if ( (_BYTE)result )
    {
      v6 = *((_QWORD *)a1 + 7);
      if ( a1[12] )
      {
        v26 = 0;
        do
        {
          result = InputTraceLogging::Provider();
          v27 = result;
          if ( *(_DWORD *)result > 4u
            && (*((_DWORD *)result + 4) & 0x800LL) != 0
            && (*((_QWORD *)result + 3) & 0x800LL) == *((_QWORD *)result + 3) )
          {
            v67 = v26;
            v28 = *(unsigned int *)(v6 + 12LL * v26 + 8);
            v93 = *(_DWORD *)(v6 + 12LL * v26 + 4);
            v29 = a1[11];
            v94 = *(_DWORD *)(v6 + 12LL * v26);
            v30 = "StopInertia";
            if ( (v28 & 0x20000000) == 0 )
              v30 = word_180336D88;
            v78 = v30;
            v31 = "DisableGestures";
            if ( (v28 & 0x10000000) == 0 )
              v31 = word_180336D88;
            v79 = v31;
            v32 = "Wheel";
            if ( (v28 & 0x8000) == 0 )
              v32 = word_180336D88;
            v80 = v32;
            v33 = "Hover";
            if ( (v28 & 0x400) == 0 )
              v33 = word_180336D88;
            v81 = v33;
            v34 = "Eraser";
            if ( (v28 & 0x200) == 0 )
              v34 = word_180336D88;
            v82 = v34;
            v35 = "Button";
            if ( (v28 & 0x100) == 0 )
              v35 = word_180336D88;
            v83 = v35;
            v36 = "Hold";
            if ( (v28 & 0x80u) == 0LL )
              v36 = word_180336D88;
            v84 = v36;
            v37 = "Tap";
            if ( (v28 & 0x40) == 0 )
              v37 = word_180336D88;
            v85 = v37;
            v38 = "Zoom-";
            if ( (v28 & 0x20) == 0 )
              v38 = word_180336D88;
            v86 = v38;
            v39 = "Zoom+";
            if ( (v28 & 0x10) == 0 )
              v39 = word_180336D88;
            v87 = v39;
            v40 = "PanY-";
            if ( (v28 & 8) == 0 )
              v40 = word_180336D88;
            v88 = v40;
            v41 = "PanY+";
            if ( (v28 & 4) == 0 )
              v41 = word_180336D88;
            v89 = v41;
            v42 = "PanX-";
            if ( (v28 & 2) == 0 )
              v42 = word_180336D88;
            v90 = v42;
            v43 = "PanX+";
            if ( (v28 & 1) == 0 )
              v43 = word_180336D88;
            v91 = v43;
            v68 = a1[12];
            v44 = InputTraceLogging::InteractionInputTypeToString(v29, v28, v27);
            v45 = a1[10];
            v70 = v44;
            updated = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v45, v46, v47);
            v49 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
            v71 = updated;
            if ( v49 )
              v50 = *((_QWORD *)v49 + 214);
            else
              v50 = 0LL;
            v72 = v50;
            v69 = InputTraceLogging::InteractionHoverSource(v49);
            v62 = InputTraceLogging::InteractionInputTransparency(v51);
            v63 = InputTraceLogging::InteractionFurtherProcessingForInput(v52);
            if ( v53 )
              v54 = *(_BYTE *)(v53 + 200) & 1;
            else
              v54 = 0;
            v64 = v54;
            if ( v53 )
            {
              v92 = *(_DWORD *)(v53 + 196);
              InputHandle = CInteraction::GetInputHandle((CInteraction *)v53);
              v55 = *(_DWORD *)(v53 + 1720);
            }
            else
            {
              v92 = 0;
              v55 = 0;
              InputHandle = 0LL;
            }
            v65 = v55;
            v73 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v53);
            v57 = InputTraceLogging::InteractionSourceTypeToString(v56);
            v58 = *a1;
            v74 = v57;
            v75 = v59;
            v76 = v59;
            v77 = InputTraceLogging::MidManipulationUpdateTypeToString(v58);
            result = (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                                      v60,
                                                      (unsigned int)&unk_1803D5154,
                                                      v60,
                                                      v61,
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
          ++v26;
        }
        while ( v26 < a1[12] );
      }
      else
      {
        result = InputTraceLogging::Provider();
        if ( *(_DWORD *)result > 4u
          && (*((_DWORD *)result + 4) & 0x800LL) != 0
          && (*((_QWORD *)result + 3) & 0x800LL) == *((_QWORD *)result + 3) )
        {
          v8 = a1[11];
          v93 = a1[12];
          v9 = InputTraceLogging::InteractionInputTypeToString(v8, v7, result);
          v10 = a1[10];
          v77 = v9;
          v13 = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v10, v11, v12);
          v14 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
          v76 = v13;
          if ( v14 )
            v15 = *((_QWORD *)v14 + 214);
          else
            v15 = 0LL;
          v75 = v15;
          v94 = InputTraceLogging::InteractionHoverSource(v14);
          v65 = InputTraceLogging::InteractionInputTransparency(v16);
          v64 = InputTraceLogging::InteractionFurtherProcessingForInput(v17);
          if ( v18 )
            v19 = *(_BYTE *)(v18 + 200) & 1;
          else
            v19 = 0;
          v63 = v19;
          if ( v18 )
          {
            v92 = *(_DWORD *)(v18 + 196);
            InputHandle = CInteraction::GetInputHandle((CInteraction *)v18);
            v5 = *(_DWORD *)(v18 + 1720);
          }
          else
          {
            v92 = 0;
            InputHandle = 0LL;
          }
          v62 = v5;
          v74 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v18);
          v21 = InputTraceLogging::InteractionSourceTypeToString(v20);
          v22 = *a1;
          v73 = v21;
          v72 = v23;
          v71 = v23;
          v70 = InputTraceLogging::MidManipulationUpdateTypeToString(v22);
          return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                                                  v24,
                                                  (unsigned int)&unk_1803D5033,
                                                  v24,
                                                  v25,
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
  return result;
}
