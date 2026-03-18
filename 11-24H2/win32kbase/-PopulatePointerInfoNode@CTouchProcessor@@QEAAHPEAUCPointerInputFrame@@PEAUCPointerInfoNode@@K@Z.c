/*
 * XREFs of ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x140202400
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x140202D58 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14005F94C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400948FC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140094F38 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1400C3A98 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1400D900C (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1400DEA6C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1400F4710 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x14011347C (-AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@.c)
 *     ?GetButtonChange@CTouchProcessor@@AEAA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1401162B4 (-GetButtonChange@CTouchProcessor@@AEAA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_HL @ 0x14013E944 (WPP_RECORDER_AND_TRACE_SF_HL.c)
 *     ?NoTargetFound@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x14014C818 (-NoTargetFound@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x14014D734 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ApiSetEditionGetInputDelegate @ 0x140191B08 (ApiSetEditionGetInputDelegate.c)
 *     ApiSetInputTransformOnInput @ 0x140193BF0 (ApiSetInputTransformOnInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F33F8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x140208FBC (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall CTouchProcessor::PopulatePointerInfoNode(
        PERESOURCE *this,
        struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3,
        unsigned int a4)
{
  struct CPointerInputFrame *v5; // r12
  unsigned int v7; // edi
  int v9; // edx
  int v10; // r8d
  char v11; // r14
  char v12; // r15
  bool v13; // r12
  int v14; // ebx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  int v19; // edx
  int v20; // r8d
  char v21; // r15
  char v22; // r12
  __int64 UserSessionState; // rax
  CTouchProcessor *v24; // rcx
  char v25; // r15
  char v26; // r12
  __int64 v27; // rax
  unsigned int v28; // ecx
  CInputDest *v29; // rax
  int v30; // ebx
  int v31; // r15d
  __int64 v32; // rcx
  int v33; // r8d
  unsigned int v34; // eax
  int v35; // eax
  bool v36; // zf
  int ShouldForegroundActivate; // eax
  char v38; // r11
  int v39; // ebx
  int v40; // ecx
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v43; // r8d
  char v44; // r11
  int v45; // ecx
  unsigned int v46; // eax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  int v50; // edx
  int v51; // r8d
  int v52; // [rsp+28h] [rbp-D8h]
  __int16 v53; // [rsp+30h] [rbp-D0h]
  int v54; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v55[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v56; // [rsp+54h] [rbp-ACh]
  unsigned int v57; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v58; // [rsp+5Ch] [rbp-A4h] BYREF
  struct CPointerInputFrame *v59; // [rsp+60h] [rbp-A0h]
  _OWORD v60[7]; // [rsp+70h] [rbp-90h] BYREF
  char v61; // [rsp+E0h] [rbp-20h]
  _OWORD v62[7]; // [rsp+F0h] [rbp-10h] BYREF
  char v63; // [rsp+160h] [rbp+60h]
  int v64; // [rsp+161h] [rbp+61h]
  __int16 v65; // [rsp+165h] [rbp+65h]
  char v66; // [rsp+167h] [rbp+67h]
  _BYTE v67[128]; // [rsp+170h] [rbp+70h] BYREF

  v59 = a2;
  v5 = a2;
  v7 = 0;
  memset(v60, 0, sizeof(v60));
  v61 = 0;
  v55[0] = 0;
  v57 = 0;
  v58 = 0;
  if ( !tagDomLock::IsLockedShared(this + 4) )
  {
    v56 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1276);
  }
  if ( !v5 )
  {
    v56 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8039);
  }
  if ( *((_DWORD *)v5 + 56) != 2 )
  {
    v56 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1277);
  }
  v11 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v10) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)v9 || (_BYTE)v10 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v10,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      41,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  *((_DWORD *)a3 + 2) = -1;
  if ( *((_DWORD *)a3 + 45) )
  {
    if ( !CTouchProcessor::UpdateActivePointer(
            (CTouchProcessor *)this,
            v5,
            a3,
            (struct CInputDest *)v60,
            &v57,
            v55,
            &v58,
            a4,
            *((_WORD *)a3 + 86)) )
    {
      if ( (*((_DWORD *)a3 + 45) & 2) != 0 || (*((_DWORD *)a3 + 1) & 0x200) == 0 || *((_QWORD *)a3 + 24) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v21 = 0;
        }
        v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          WPP_RECORDER_AND_TRACE_SF_L(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v22,
            *(_QWORD *)(UserSessionState + 69400),
            2u,
            v52,
            0x2Cu,
            (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
        }
      }
      v24 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v19) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v19) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v11 = 0;
      if ( !(_BYTE)v19 && !v11 )
        goto LABEL_133;
      v53 = 45;
LABEL_68:
      LOBYTE(v20) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)v24 + 3),
        v19,
        v20,
        *((_QWORD *)v24 + 8),
        5,
        4,
        v53,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
LABEL_133:
      CInputDest::~CInputDest((CInputDest *)v60);
      return v7;
    }
    if ( *((_DWORD *)a3 + 119) )
    {
      InputTraceLogging::Pointer::DropInput();
      v24 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v19) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v19) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v11 = 0;
      if ( !(_BYTE)v19 && !v11 )
        goto LABEL_133;
      v53 = 46;
      goto LABEL_68;
    }
    if ( !LODWORD(v60[0]) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v25 = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_HL(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v26,
          *(_QWORD *)(v27 + 69400),
          4u,
          v52,
          0x2Fu,
          v54);
      }
      v5 = v59;
      InputTraceLogging::Pointer::NoTargetFound(v59, (struct CPointerInfoNode *)((char *)a3 + 160));
    }
    v28 = *(_DWORD *)a3 & 0xFFFFFFFB | (v55[0] >> 2) & 4;
    *(_DWORD *)a3 = v28;
    if ( (v28 & 4) != 0 )
    {
      v64 = 0;
      v65 = 0;
      v66 = 0;
      memset(v62, 0, sizeof(v62));
      v29 = (CInputDest *)v62;
      v63 = 0;
      v30 = 1;
      v31 = 0;
    }
    else
    {
      v29 = CInputDest::CInputDest((CInputDest *)v67, (const struct CInputDest *)v60);
      v30 = 0;
      v31 = 2;
    }
    CInputDest::operator=((_QWORD *)a3 + 3, v29);
    if ( v31 )
      CInputDest::~CInputDest((CInputDest *)v67);
    if ( v30 )
      CInputDest::~CInputDest((CInputDest *)v62);
    *((_DWORD *)a3 + 36) = 0;
    if ( (v55[0] & 0x100) == 0 )
    {
LABEL_96:
      if ( SLOBYTE(v55[0]) < 0 && *(_QWORD *)(W32GetUserSessionState(v32) + 18880) )
      {
        v34 = v58;
        *((_DWORD *)a3 + 1) |= 0x100u;
        *((_DWORD *)a3 + 87) = v34;
      }
      if ( (v55[0] & 0x20) != 0 )
      {
        v35 = *(_DWORD *)a3 | 0x500;
        *((_DWORD *)a3 + 36) = 1;
        v36 = (v55[0] & 0x40) == 0;
        *(_DWORD *)a3 = v35;
        if ( !v36 )
          *(_DWORD *)a3 = v35 | 0x800;
      }
      CInputDest::operator=((__int64)a3 + 352, (__int64)v60);
      *((_QWORD *)a3 + 24) = CInputDest::GetWindowHandle((CInputDest *)v60);
      *((_DWORD *)a3 + 44) = *((_DWORD *)v5 + 10);
      *((_DWORD *)a3 + 59) = 1;
      ShouldForegroundActivate = CPointerInfoNode::ShouldForegroundActivate(a3);
      v38 = v55[0];
      *((_DWORD *)a3 + 84) = ShouldForegroundActivate == 0;
      if ( (v38 & 1) != 0 )
        *((_DWORD *)a3 + 45) |= 1u;
      *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFE7FFF | ((v38 & 4) << 14) | ((v38 & 2) << 14);
      v39 = *((_DWORD *)a3 + 45);
      v40 = *((_DWORD *)a3 + 42);
      *((_DWORD *)a3 + 45) = v39 & 0x7FE1F7;
      v41 = (unsigned int)(v40 - 2);
      if ( (_DWORD)v41 )
      {
        v41 = (unsigned int)(v41 - 1);
        if ( !(_DWORD)v41 )
        {
          *((_DWORD *)a3 + 66) &= 7u;
          *((_DWORD *)a3 + 67) &= 0xFu;
LABEL_108:
          *((_DWORD *)a3 + 64) = CTouchProcessor::GetButtonChange(v41, v57, v39 & 0x1F0);
          if ( (v39 & 1) != 0 || (v39 & 0x20000) == 0 || (v45 = 1, (v39 & 2) == 0) )
            v45 = 0;
          v46 = v45 | *(_DWORD *)a3 & 0xFFFFFFFE;
          *(_DWORD *)a3 = v46;
          if ( v57 != v43 )
            *(_DWORD *)a3 = v46 & 0xFFFFFFFE;
          if ( HIDWORD(v60[5]) )
          {
            v62[0] = v60[0];
            v62[2] = v60[2];
            v62[1] = v60[1];
            v62[4] = v60[4];
            v62[3] = v60[3];
            v62[6] = v60[6];
            v62[5] = v60[5];
            if ( ApiSetEditionGetInputDelegate(v62, v42) && (*((_DWORD *)a3 + 1) & 0x100) == 0 )
              *(_DWORD *)a3 |= 0x100000u;
            v44 = v55[0];
          }
          *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFBFFF | ((v44 & 8) << 11);
          if ( !CPointerInfoNode::IsForManipulationThread(a3) )
          {
            v49 = *((_QWORD *)a3 + 31);
            v62[0] = v60[0];
            v62[2] = v60[2];
            v62[1] = v60[1];
            v62[4] = v60[4];
            v62[3] = v60[3];
            v62[6] = v60[6];
            v62[5] = v60[5];
            if ( (unsigned int)ApiSetInputTransformOnInput(v62, v49, (__int64)a3 + 160) )
              *((_DWORD *)a3 + 45) |= 0x400000u;
          }
          InputTraceLogging::Pointer::AssignPointerId(v5, (struct CPointerInfoNode *)((char *)a3 + 160), v47, v48);
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (LOBYTE(v50) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            LOBYTE(v50) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v51) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
          {
            LOBYTE(v51) = 0;
          }
          if ( (_BYTE)v50 || (_BYTE)v51 )
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v50,
              v51,
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5,
              4,
              48,
              (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
          v7 = 1;
          goto LABEL_133;
        }
        if ( (_DWORD)v41 != 2 )
          goto LABEL_108;
      }
      *((_DWORD *)a3 + 67) &= 7u;
      *((_DWORD *)a3 + 66) = 0;
      goto LABEL_108;
    }
    if ( !CInputDest::IsCompositionInput((CInputDest *)v60) )
    {
      v56 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1369);
    }
    if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (v55[0] & 0x20) != 0 || !*(_QWORD *)(W32GetUserSessionState(v32) + 18880) )
        goto LABEL_95;
      v33 = 1373;
    }
    else
    {
      if ( (v55[0] & 0x20) != 0 )
      {
LABEL_95:
        *((_DWORD *)a3 + 1) |= 0x80u;
        goto LABEL_96;
      }
      v33 = 1377;
    }
    v56 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v33);
    goto LABEL_95;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
  {
    v12 = 0;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = *((_DWORD *)a3 + 43);
    v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v16) = v13;
    LOBYTE(v17) = v12;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(v15 + 69400),
      3,
      4,
      42,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids,
      v14);
  }
  *((_DWORD *)a3 + 43) = 0;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v10) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)v9 || (_BYTE)v10 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v10,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      43,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  InputTraceLogging::Pointer::DropInput();
  CInputDest::~CInputDest((CInputDest *)v60);
  return 0LL;
}
