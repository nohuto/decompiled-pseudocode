/*
 * XREFs of ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14018A840
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x14005FAA0 (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14002588C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsMessageOnlyWindow @ 0x140094A24 (IsMessageOnlyWindow.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C4820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1400D60E0 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018AF58 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ApiSetEditionUpdateInputTransformFromHitTest @ 0x1401936A0 (ApiSetEditionUpdateInputTransformFromHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

CInputDest *__fastcall CSpatialProcessor::ResolveDcompHitTestResultToInputDest(
        CInputDest *a1,
        __int64 *a2,
        unsigned int a3,
        __int64 a4)
{
  void *v4; // rdi
  __int64 *v6; // r12
  CInputDest *v7; // r13
  char v8; // di
  __int64 v9; // rax
  char v10; // r14
  bool v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  char v16; // r14
  bool v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  char v22; // bl
  bool v23; // r14
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  bool v27; // al
  int v28; // r13d
  __int64 v29; // rax
  bool v30; // bl
  bool v31; // r14
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  char v35; // bl
  char v36; // r14
  __int64 v37; // rax
  char v38; // bl
  bool v39; // r14
  __int64 UserSessionState; // rax
  int v41; // r8d
  int v42; // edx
  char v43; // bl
  __int64 v44; // rax
  char v46; // [rsp+20h] [rbp-E0h]
  __int16 v47; // [rsp+30h] [rbp-D0h]
  char v48; // [rsp+40h] [rbp-C0h]
  __int64 v49; // [rsp+48h] [rbp-B8h]
  void *v51; // [rsp+70h] [rbp-90h]
  _OWORD v53[8]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v54[7]; // [rsp+100h] [rbp+0h] BYREF

  v4 = (void *)a2[1];
  v51 = v4;
  v6 = a2;
  v7 = a1;
  *(_QWORD *)&v53[0] = a4;
  if ( a3 == 6 || !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 133LL);
  memset(v54, 0, sizeof(v54));
  if ( v4 )
  {
    v27 = CSpatialProcessor::ResolveInputSinkToINPUTDEST(v4, a3, (struct tagINPUTDEST *)v54);
    v8 = 1;
    if ( !v27 )
      goto LABEL_65;
    if ( (v54[0] & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 177LL);
    v28 = 0;
    if ( (unsigned int)IsMessageOnlyWindow(*(__int64 *)&v54[5], 0LL) )
    {
      if ( HIDWORD(v54[5]) != 2 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 188LL);
      v29 = HMValidateHandleNoSecure(*v6, 1);
      v28 = v29;
      if ( v29 && *(char *)(*(_QWORD *)(v29 + 40) + 19LL) >= 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v30 = 0;
        }
        v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_54;
        v34 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
        v48 = v54[5];
        v47 = 16;
        v46 = 4;
      }
      else
      {
        memset(&v53[1], 0, 0x70uLL);
        v54[0] = v53[1];
        v54[2] = v53[3];
        v54[1] = v53[2];
        v54[4] = v53[5];
        v54[3] = v53[4];
        v54[6] = v53[7];
        v54[5] = v53[6];
        v30 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_54;
        v48 = v28;
        v47 = 15;
        v34 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
        v46 = 3;
      }
      LOBYTE(v33) = v31;
      LOBYTE(v32) = v30;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v33,
        v34,
        v46,
        2,
        v47,
        (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
        v48);
    }
LABEL_54:
    if ( !LODWORD(v54[0]) )
    {
LABEL_66:
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v38 = 0;
      }
      v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v41) = v39;
        LOBYTE(v42) = v38;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v42,
          v41,
          *(_QWORD *)(UserSessionState + 69400),
          2,
          2,
          18,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
          (char)v51);
      }
      v7 = a1;
LABEL_74:
      if ( !LODWORD(v54[0]) )
        goto LABEL_82;
      goto LABEL_75;
    }
    if ( (v54[0] & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 211LL);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v35 = 0;
    }
    v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v37 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v35,
        v36,
        *(_QWORD *)(v37 + 69400),
        4u,
        2u,
        0x11u,
        (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
        v51,
        *(_QWORD *)&v54[5]);
    }
    ApiSetEditionUpdateInputTransformFromHitTest(
      (unsigned int)v54,
      v28,
      (_DWORD)v51,
      -(v54[1] & 1),
      (__int64)(v6 + 2),
      (__int64)v53);
    v7 = a1;
LABEL_65:
    if ( LODWORD(v54[0]) )
    {
LABEL_75:
      *(_QWORD *)&v54[6] = v6[11];
      DWORD2(v54[6]) = *((_DWORD *)v6 + 24);
      DWORD1(v54[0]) = *((_DWORD *)v6 + 25);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v8 = 0;
      }
      v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v44 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LODWORD(v49) = DWORD2(v54[6]);
        WPP_RECORDER_AND_TRACE_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v8,
          v43,
          *(_QWORD *)(v44 + 69400),
          4u,
          2u,
          0x13u,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
          *(_QWORD *)&v54[6],
          v49,
          DWORD1(v54[0]));
      }
      goto LABEL_82;
    }
    goto LABEL_66;
  }
  if ( !*v6 )
  {
    v8 = 1;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v22 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(v24 + 69400),
        2,
        2,
        14,
        (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids);
    }
    goto LABEL_74;
  }
  v8 = 1;
  v9 = HMValidateHandleNoSecure(*v6, 1);
  if ( v9 )
  {
    LODWORD(v54[0]) |= 4u;
    DWORD2(v54[5]) |= 1u;
    HIDWORD(v54[5]) = 2;
    *(_QWORD *)&v54[5] = v9;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v10 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *a2;
      v13 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v14) = v11;
      LOBYTE(v15) = v10;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(v13 + 69400),
        4,
        2,
        12,
        (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
        v12);
    }
    v6 = a2;
  }
  if ( LODWORD(v54[0]) )
    goto LABEL_75;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v16 = 0;
  }
  v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = *a2;
    v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v20) = v17;
    LOBYTE(v21) = v16;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v20,
      *(_QWORD *)(v19 + 69400),
      2,
      2,
      13,
      (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
      v18);
    v6 = a2;
    goto LABEL_74;
  }
LABEL_82:
  CInputDest::CInputDest(v7, (const struct tagINPUTDEST *)v54);
  return v7;
}
