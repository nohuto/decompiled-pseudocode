/*
 * XREFs of tracePointerFlags @ 0x1400AA30C
 * Callers:
 *     tracePointerInfo @ 0x1400AA220 (tracePointerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1400AADA0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 */

void __fastcall tracePointerFlags(int a1)
{
  bool v2; // di
  bool v3; // si
  __int64 v4; // rax
  int v5; // r8d
  int v6; // edx
  bool v7; // di
  bool v8; // si
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  bool v12; // di
  bool v13; // si
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  bool v17; // di
  bool v18; // si
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  bool v22; // di
  bool v23; // si
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  bool v27; // di
  bool v28; // si
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  bool v32; // di
  bool v33; // si
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  bool v37; // di
  bool v38; // si
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  bool v42; // di
  bool v43; // si
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  bool v47; // di
  bool v48; // si
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  bool v52; // di
  bool v53; // si
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  bool v57; // di
  bool v58; // si
  __int64 UserSessionState; // rax
  int v60; // r8d
  int v61; // edx
  bool v62; // di
  bool v63; // si
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  bool v67; // di
  bool v68; // si
  __int64 v69; // rax
  int v70; // r8d
  int v71; // edx
  bool v72; // bl
  bool v73; // di
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx

  if ( (a1 & 1) != 0 )
  {
    v57 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v57 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v60) = v58;
      LOBYTE(v61) = v57;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v61,
        v60,
        *(_QWORD *)(UserSessionState + 19392),
        4,
        1,
        28,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"NEW");
    }
  }
  if ( (a1 & 2) != 0 )
  {
    v2 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v5) = v3;
      LOBYTE(v6) = v2;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v6,
        v5,
        *(_QWORD *)(v4 + 19392),
        4,
        1,
        29,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"INRANGE");
    }
  }
  if ( (a1 & 4) != 0 )
  {
    v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(v9 + 19392),
        4,
        1,
        30,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"INCONTACT");
    }
  }
  if ( (a1 & 0x10) != 0 )
  {
    v27 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v30,
        *(_QWORD *)(v29 + 19392),
        4,
        1,
        31,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"FIRSTBUTTON");
    }
  }
  if ( (a1 & 0x20) != 0 )
  {
    v42 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v44 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v45) = v43;
      LOBYTE(v46) = v42;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v46,
        v45,
        *(_QWORD *)(v44 + 19392),
        4,
        1,
        32,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"SECONDBUTTON");
    }
  }
  if ( (a1 & 0x40) != 0 )
  {
    v47 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v49 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v50) = v48;
      LOBYTE(v51) = v47;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v51,
        v50,
        *(_QWORD *)(v49 + 19392),
        4,
        1,
        33,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"THIRDBUTTON");
    }
  }
  if ( (a1 & 0x2000) != 0 )
  {
    v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(v14 + 19392),
        4,
        1,
        34,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"PRIMARY");
    }
  }
  if ( (a1 & 0x4000) != 0 )
  {
    v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v17;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(v19 + 19392),
        4,
        1,
        35,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"CONFIDENCE");
    }
  }
  if ( (a1 & 0x8000) != 0 )
  {
    v52 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v52 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v54 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v55) = v53;
      LOBYTE(v56) = v52;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v56,
        v55,
        *(_QWORD *)(v54 + 19392),
        4,
        1,
        36,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"CANCELED");
    }
  }
  if ( (a1 & 0x10000) != 0 )
  {
    v37 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v39 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v40) = v38;
      LOBYTE(v41) = v37;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v41,
        v40,
        *(_QWORD *)(v39 + 19392),
        4,
        1,
        37,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"DOWN");
    }
  }
  if ( (a1 & 0x20000) != 0 )
  {
    v22 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(v24 + 19392),
        4,
        1,
        38,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"UPDATE");
    }
  }
  if ( (a1 & 0x40000) != 0 )
  {
    v32 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = v32;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v35,
        *(_QWORD *)(v34 + 19392),
        4,
        1,
        39,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"UP");
    }
  }
  if ( (a1 & 0x80000) != 0 )
  {
    v62 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v63 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v62 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v64 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v65) = v63;
      LOBYTE(v66) = v62;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v66,
        v65,
        *(_QWORD *)(v64 + 19392),
        4,
        1,
        40,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"WHEEL");
    }
  }
  if ( (a1 & 0x100000) != 0 )
  {
    v67 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v68 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v67 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v69 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v70) = v68;
      LOBYTE(v71) = v67;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v71,
        v70,
        *(_QWORD *)(v69 + 19392),
        4,
        1,
        41,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"HWHEEL");
    }
  }
  if ( (a1 & 0x200000) != 0 )
  {
    v72 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v73 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v72 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v74 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v75) = v73;
      LOBYTE(v76) = v72;
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v76,
        v75,
        *(_QWORD *)(v74 + 19392),
        4,
        1,
        42,
        (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
        (__int64)"CAPTURECHANGED");
    }
  }
}
