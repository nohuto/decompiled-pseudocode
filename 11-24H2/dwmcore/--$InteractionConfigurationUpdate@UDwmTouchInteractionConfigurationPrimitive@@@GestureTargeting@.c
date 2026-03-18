/*
 * XREFs of ??$InteractionConfigurationUpdate@UDwmTouchInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18008EB0C
 * Callers:
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18008EAA8 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180092C54 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x180092E64 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U1@U1@U3@U3@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@455555433553333333333333355@Z @ 0x1801B870C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03_ea_1801B870C.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801B8CA4 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801B8CC0 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z @ 0x1801B8CDC (-InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigura.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801B8D04 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x1801B8D60 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 *     ?InteractionInputTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionInputType@@@Z @ 0x1801B8E0C (-InteractionInputTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionInputType@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801B8E64 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801B8EB4 (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@4555554335@Z @ 0x1801B8ED0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03_ea_1801B8ED0.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1801B92A0 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 */

const struct _tlgProvider_t *__fastcall InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmTouchInteractionConfigurationPrimitive>(
        unsigned int *a1)
{
  const struct _tlgProvider_t *result; // rax
  int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  const struct CInteraction *v12; // rdx
  __int64 v13; // rax
  const struct CInteraction *v14; // rdx
  const struct CInteraction *v15; // rdx
  __int64 v16; // rdx
  unsigned __int8 v17; // al
  const struct CInteraction *v18; // rdx
  const char *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // r9d
  unsigned int v24; // esi
  const struct _tlgProvider_t *v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  const char *v28; // rax
  const char *v29; // rax
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
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 updated; // rax
  const struct CInteraction *v47; // rdx
  __int64 v48; // rax
  const struct CInteraction *v49; // rdx
  const struct CInteraction *v50; // rdx
  __int64 v51; // rdx
  unsigned __int8 v52; // al
  int v53; // eax
  const struct CInteraction *v54; // rdx
  const char *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  int v58; // r8d
  int v59; // r9d
  BOOL v60; // [rsp+130h] [rbp-80h] BYREF
  int v61; // [rsp+134h] [rbp-7Ch] BYREF
  int v62; // [rsp+138h] [rbp-78h] BYREF
  BOOL v63; // [rsp+13Ch] [rbp-74h] BYREF
  void *InputHandle; // [rsp+140h] [rbp-70h] BYREF
  unsigned int v65; // [rsp+148h] [rbp-68h] BYREF
  unsigned int v66; // [rsp+14Ch] [rbp-64h] BYREF
  BOOL v67; // [rsp+150h] [rbp-60h] BYREF
  __int64 v68; // [rsp+158h] [rbp-58h] BYREF
  __int64 v69; // [rsp+160h] [rbp-50h] BYREF
  __int64 v70; // [rsp+168h] [rbp-48h] BYREF
  const char *v71; // [rsp+170h] [rbp-40h] BYREF
  const char *v72; // [rsp+178h] [rbp-38h] BYREF
  __int64 v73; // [rsp+180h] [rbp-30h] BYREF
  __int64 v74; // [rsp+188h] [rbp-28h] BYREF
  __int64 v75; // [rsp+190h] [rbp-20h] BYREF
  const char *v76; // [rsp+198h] [rbp-18h] BYREF
  const char *v77; // [rsp+1A0h] [rbp-10h] BYREF
  const char *v78; // [rsp+1A8h] [rbp-8h] BYREF
  const char *v79; // [rsp+1B0h] [rbp+0h] BYREF
  const char *v80; // [rsp+1B8h] [rbp+8h] BYREF
  const char *v81; // [rsp+1C0h] [rbp+10h] BYREF
  const char *v82; // [rsp+1C8h] [rbp+18h] BYREF
  const char *v83; // [rsp+1D0h] [rbp+20h] BYREF
  const char *v84; // [rsp+1D8h] [rbp+28h] BYREF
  const char *v85; // [rsp+1E0h] [rbp+30h] BYREF
  const char *v86; // [rsp+1E8h] [rbp+38h] BYREF
  const char *v87; // [rsp+1F0h] [rbp+40h] BYREF
  const char *v88; // [rsp+1F8h] [rbp+48h] BYREF
  const char *v89; // [rsp+200h] [rbp+50h] BYREF
  int v90; // [rsp+258h] [rbp+A8h] BYREF
  unsigned int v91; // [rsp+260h] [rbp+B0h] BYREF
  int v92; // [rsp+268h] [rbp+B8h] BYREF

  result = (const struct _tlgProvider_t *)InputTraceLogging::Enabled(2048LL, 0LL);
  v3 = 0;
  if ( (_BYTE)result )
  {
    v4 = *((_QWORD *)a1 + 7);
    if ( a1[12] )
    {
      v24 = 0;
      do
      {
        result = InputTraceLogging::Provider();
        v25 = result;
        if ( *(_DWORD *)result > 4u
          && (*((_DWORD *)result + 4) & 0x800LL) != 0
          && (*((_QWORD *)result + 3) & 0x800LL) == *((_QWORD *)result + 3) )
        {
          v65 = v24;
          v26 = *(unsigned int *)(v4 + 12LL * v24 + 8);
          v91 = *(_DWORD *)(v4 + 12LL * v24 + 4);
          v27 = a1[11];
          v92 = *(_DWORD *)(v4 + 12LL * v24);
          v28 = "StopInertia";
          if ( (v26 & 0x20000000) == 0 )
            v28 = word_18032AF78;
          v76 = v28;
          v29 = "DisableGestures";
          if ( (v26 & 0x10000000) == 0 )
            v29 = word_18032AF78;
          v77 = v29;
          v30 = "Wheel";
          if ( (v26 & 0x8000) == 0 )
            v30 = word_18032AF78;
          v78 = v30;
          v31 = "Hover";
          if ( (v26 & 0x400) == 0 )
            v31 = word_18032AF78;
          v79 = v31;
          v32 = "Eraser";
          if ( (v26 & 0x200) == 0 )
            v32 = word_18032AF78;
          v80 = v32;
          v33 = "Button";
          if ( (v26 & 0x100) == 0 )
            v33 = word_18032AF78;
          v81 = v33;
          v34 = "Hold";
          if ( (v26 & 0x80u) == 0LL )
            v34 = word_18032AF78;
          v82 = v34;
          v35 = "Tap";
          if ( (v26 & 0x40) == 0 )
            v35 = word_18032AF78;
          v83 = v35;
          v36 = "Zoom-";
          if ( (v26 & 0x20) == 0 )
            v36 = word_18032AF78;
          v84 = v36;
          v37 = "Zoom+";
          if ( (v26 & 0x10) == 0 )
            v37 = word_18032AF78;
          v85 = v37;
          v38 = "PanY-";
          if ( (v26 & 8) == 0 )
            v38 = word_18032AF78;
          v86 = v38;
          v39 = "PanY+";
          if ( (v26 & 4) == 0 )
            v39 = word_18032AF78;
          v87 = v39;
          v40 = "PanX-";
          if ( (v26 & 2) == 0 )
            v40 = word_18032AF78;
          v88 = v40;
          v41 = "PanX+";
          if ( (v26 & 1) == 0 )
            v41 = word_18032AF78;
          v89 = v41;
          v66 = a1[12];
          v42 = InputTraceLogging::InteractionInputTypeToString(v27, v26, v25);
          v43 = a1[10];
          v68 = v42;
          updated = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v43, v44, v45);
          v47 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
          v69 = updated;
          if ( v47 )
            v48 = *((_QWORD *)v47 + 214);
          else
            v48 = 0LL;
          v70 = v48;
          v67 = InputTraceLogging::InteractionHoverSource(v47);
          v60 = InputTraceLogging::InteractionInputTransparency(v49);
          v61 = InputTraceLogging::InteractionFurtherProcessingForInput(v50);
          if ( v51 )
            v52 = *(_BYTE *)(v51 + 200) & 1;
          else
            v52 = 0;
          v62 = v52;
          if ( v51 )
          {
            v90 = *(_DWORD *)(v51 + 196);
            InputHandle = CInteraction::GetInputHandle((CInteraction *)v51);
            v53 = *(_DWORD *)(v51 + 1720);
          }
          else
          {
            v90 = 0;
            v53 = 0;
            InputHandle = 0LL;
          }
          v63 = v53;
          v71 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v51);
          v55 = InputTraceLogging::InteractionSourceTypeToString(v54);
          v56 = *a1;
          v72 = v55;
          v73 = v57;
          v74 = v57;
          v75 = InputTraceLogging::MidManipulationUpdateTypeToString(v56);
          result = (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                                    v58,
                                                    (unsigned int)&unk_1803CA1DC,
                                                    v58,
                                                    v59,
                                                    (__int64)&v75,
                                                    (__int64)&v74,
                                                    (__int64)&v73,
                                                    (__int64)&v72,
                                                    (__int64)&v71,
                                                    (__int64)&v63,
                                                    (__int64)&InputHandle,
                                                    (__int64)&v90,
                                                    (__int64)&v62,
                                                    (__int64)&v61,
                                                    (__int64)&v60,
                                                    (__int64)&v67,
                                                    (__int64)&v70,
                                                    (__int64)&v69,
                                                    (__int64)&v68,
                                                    (__int64)&v66,
                                                    (__int64)&v65,
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
                                                    (__int64)&v77,
                                                    (__int64)&v76,
                                                    (__int64)&v92,
                                                    (__int64)&v91);
        }
        ++v24;
      }
      while ( v24 < a1[12] );
    }
    else
    {
      result = InputTraceLogging::Provider();
      if ( *(_DWORD *)result > 4u
        && (*((_DWORD *)result + 4) & 0x800LL) != 0
        && (*((_QWORD *)result + 3) & 0x800LL) == *((_QWORD *)result + 3) )
      {
        v6 = a1[11];
        v91 = a1[12];
        v7 = InputTraceLogging::InteractionInputTypeToString(v6, v5, result);
        v8 = a1[10];
        v75 = v7;
        v11 = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v8, v9, v10);
        v12 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
        v74 = v11;
        if ( v12 )
          v13 = *((_QWORD *)v12 + 214);
        else
          v13 = 0LL;
        v73 = v13;
        v92 = InputTraceLogging::InteractionHoverSource(v12);
        v63 = InputTraceLogging::InteractionInputTransparency(v14);
        v62 = InputTraceLogging::InteractionFurtherProcessingForInput(v15);
        if ( v16 )
          v17 = *(_BYTE *)(v16 + 200) & 1;
        else
          v17 = 0;
        v61 = v17;
        if ( v16 )
        {
          v90 = *(_DWORD *)(v16 + 196);
          InputHandle = CInteraction::GetInputHandle((CInteraction *)v16);
          v3 = *(_DWORD *)(v16 + 1720);
        }
        else
        {
          v90 = 0;
          InputHandle = 0LL;
        }
        v60 = v3;
        v72 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v16);
        v19 = InputTraceLogging::InteractionSourceTypeToString(v18);
        v20 = *a1;
        v71 = v19;
        v70 = v21;
        v69 = v21;
        v68 = InputTraceLogging::MidManipulationUpdateTypeToString(v20);
        return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                                                v22,
                                                (unsigned int)&unk_1803CA0BB,
                                                v22,
                                                v23,
                                                (__int64)&v68,
                                                (__int64)&v69,
                                                (__int64)&v70,
                                                (__int64)&v71,
                                                (__int64)&v72,
                                                (__int64)&v60,
                                                (__int64)&InputHandle,
                                                (__int64)&v90,
                                                (__int64)&v61,
                                                (__int64)&v62,
                                                (__int64)&v63,
                                                (__int64)&v92,
                                                (__int64)&v73,
                                                (__int64)&v74,
                                                (__int64)&v75,
                                                (__int64)&v91);
      }
    }
  }
  return result;
}
