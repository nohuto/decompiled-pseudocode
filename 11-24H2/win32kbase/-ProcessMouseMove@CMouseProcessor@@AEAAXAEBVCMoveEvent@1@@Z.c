/*
 * XREFs of ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14005E1E8
 * Callers:
 *     ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x14005E0F0 (-ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x140043FE0 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     PhysicalToLogicalDPIPoint @ 0x140044560 (PhysicalToLogicalDPIPoint.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ProcessMove@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@PEAUHWND__@@@Z @ 0x14005ED38 (-ProcessMove@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@PEAUHWND__@@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x14005EDC8 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x14005F130 (HMAssignmentUnlock.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14005F298 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x14005F804 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x14005FD7C (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x14005FEB4 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1400D77DC (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1400E39B0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ApiSetEditionPostRawMouseInputMessage @ 0x1400EC370 (ApiSetEditionPostRawMouseInputMessage.c)
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1400F3C20 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 *     ?SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z @ 0x1400F3C74 (-SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x14021ED84 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CMouseProcessor::ProcessMouseMove(CMouseProcessor *this, const struct CMouseProcessor::CMoveEvent *a2)
{
  char v4; // di
  char v5; // bl
  bool v6; // r15
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rbx
  bool v11; // r13
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r15d
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rax
  struct tagPOINT *v20; // rcx
  int v21; // r12d
  HWND v22; // r8
  int v23; // r15d
  struct tagPOINT v24; // rax
  LONG x; // r13d
  LONG y; // r12d
  __int64 v27; // rcx
  __int64 v28; // rcx
  bool v29; // zf
  char v30; // bl
  bool v31; // r15
  __int64 PtiFromInputDest; // rax
  __int64 v33; // rcx
  signed int v34; // ebx
  __int64 v35; // rax
  int v36; // ecx
  bool v37; // bl
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  unsigned int v41; // r8d
  bool v42; // bl
  bool v43; // r15
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  __int64 v47; // rbx
  int v48; // ecx
  bool v49; // bl
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  char v53; // bl
  bool v54; // r15
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  struct CMouseProcessor::CMouseEvent *v61; // rdx
  int v62; // eax
  bool v63; // bl
  __int64 v64; // rax
  int v65; // edx
  int v66; // r8d
  __int64 v67; // rax
  __int64 v68; // xmm0_8
  bool v69; // bl
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  __int16 v73; // [rsp+30h] [rbp-D0h]
  struct tagPOINT v74; // [rsp+40h] [rbp-C0h] BYREF
  int v75; // [rsp+48h] [rbp-B8h]
  CMouseProcessor *v76; // [rsp+50h] [rbp-B0h] BYREF
  struct CMouseProcessor::CMouseEvent *v77; // [rsp+58h] [rbp-A8h]
  char v78; // [rsp+60h] [rbp-A0h]
  int v79; // [rsp+64h] [rbp-9Ch]
  __int64 v80; // [rsp+68h] [rbp-98h] BYREF
  __int64 v81; // [rsp+70h] [rbp-90h] BYREF
  struct tagPOINT v82; // [rsp+78h] [rbp-88h] BYREF
  LONG v83; // [rsp+80h] [rbp-80h]
  LONG v84; // [rsp+84h] [rbp-7Ch]
  int v85; // [rsp+88h] [rbp-78h]
  int v86; // [rsp+8Ch] [rbp-74h]
  __int64 v87; // [rsp+90h] [rbp-70h] BYREF
  __int64 v88; // [rsp+A0h] [rbp-60h] BYREF
  int v89; // [rsp+A8h] [rbp-58h]
  __int64 v90; // [rsp+B0h] [rbp-50h] BYREF
  int v91; // [rsp+B8h] [rbp-48h]
  _QWORD v92[16]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      6,
      49,
      (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
  }
  v10 = *((_QWORD *)a2 + 1);
  v11 = 0;
  v76 = this;
  v12 = 2LL;
  v77 = a2;
  v78 = 0;
  v13 = *(_DWORD *)(v10 + 120);
  v79 = 0;
  if ( (v13 & 0x800) != 0 )
  {
LABEL_46:
    *((_QWORD *)this + 461) = 0LL;
    goto LABEL_22;
  }
  if ( (v13 & 0x1000) != 0 )
  {
    v14 = 2;
LABEL_14:
    v15 = *(_QWORD *)(v10 + 52);
    v16 = *(_QWORD *)(W32GetUserSessionState(v12) + 19928);
    *(_QWORD *)(v16 + 4960) = v15;
    v17 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 60LL);
    *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16) + 19928) + 4952LL) = v17;
    goto LABEL_15;
  }
  v14 = 0;
  if ( *((_DWORD *)this + 917) == *(_DWORD *)(v10 + 52) && *((_DWORD *)this + 918) == *(_DWORD *)(v10 + 56) )
  {
    if ( *((_DWORD *)this + 919) != *(_DWORD *)(v10 + 60) || *((_DWORD *)this + 920) != *(_DWORD *)(v10 + 64) )
      v14 = 1;
  }
  else
  {
    v14 = 2;
  }
  v12 = (unsigned int)(v14 - 1);
  if ( v14 == 1 )
  {
    v47 = *(_QWORD *)(v10 + 60);
    *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12) + 19928) + 4952LL) = v47;
    v11 = (*(_BYTE *)(*((_QWORD *)a2 + 1) + 122LL) & 1) == 0;
    goto LABEL_15;
  }
  if ( v14 == 2 )
    goto LABEL_14;
LABEL_15:
  if ( !*((_BYTE *)this + 3765) && !*((_BYTE *)this + 3764) )
    *((_BYTE *)this + 3764) = (unsigned int)ApiSetEditionPostRawMouseInputMessage(
                                              0,
                                              *((_QWORD *)this + 466),
                                              *((_DWORD *)this + 930),
                                              (int)this + 3736,
                                              (__int64)this + 3696) != 0;
  v18 = *((_QWORD *)a2 + 1);
  if ( (*(_DWORD *)(v18 + 120) & 0x4000) != 0 )
    CMouseProcessor::InformUMObservers(
      this,
      a2,
      (const struct tagPOINT *)(v18 + 52),
      (const struct tagPOINT *)(v18 + 68));
  v19 = *((_QWORD *)a2 + 1);
  if ( !v14 )
  {
    v48 = *(_DWORD *)(v19 + 120);
    if ( (v48 & 0x10000) == 0 )
    {
      if ( (v48 & 0x2000) == 0 )
        InputTraceLogging::Mouse::DropMove(*(_QWORD *)(v19 + 96), 11LL);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v4 = 0;
      }
      v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v50 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v51) = v49;
        LOBYTE(v52) = v4;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v52,
          v51,
          *(_QWORD *)(v50 + 69400),
          4,
          6,
          51,
          (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
      }
      goto LABEL_86;
    }
    v12 = (__int64)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v30 = 0;
    }
    v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v58 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v59) = v31;
      LOBYTE(v60) = v30;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v60,
        v59,
        *(_QWORD *)(v58 + 69400),
        4,
        6,
        50,
        (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
    }
    goto LABEL_46;
  }
  *((_QWORD *)this + 461) = *(unsigned int *)(v19 + 40);
  v12 = *((_QWORD *)a2 + 1);
  *(_QWORD *)((char *)this + 3668) = *(_QWORD *)(v12 + 52);
  *(_QWORD *)((char *)this + 3676) = *(_QWORD *)(v12 + 60);
LABEL_22:
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x800) == 0
    && (unsigned __int8)anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1LL) )
  {
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL);
    if ( PtiFromInputDest )
    {
      v34 = *(_DWORD *)(PtiFromInputDest + 400);
      v80 = 0LL;
      if ( v34 < 0 )
        v34 = *(_DWORD *)(*(_QWORD *)(PtiFromInputDest + 464) + 268LL);
      v35 = W32GetUserSessionState(v33);
      PhysicalToLogicalDPIPoint((__int64)&v80, (__int64 *)(*(_QWORD *)(v35 + 19928) + 4960LL), v34, 0LL);
      v36 = HIDWORD(v80);
      *((_DWORD *)this + 11) = v80;
      *((_DWORD *)this + 12) = v36;
      *((_DWORD *)this + 13) = v34;
    }
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x10000) == 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v4 = 0;
      }
      v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v38 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v39) = v37;
        LOBYTE(v40) = v4;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v40,
          v39,
          *(_QWORD *)(v38 + 69400),
          3,
          6,
          53,
          (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
      }
      InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 12LL);
LABEL_86:
      CMouseProcessor::EndStreamToken::~EndStreamToken((CMouseProcessor::EndStreamToken *)&v76);
      return;
    }
    v12 = (__int64)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || (v53 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v53 = 0;
    }
    v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v55 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v56) = v54;
      LOBYTE(v57) = v53;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v57,
        v56,
        *(_QWORD *)(v55 + 69400),
        4,
        6,
        52,
        (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
    }
  }
  v20 = *(struct tagPOINT **)(W32GetUserSessionState(v12) + 19928);
  v74 = v20[620];
  v87 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v20) + 19928) + 4952LL);
  CMouseProcessor::MouseHitTest(
    this,
    v92,
    &v74,
    &v87,
    a2,
    _InterlockedCompareExchange((volatile signed __int32 *)this + 976, 1, 1) != 0,
    0LL);
  v21 = HIDWORD(v92[0]);
  v22 = 0LL;
  v78 = 1;
  v75 = HIDWORD(v92[0]);
  v79 = HIDWORD(v92[0]);
  if ( (v92[0] & 4) != 0 )
  {
    if ( HIDWORD(v92[11]) == 1 || HIDWORD(v92[11]) == 2 )
    {
      v22 = (HWND)v92[10];
      if ( v92[10] )
        v22 = *(HWND *)v92[10];
    }
  }
  else if ( (v92[0] & 2) != 0 )
  {
    v22 = (HWND)v92[3];
  }
  InputTraceLogging::Mouse::ProcessMove(
    *(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL),
    (const struct tagPOINT *)(*((_QWORD *)a2 + 1) + 52LL),
    v22);
  if ( !LODWORD(v92[0]) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v4 = 0;
    }
    v69 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v70 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v71) = v69;
      LOBYTE(v72) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v72,
        v71,
        *(_QWORD *)(v70 + 69400),
        4,
        6,
        54,
        (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
    }
    InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 13LL);
    CInputDest::~CInputDest((CInputDest *)v92);
    goto LABEL_86;
  }
  v23 = 18;
  if ( !v11 )
  {
    v24 = v74;
    goto LABEL_29;
  }
  v41 = 18;
  if ( HIDWORD(v92[11]) == 2 )
    v41 = *(_DWORD *)(*(_QWORD *)(v92[10] + 40LL) + 288LL);
  CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(this, (__int64)&v81, v41);
  v24 = v74;
  if ( v81 != v74 )
  {
LABEL_29:
    x = v24.x;
    y = v74.y;
    if ( HIDWORD(v92[11]) == 2 )
      v23 = *(_DWORD *)(*(_QWORD *)(v92[10] + 40LL) + 288LL);
    *((_DWORD *)this + 11) = v24.x;
    *((_DWORD *)this + 12) = y;
    *((_DWORD *)this + 13) = v23;
    if ( *((_QWORD *)a2 + 1) != -112LL && ((*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) - 4) & 0xFFFFFFFB) == 0 )
    {
      v67 = *((_QWORD *)PtiCurrent() + 58);
      v68 = *(_QWORD *)(v67 + 872);
      LODWORD(v67) = *(_DWORD *)(v67 + 880);
      v88 = v68;
      v89 = v67;
      if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)&v88) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v4 = 0;
        }
        v63 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_127;
        v64 = W32GetUserSessionState(WPP_GLOBAL_Control);
        v73 = 56;
        goto LABEL_126;
      }
      v24 = v74;
    }
    v27 = *((_QWORD *)a2 + 1);
    if ( *(_DWORD *)(v27 + 156) || !*(_BYTE *)(v27 + 160) )
      goto LABEL_35;
    v62 = *(_DWORD *)(v27 + 152);
    v90 = *(_QWORD *)(v27 + 144);
    v91 = v62;
    if ( (unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)&v90) )
    {
      v24 = v74;
LABEL_35:
      v86 = 0;
      v82 = v24;
      v83 = x;
      v84 = y;
      v85 = v23;
      if ( (unsigned int)CMouseProcessor::ForwardInputToISM(this, v92, a2, &v82, &v74, 0, 512, 0LL) == 1 )
        CMouseProcessor::DeliverMouseMoveToInputDest(this, a2, (const struct CInputDest *)v92, &v82, 0LL);
      if ( HIDWORD(v92[11]) )
      {
        v28 = v92[10];
        v92[10] = 0LL;
        if ( v28 )
          HMUnlockObject();
      }
      memset(v92, 0, 0x78uLL);
      v29 = (v75 & 0xFFFFFFFB) == 0;
      goto LABEL_41;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v4 = 0;
    }
    v63 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_127:
      InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 10LL);
      if ( HIDWORD(v92[11]) )
        HMAssignmentUnlock(&v92[10]);
      memset(v92, 0, 0x78uLL);
      goto LABEL_86;
    }
    v64 = W32GetUserSessionState(WPP_GLOBAL_Control);
    v73 = 57;
LABEL_126:
    LOBYTE(v66) = v63;
    LOBYTE(v65) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v65,
      v66,
      *(_QWORD *)(v64 + 69400),
      3,
      6,
      v73,
      (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
    goto LABEL_127;
  }
  v42 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v44 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v45) = v43;
    LOBYTE(v46) = v42;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v46,
      v45,
      *(_QWORD *)(v44 + 69400),
      4,
      6,
      55,
      (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
  }
  InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL), 11LL);
  if ( HIDWORD(v92[11]) )
    HMAssignmentUnlock(&v92[10]);
  memset(v92, 0, 0x78uLL);
  v29 = (v21 & 0xFFFFFFFB) == 0;
LABEL_41:
  if ( v29 )
    return;
  v61 = v77;
  if ( *((_DWORD *)v77 + 4) == 3 )
  {
LABEL_109:
    CMouseProcessor::SendInputStreamEndedMessage(v76, v61);
    return;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 976, 1, 1) )
  {
    v61 = v77;
    goto LABEL_109;
  }
}
