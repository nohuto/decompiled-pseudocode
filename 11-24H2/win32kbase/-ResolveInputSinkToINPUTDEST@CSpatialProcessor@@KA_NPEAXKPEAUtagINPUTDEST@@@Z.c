/*
 * XREFs of ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018AF58
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140185B9C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14018A840 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x14021DCCC (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14002588C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     _HMPheFromObject @ 0x140042A90 (_HMPheFromObject.c)
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1400470F0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x140047618 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14004A450 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetFromPointerType@@YA?AW4CompositionInputType@@K@Z @ 0x14009771C (-GetFromPointerType@@YA-AW4CompositionInputType@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400EDAF4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x14021A230 (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

bool __fastcall CSpatialProcessor::ResolveInputSinkToINPUTDEST(void *a1, int a2, struct tagINPUTDEST *a3)
{
  struct tagINPUTDEST *v4; // r13
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // eax
  char v13; // si
  char v14; // bl
  char v15; // r14
  __int64 v16; // rax
  bool v17; // bl
  bool v18; // r14
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  int v22; // r14d
  int *v23; // rax
  int *v24; // rbx
  __int64 v25; // rax
  bool v26; // r13
  bool v27; // r14
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  bool v31; // r14
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  char v35; // bl
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // edx
  int v39; // r8d
  int *v40; // r13
  CTouchProcessor *v41; // rcx
  bool v42; // al
  int v43; // edx
  int v44; // r8d
  __int64 v45; // r9
  CTouchProcessor *v46; // rcx
  bool v47; // al
  char v48; // bl
  bool v49; // r13
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  _DWORD *v53; // rdx
  __int64 v54; // rbx
  CTouchProcessor *v55; // rcx
  char v56; // al
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  unsigned int v60; // ebx
  char v61; // r14
  __int64 v62; // rax
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  bool v69; // bl
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  bool v73; // bl
  __int64 UserSessionState; // rax
  int v75; // r8d
  int v76; // edx
  int v78; // [rsp+20h] [rbp-E0h]
  int v79; // [rsp+28h] [rbp-D8h]
  int v80; // [rsp+30h] [rbp-D0h]
  __int16 v81; // [rsp+30h] [rbp-D0h]
  int v82; // [rsp+38h] [rbp-C8h]
  char v83; // [rsp+40h] [rbp-C0h]
  bool v84; // [rsp+60h] [rbp-A0h]
  bool v85; // [rsp+60h] [rbp-A0h]
  char v86; // [rsp+60h] [rbp-A0h]
  bool v87; // [rsp+61h] [rbp-9Fh]
  bool v88; // [rsp+61h] [rbp-9Fh]
  int v89; // [rsp+64h] [rbp-9Ch]
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  __int64 v91; // [rsp+70h] [rbp-90h] BYREF
  struct tagINPUTDEST *v92; // [rsp+78h] [rbp-88h]
  _OWORD v93[7]; // [rsp+80h] [rbp-80h] BYREF
  void *v94; // [rsp+F0h] [rbp-10h]
  __int128 v95; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v96; // [rsp+108h] [rbp+8h]
  __int128 v97; // [rsp+118h] [rbp+18h]
  __int64 v98; // [rsp+128h] [rbp+28h]

  v92 = a3;
  v94 = a1;
  v4 = a3;
  memset(v93, 0, sizeof(v93));
  v6 = v93[1];
  *(_OWORD *)v4 = v93[0];
  v7 = v93[2];
  *((_OWORD *)v4 + 1) = v6;
  v8 = v93[3];
  *((_OWORD *)v4 + 2) = v7;
  v9 = v93[4];
  *((_OWORD *)v4 + 3) = v8;
  v10 = v93[5];
  *((_OWORD *)v4 + 4) = v9;
  v11 = v93[6];
  *((_OWORD *)v4 + 5) = v10;
  *((_OWORD *)v4 + 6) = v11;
  v12 = GetFromPointerType(a2);
  v89 = v12;
  if ( v12 )
  {
    v13 = 1;
    Object = 0LL;
    if ( (int)CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object) < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v13 = 0;
      }
      v73 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v75) = v73;
        LOBYTE(v76) = v13;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v76,
          v75,
          *(_QWORD *)(UserSessionState + 69400),
          2,
          2,
          36,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
          (char)a1);
      }
      goto LABEL_112;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v14 = 0;
    }
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v15,
        *(_QWORD *)(v16 + 69400),
        4u,
        2u,
        0x19u,
        (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids);
    }
    memset(v93, 0, sizeof(v93));
    v17 = 0;
    v95 = 0LL;
    v98 = 0LL;
    v96 = 0LL;
    v91 = 0LL;
    v97 = 0LL;
    CompositionInputObject::QueryInputQueueForInputType(Object, v89, (__int64)&v95);
    if ( (_DWORD)v95 == 2 )
    {
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0 )
      {
        v17 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v33) = v31;
        LOBYTE(v34) = v17;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v34,
          v33,
          *(_QWORD *)(v32 + 69400),
          4,
          2,
          27,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids);
      }
      if ( (int)CompositionInputObject::GetWindowForInputType(Object, v89, &v91) < 0 )
        goto LABEL_18;
      v22 = LODWORD(v93[0]) | 4;
    }
    else
    {
      if ( (_DWORD)v95 != 3 )
      {
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0 )
        {
          v17 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        }
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v20) = v18;
          LOBYTE(v21) = v17;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v20,
            *(_QWORD *)(v19 + 69400),
            4,
            2,
            28,
            (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
            v95);
        }
LABEL_18:
        v22 = v93[0];
        goto LABEL_19;
      }
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0 )
      {
        v17 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      }
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v29) = v27;
        LOBYTE(v30) = v17;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v29,
          *(_QWORD *)(v28 + 69400),
          4,
          2,
          26,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids);
      }
      if ( (int)CompositionInputObject::GetWindowForInputType(Object, v89, &v91) < 0 )
        goto LABEL_18;
      *(_OWORD *)((char *)&v93[2] + 8) = v96;
      v22 = LODWORD(v93[0]) | 6;
      *((_QWORD *)&v93[1] + 1) = *((_QWORD *)&v95 + 1);
      *((_QWORD *)&v93[4] + 1) = v98;
      *(_OWORD *)((char *)&v93[3] + 8) = v97;
    }
    LODWORD(v93[0]) = v22;
LABEL_19:
    if ( !v22 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v13 = 0;
      }
      v69 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v70 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v71) = v69;
        LOBYTE(v72) = v13;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v72,
          v71,
          *(_QWORD *)(v70 + 69400),
          4,
          2,
          35,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids);
      }
      if ( *(_DWORD *)v4 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 511LL);
      goto LABEL_104;
    }
    v23 = (int *)HMValidateHandleNoSecure(v91, 255);
    v24 = v23;
    if ( !v23 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v48 = 0;
      }
      v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v50 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v51) = v49;
        LOBYTE(v52) = v48;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v52,
          v51,
          *(_QWORD *)(v50 + 69400),
          2,
          2,
          32,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
          (char)Object);
      }
      goto LABEL_72;
    }
    v25 = HMPheFromObject(v23);
    if ( *(_BYTE *)(v25 + 24) == 1 )
    {
      HIDWORD(v93[5]) = 2;
      v40 = v24;
      *(_QWORD *)&v93[5] = v24;
      v46 = WPP_GLOBAL_Control;
      v47 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v85 = v47;
      v87 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v83 = (char)v24;
        LOBYTE(v46) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v45 = *(_QWORD *)(W32GetUserSessionState(v46) + 69400);
        v81 = 29;
        goto LABEL_64;
      }
    }
    else
    {
      if ( *(_BYTE *)(v25 + 24) != 23 )
      {
        v26 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
        v84 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v35 = *(_BYTE *)(HMPheFromObject(v24) + 24);
          v37 = W32GetUserSessionState(v36);
          LOBYTE(v38) = v26;
          LOBYTE(v39) = v84;
          WPP_RECORDER_AND_TRACE_SF_dq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v38,
            v39,
            *(_QWORD *)(v37 + 69400),
            v78,
            v79,
            v80,
            v82,
            v35,
            (char)Object);
        }
LABEL_72:
        v40 = *(int **)&v93[5];
        goto LABEL_73;
      }
      HIDWORD(v93[5]) = 1;
      v40 = v24;
      *(_QWORD *)&v93[5] = v24;
      v41 = WPP_GLOBAL_Control;
      v42 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v85 = v42;
      v87 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v83 = (char)v24;
        LOBYTE(v41) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v45 = *(_QWORD *)(W32GetUserSessionState(v41) + 69400);
        v81 = 30;
LABEL_64:
        LOBYTE(v44) = v87;
        LOBYTE(v43) = v85;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v43,
          v44,
          v45,
          4,
          2,
          v81,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
          v83);
      }
    }
LABEL_73:
    if ( v40 )
    {
      v53 = Object;
      v54 = *((_QWORD *)Object + 2);
      if ( v54 )
      {
        v55 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v56 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v56 = 0;
        }
        v86 = v56;
        v88 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v56 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v55) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          v57 = W32GetUserSessionState(v55);
          LOBYTE(v58) = v88;
          LOBYTE(v59) = v86;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v59,
            v58,
            *(_QWORD *)(v57 + 69400),
            4,
            2,
            33,
            (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids);
          v53 = Object;
        }
        *((_QWORD *)&v93[0] + 1) = v54;
        LODWORD(v93[0]) = v22 | 1;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v40 + 2) + 464LL) + 816LL) & 0x800000) != 0 )
        v60 = v93[1] & 0xFFFFFFFE;
      else
        v60 = v93[1] & 0xFFFFFFFE | v53[46] & 1;
      *(_QWORD *)&v93[6] = (unsigned int)v53[44];
      LODWORD(v93[1]) = v60;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v13 = 0;
      }
      v61 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v62 = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_qqd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v61,
          *(_QWORD *)(v62 + 69400),
          4u,
          2u,
          0x22u,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
          v40,
          *(_QWORD *)&v93[6],
          -(v60 & 1));
      }
      v4 = v92;
      v63 = v93[1];
      *(_OWORD *)v92 = v93[0];
      v64 = v93[2];
      *((_OWORD *)v4 + 1) = v63;
      v65 = v93[3];
      *((_OWORD *)v4 + 2) = v64;
      v66 = v93[4];
      *((_OWORD *)v4 + 3) = v65;
      v67 = v93[5];
      *((_OWORD *)v4 + 4) = v66;
      v68 = v93[6];
      *((_OWORD *)v4 + 5) = v67;
      *((_OWORD *)v4 + 6) = v68;
    }
    else
    {
      v4 = v92;
    }
LABEL_104:
    ObfDereferenceObject(Object);
LABEL_112:
    LOBYTE(v12) = *(_DWORD *)v4 != 0;
  }
  return v12;
}
