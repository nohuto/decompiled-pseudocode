/*
 * XREFs of ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400DEA90
 * Callers:
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400DE6A8 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140185B9C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x140204464 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14005F94C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400610DC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400DA038 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1400DEA6C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdqd @ 0x14013A6E0 (WPP_RECORDER_AND_TRACE_SF_qdqd.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14018536C (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F33F8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1401FBDB8 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall CTouchProcessor::ProcessEnterLeave(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  unsigned int v3; // edi
  struct CPointerInfoNode *v7; // r14
  int v8; // edx
  int v9; // r8d
  char v10; // si
  __int64 v11; // rcx
  int v12; // edx
  int v13; // r8d
  char v14; // bl
  bool v15; // r14
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  CTouchProcessor *v19; // rcx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  char v21; // r14
  bool v22; // r12
  __int16 v23; // bx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  int v27; // eax
  __m128i *v28; // rax
  __m128i *v29; // rax
  char v30; // bl
  bool v31; // r14
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  CTouchProcessor **v35; // r8
  char v36; // bl
  _UNKNOWN **v37; // rdx
  bool v38; // r12
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  int v42; // eax
  char v43; // r13
  int v44; // r12d
  int v45; // ebx
  __int64 v46; // rax
  int v47; // edx
  int v48; // r8d
  int v49; // r12d
  int v50; // ebx
  int v52; // [rsp+20h] [rbp-E0h]
  int v53; // [rsp+28h] [rbp-D8h]
  __int16 v54; // [rsp+30h] [rbp-D0h]
  __int16 v55; // [rsp+30h] [rbp-D0h]
  int v56; // [rsp+38h] [rbp-C8h]
  char v57; // [rsp+40h] [rbp-C0h]
  char v58; // [rsp+48h] [rbp-B8h]
  char v59; // [rsp+50h] [rbp-B0h]
  char v60; // [rsp+58h] [rbp-A8h]
  bool v61; // [rsp+64h] [rbp-9Ch]
  int v63[28]; // [rsp+70h] [rbp-90h] BYREF
  char v64; // [rsp+E0h] [rbp-20h]
  _QWORD v65[14]; // [rsp+F0h] [rbp-10h] BYREF
  char v66; // [rsp+160h] [rbp+60h]
  __m128i v67[8]; // [rsp+170h] [rbp+70h] BYREF

  v3 = 0;
  v7 = 0LL;
  memset(v65, 0, sizeof(v65));
  v66 = 0;
  memset(v63, 0, sizeof(v63));
  v64 = 0;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v8) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v9) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)v8 || (_BYTE)v9 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v9,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      170,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6560LL);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6561LL);
  if ( (*(_DWORD *)a3 & 0x400) == 0 && (*(_DWORD *)a3 & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6562LL);
  if ( (*(_DWORD *)a3 & 0x400) == 0 && !*((_DWORD *)a3 + 6) && *((_DWORD *)a3 + 88) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6563LL);
  if ( !a2 )
  {
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6570LL);
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v14 = 0;
      }
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v18,
          v17,
          *(_QWORD *)(UserSessionState + 69400),
          4,
          4,
          171,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      }
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v12) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v10 = 0;
      if ( (_BYTE)v12 || v10 )
      {
        v54 = 172;
LABEL_91:
        LOBYTE(v13) = v10;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)v19 + 3),
          v12,
          v13,
          *((_QWORD *)v19 + 8),
          5,
          4,
          v54,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
        goto LABEL_143;
      }
      goto LABEL_143;
    }
LABEL_70:
    if ( (*(_DWORD *)a3 & 0x400) != 0 )
    {
      v29 = CInputDest::CInputDest(v67, *((_QWORD *)a3 + 24), *((_DWORD *)a3 + 111), 1);
      CInputDest::operator=(v65, v29);
      CInputDest::~CInputDest((CInputDest *)v67);
    }
    else
    {
      CInputDest::operator=(v65, (char *)a3 + 24);
    }
    if ( CInputDest::operator==(v63, (__int64)v65) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v30 = 0;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v33) = v31;
        LOBYTE(v34) = v30;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v34,
          v33,
          *(_QWORD *)(v32 + 69400),
          4,
          4,
          175,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      }
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v12) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v10 = 0;
      if ( (_BYTE)v12 || v10 )
      {
        v54 = 176;
        goto LABEL_91;
      }
      goto LABEL_143;
    }
    v35 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v36 = 0;
    }
    v37 = &WPP_RECORDER_INITIALIZED;
    v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v39 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v40) = v38;
      LOBYTE(v41) = v36;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v41,
        v40,
        *(_QWORD *)(v39 + 69400),
        4,
        4,
        177,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      v37 = &WPP_RECORDER_INITIALIZED;
      v35 = &WPP_GLOBAL_Control;
    }
    if ( (*((_DWORD *)a3 + 1) & 0x200) != 0
      && ((v42 = *((_DWORD *)a3 + 45), (v42 & 4) != 0) || (v42 & 0x40000) != 0)
      && (v42 & 0x10000) == 0 )
    {
      *(_DWORD *)a3 |= 0x40u;
      if ( v7 )
        *(_DWORD *)v7 |= 0x20u;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v43 = 0;
      }
      v61 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v43 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_128;
      if ( v7 )
        v44 = -__CFSHR__(*(_DWORD *)v7, 6);
      else
        LOBYTE(v44) = 0;
      v45 = -__CFSHR__(*(_DWORD *)a3, 7);
      v46 = W32GetUserSessionState(WPP_GLOBAL_Control);
      v60 = v44;
      v59 = (char)v7;
      v58 = v45;
      v57 = (char)a3;
      v55 = 179;
    }
    else
    {
      *(_DWORD *)a3 |= 8u;
      if ( v7 )
        *(_DWORD *)v7 |= 0x10u;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v43 = 0;
      }
      v61 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v43 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_128;
      if ( v7 )
        v49 = -__CFSHR__(*(_DWORD *)v7, 5);
      else
        LOBYTE(v49) = 0;
      v50 = -__CFSHR__(*(_DWORD *)a3, 4);
      v46 = W32GetUserSessionState(WPP_GLOBAL_Control);
      v60 = v49;
      v59 = (char)v7;
      v58 = v50;
      v57 = (char)a3;
      v55 = 178;
    }
    LOBYTE(v47) = v43;
    LOBYTE(v48) = v61;
    WPP_RECORDER_AND_TRACE_SF_qdqd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v47,
      v48,
      *(_QWORD *)(v46 + 69400),
      v52,
      v53,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
LABEL_128:
    if ( v7 )
    {
      if ( *((_DWORD *)v7 + 2) >= *((_DWORD *)a2 + 12) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6710LL);
      *(_DWORD *)(160LL * *((unsigned int *)v7 + 2) + *((_QWORD *)a2 + 31) + 140) &= ~1u;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v37) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v37) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v35) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      LOBYTE(v35) = 0;
    }
    if ( (_BYTE)v37 || (_BYTE)v35 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        (_DWORD)v37,
        (_DWORD)v35,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        180,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    v3 = 1;
    goto LABEL_143;
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v11, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6580LL);
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)this, a2, *((_WORD *)a3 + 86), 0LL);
  v7 = ValidNodeInFrame;
  if ( ValidNodeInFrame )
  {
    v27 = *(_DWORD *)ValidNodeInFrame;
    if ( (v27 & 0x80u) == 0 )
    {
      if ( (v27 & 4) != 0 || (v27 & 0x400) != 0 )
      {
        v28 = CInputDest::CInputDest(v67, *((_QWORD *)v7 + 24), *((_DWORD *)v7 + 111), 1);
        CInputDest::operator=(v63, v28);
        CInputDest::~CInputDest((CInputDest *)v67);
      }
      else
      {
        CInputDest::operator=(v63, (char *)v7 + 24);
      }
    }
    else
    {
      v7 = 0LL;
    }
    goto LABEL_70;
  }
  if ( CPointerInfoNode::IsForManipulationThread(a3) )
    goto LABEL_70;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v21 = 0;
  }
  v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = *((_WORD *)a3 + 86);
    v24 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v25) = v22;
    LOBYTE(v26) = v21;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v25,
      *(_QWORD *)(v24 + 69400),
      4,
      4,
      173,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids,
      v23);
  }
  v19 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v12) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v10 = 0;
  if ( (_BYTE)v12 || v10 )
  {
    v54 = 174;
    goto LABEL_91;
  }
LABEL_143:
  CInputDest::~CInputDest((CInputDest *)v63);
  CInputDest::~CInputDest((CInputDest *)v65);
  return v3;
}
