/*
 * XREFs of ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140185B9C
 * Callers:
 *     NtUserSetManipulationInputTarget @ 0x140171460 (NtUserSetManipulationInputTarget.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1401F7FA0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14005F94C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAX_NPEAUCInputPointerNode@@AEBVCInputDest@@@Z @ 0x1400935F0 (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x14009483C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400948FC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140094F38 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1400C3B7C (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C47E4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C4820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400DE6A8 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1400DEA6C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400DEA90 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1400F4710 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z @ 0x14013A81C (-CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14018536C (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1401868B8 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018AF58 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x140191B08 (ApiSetEditionGetInputDelegate.c)
 *     ApiSetSetManipulationInputTargetTransform @ 0x140193EF4 (ApiSetSetManipulationInputTargetTransform.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F33F8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6318 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1401FB5D0 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePha.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FB714 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1401FBDB8 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1401FC6F8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1402037CC (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x140204E1C (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x140205680 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x140207BD4 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x140207DF8 (-SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KV.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x140208784 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208B58 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208EB4 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall CTouchProcessor::SetManipulationInputTarget(
        CTouchProcessor *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        void *a5,
        struct TELEMETRY_POINTER_FRAME_TIMES *a6,
        int a7)
{
  unsigned int v7; // ebx
  CTouchProcessor *v8; // r14
  unsigned int v9; // esi
  char v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r13
  char v13; // bl
  bool v14; // di
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // edx
  void *v19; // r8
  unsigned int v20; // ebx
  int v21; // edi
  CTouchProcessor *v22; // rcx
  struct CPointerQFrame *v23; // rax
  __int64 v24; // r8
  int v25; // ebx
  unsigned int v26; // ecx
  __int64 v27; // r14
  CPointerInfoNode *v28; // rcx
  int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // edi
  CPointerInfoNode *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rbx
  struct CInputPointerNode *NodeById; // rax
  struct CInputPointerNode *v36; // rbx
  int v37; // eax
  int v38; // ecx
  __int64 v39; // r8
  unsigned __int16 v40; // di
  unsigned __int64 v41; // rbx
  struct CPointerInfoNode *ValidNodeInFrame; // rdi
  bool v43; // zf
  unsigned int v44; // ebx
  __int64 Queue; // rdi
  CInputDest *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdi
  struct CPointerQFrame *v49; // rbx
  struct CPointerInfoNode *v50; // r9
  unsigned int MessagesCore; // edi
  unsigned int i; // ebx
  __int64 v53; // r8
  int v54; // eax
  __int64 v55; // rdx
  int v56; // eax
  int v57; // ecx
  int v58; // edx
  void *v59; // r8
  unsigned int v61; // [rsp+28h] [rbp-D8h]
  int v62; // [rsp+40h] [rbp-C0h]
  int v63; // [rsp+44h] [rbp-BCh]
  int v64; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v65; // [rsp+48h] [rbp-B8h]
  unsigned int v67; // [rsp+58h] [rbp-A8h]
  struct CPointerInputFrame *v68; // [rsp+60h] [rbp-A0h]
  int v69; // [rsp+9Ch] [rbp-64h]
  int v70; // [rsp+A0h] [rbp-60h]
  unsigned int v71; // [rsp+ACh] [rbp-54h]
  struct CPointerQFrame *v72; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v73; // [rsp+C8h] [rbp-38h]
  _OWORD v74[7]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v75[7]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v76[14]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v77; // [rsp+220h] [rbp+120h]
  PERESOURCE *v78[6]; // [rsp+230h] [rbp+130h] BYREF
  char v79[128]; // [rsp+260h] [rbp+160h] BYREF
  __int128 v80; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int128 v81; // [rsp+2F0h] [rbp+1F0h]
  __int128 v82; // [rsp+300h] [rbp+200h]
  __int128 v83; // [rsp+310h] [rbp+210h]
  __int128 v84; // [rsp+320h] [rbp+220h]
  __int128 v85; // [rsp+330h] [rbp+230h]
  __int128 v86; // [rsp+340h] [rbp+240h]
  _DWORD v87[28]; // [rsp+360h] [rbp+260h] BYREF
  _QWORD v88[16]; // [rsp+3D0h] [rbp+2D0h] BYREF

  v7 = a2;
  v8 = this;
  v73 = a4;
  v71 = a3;
  v9 = 0;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      79,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v78,
    (CTouchProcessor *)((char *)v8 + 32),
    0LL);
  v12 = CTouchProcessor::FindAndReferenceFrameById(v8, v7, 4LL);
  if ( !v12 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(UserSessionState + 69400),
        2,
        4,
        80,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
    UserSetLastError(87);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v18) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v18) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v10 = 0;
    if ( (_BYTE)v18 || v10 )
    {
      v19 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
      LOBYTE(v19) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        (_DWORD)v19,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        81,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
    goto LABEL_154;
  }
  if ( a7 && a5 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3273LL);
  *(_OWORD *)(v12 + 72) = *(_OWORD *)a6;
  *(_OWORD *)(v12 + 88) = *((_OWORD *)a6 + 1);
  *(_OWORD *)(v12 + 104) = *((_OWORD *)a6 + 2);
  *(_OWORD *)(v12 + 120) = *((_OWORD *)a6 + 3);
  *(_OWORD *)(v12 + 136) = *((_OWORD *)a6 + 4);
  *(_OWORD *)(v12 + 152) = *((_OWORD *)a6 + 5);
  *(_OWORD *)(v12 + 168) = *((_OWORD *)a6 + 6);
  *(_OWORD *)(v12 + 184) = *((_OWORD *)a6 + 7);
  *(_OWORD *)(v12 + 200) = *((_OWORD *)a6 + 8);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v11, v12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3279LL);
  if ( !*(_QWORD *)(v12 + 256) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3280LL);
  v20 = *(_DWORD *)(*(_QWORD *)(v12 + 240) + 168LL);
  if ( v20 == 6 || !v20 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3283LL);
  v70 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(v12 + 256) + 368LL), 4);
  v69 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(v12 + 256) + 368LL), 5);
  memset(v76, 0, sizeof(v76));
  v77 = 0;
  memset(v87, 0, sizeof(v87));
  v63 = 0;
  v21 = 0;
  if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(a5, v20, (struct tagINPUTDEST *)v87) )
  {
    v21 = -(v87[4] & 1);
    v63 = v21;
    CInputDest::CInputDest((CInputDest *)v88, (const struct tagINPUTDEST *)v87);
    CInputDest::operator=(v76, v88);
    CInputDest::~CInputDest((CInputDest *)v88);
  }
  v68 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(v8, (const struct CPointerInputFrame *)v12);
  v23 = CTouchProcessor::SetupQFrame(
          v22,
          (struct CPointerInputFrame *)v12,
          0xFFFFFFFFFFFFFFFFuLL,
          (const struct CInputDest *)v76,
          0);
  v72 = v23;
  if ( v23 )
  {
    if ( *(_DWORD *)v23 != -1 )
      goto LABEL_46;
    v24 = 3327LL;
  }
  else
  {
    v24 = 3324LL;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v24);
LABEL_46:
  v25 = 0;
  v26 = 0;
  v62 = 0;
  v67 = 0;
  if ( !*(_DWORD *)(v12 + 48) )
    goto LABEL_128;
  do
  {
    v27 = *(_QWORD *)(v12 + 240) + 480LL * v26;
    CInputDest::CInputDest((CInputDest *)&v80, (const struct CInputDest *)v76);
    v64 = 0;
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v27)
      && CPointerInfoNode::IsForManipulationThread(v28)
      && (*(_DWORD *)(v27 + 4) & 0x200) == 0
      && (v29 = 0, v71) )
    {
      while ( v73[v29] != *(unsigned __int16 *)(v27 + 172) )
      {
        if ( ++v29 >= v71 )
          goto LABEL_53;
      }
      NodeById = CTouchProcessor::FindNodeById(this, *(_WORD *)(v27 + 172), 0, 0);
      v36 = NodeById;
      if ( NodeById )
      {
        _InterlockedDecrement((volatile signed __int32 *)NodeById + 9);
        if ( *((int *)NodeById + 9) < 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3356LL);
        if ( (*(_DWORD *)v27 & 4) != 0 && *((_DWORD *)v36 + 74) == 2 )
        {
          if ( (_DWORD)v80 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3367LL);
          if ( a7 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3368LL);
          CInputDest::~CInputDest((CInputDest *)&v80);
        }
        else
        {
          if ( (*(_DWORD *)(v27 + 4) & 0x80u) != 0 || HIDWORD(v85) || (v37 = 2, a7) )
            v37 = 1;
          *((_DWORD *)v36 + 74) = v37;
        }
        v38 = *((_DWORD *)v36 + 74);
        if ( HIDWORD(v85) )
        {
          if ( v38 != 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3389LL);
          if ( !CInputDest::IsCompositionInput((CInputDest *)&v80) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3390LL);
          if ( (*(_DWORD *)v27 & 0x400) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3391LL);
          if ( (*(_DWORD *)v27 & 0x100) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3392LL);
          if ( *(_DWORD *)(v27 + 144) != 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3393LL);
          *(_DWORD *)(v27 + 4) |= 0x80u;
          v39 = *(_QWORD *)(v27 + 248);
          v74[0] = v80;
          v74[2] = v82;
          v74[1] = v81;
          v74[4] = v84;
          v74[3] = v83;
          v74[6] = v86;
          v74[5] = v85;
          v64 = ApiSetSetManipulationInputTargetTransform((unsigned int)v74, (_DWORD)a5, v39, (int)v27 + 160, v21);
        }
        else if ( v38 == 2 )
        {
          if ( (*(_DWORD *)(v27 + 4) & 0x80u) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3406LL);
          if ( (_DWORD)v80 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3407LL);
          CInputDest::operator=(&v80, v27 + 352);
          *(_DWORD *)v27 &= 0xFFFFFAFF;
          *(_DWORD *)(v27 + 144) = 0;
        }
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3350LL);
        CInputDest::~CInputDest((CInputDest *)&v80);
      }
      InputTraceLogging::Pointer::HandleResultFromUserMode(
        (const struct CPointerInputFrame *)v12,
        (const struct tagPOINTEREVENTINT *)(v27 + 160),
        a5,
        a7 != 0,
        v36,
        (const struct CInputDest *)&v80);
      if ( (_DWORD)v80 )
      {
        Queue = CInputDest::GetQueue((CInputDest *)&v80, 2);
        v46 = CInputDest::CInputDest((CInputDest *)v79, (const struct CInputDest *)&v80);
        v48 = CTouchProcessor::SetupQFramePostMT(v47, v12, &v72, Queue, v46, v68 != 0LL);
        if ( !v48 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3529LL);
        *(_DWORD *)(v27 + 4) |= 0x200u;
        v49 = v72;
        v62 = 1;
        if ( v72 )
        {
          if ( *(_DWORD *)(v27 + 8) != *(_DWORD *)v72 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3542LL);
          if ( !*((_DWORD *)v49 + 34) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3543LL);
          *(_DWORD *)(v27 + 8) = *(_DWORD *)v48;
          ++*(_DWORD *)(v48 + 136);
          --*((_DWORD *)v49 + 34);
        }
        *(_QWORD *)(v27 + 192) = CInputDest::GetWindowHandle((CInputDest *)&v80);
        CInputDest::operator=(v27 + 352, &v80);
        if ( (unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v27) && *(_DWORD *)(v27 + 24) )
          *(_DWORD *)(v27 + 456) = *(_DWORD *)(v27 + 128);
        if ( v64 )
          *(_DWORD *)(v27 + 180) |= 0x400000u;
        if ( HIDWORD(v85) )
        {
          v75[0] = v80;
          v75[2] = v82;
          v75[1] = v81;
          v75[4] = v84;
          v75[3] = v83;
          v75[6] = v86;
          v75[5] = v85;
          if ( ApiSetEditionGetInputDelegate(v75) )
            *(_DWORD *)v27 |= 0x100000u;
        }
        v50 = (struct CPointerInfoNode *)v27;
        v8 = this;
        CTouchProcessor::ProcessQFrameNode(this, (struct CPointerQFrame *)v48, v68, v50);
        if ( *(_DWORD *)v48 == -1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3576LL);
      }
      else
      {
        v40 = *(_WORD *)(v27 + 172);
        v41 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v65 = v40;
        if ( v68 )
        {
          ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, v68, v40, 0LL);
          if ( ValidNodeInFrame )
          {
            *(_QWORD *)(v27 + 192) = 0LL;
            CInputDest::~CInputDest((CInputDest *)(v27 + 352));
            *(_DWORD *)(v27 + 4) |= 0x200u;
            CTouchProcessor::ProcessEnterLeave((PERESOURCE *)this, v68, (struct CPointerInfoNode *)v27);
            if ( (*(_DWORD *)ValidNodeInFrame & 0x80u) == 0 )
              CTouchProcessor::ProcessAndUnreferencePreviousInput(
                this,
                (const struct CPointerInfoNode *)v27,
                *((_QWORD *)ValidNodeInFrame + 2),
                v41,
                v70,
                v69);
          }
          v40 = v65;
        }
        v43 = (*(_DWORD *)(v27 + 180) & 0x40000) == 0;
        v8 = this;
        if ( v43 )
        {
          v44 = v67;
        }
        else
        {
          v61 = v41;
          v44 = v67;
          CTouchProcessor::ProcessRoutedAwayList(this, v40, 1, (const struct CPointerInputFrame *)v12, v67, v61);
        }
        CTouchProcessor::FreePointerInfoNodeInt(this, v12, v44);
        CTouchProcessor::CheckFreeOnDeparture(this, v40);
      }
    }
    else
    {
LABEL_53:
      v8 = this;
    }
    CInputDest::~CInputDest((CInputDest *)&v80);
    v30 = *(_DWORD *)(v12 + 48);
    v26 = v67 + 1;
    v21 = v63;
    v67 = v26;
  }
  while ( v26 < v30 );
  v25 = v62;
  if ( v62 )
  {
    v31 = 0;
    if ( v30 )
    {
      do
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)(*(_QWORD *)(v12 + 240) + 480LL * v31)) )
        {
          if ( CPointerInfoNode::IsForManipulationThread(v32) && (*(_DWORD *)(v33 + 4) & 0x200) != 0 )
          {
            v34 = *(_QWORD *)(v12 + 248) + 160LL * *(unsigned int *)(v33 + 8);
            if ( *(_QWORD *)(v34 + 8) != -1LL && (*(_DWORD *)(v34 + 140) & 0x10) == 0 )
            {
              CTouchProcessor::TryCoalesceQFrame(
                v8,
                (struct CPointerInputFrame *)v12,
                v68,
                (const struct CPointerQFrame *)v34);
              if ( (*(_DWORD *)(v34 + 140) & 0x10) == 0 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3604LL);
            }
          }
        }
        ++v31;
      }
      while ( v31 < *(_DWORD *)(v12 + 48) );
      v25 = v62;
    }
  }
  else
  {
LABEL_128:
    if ( LODWORD(v76[0]) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3580LL);
  }
  if ( v68 )
    CTouchProcessor::UnreferenceFrameInt(v8, v68);
  if ( v25 )
  {
    MessagesCore = CTouchProcessor::GenerateMessagesCore(v8, v70, v69, 1, (const struct CPointerInputFrame *)v12);
    for ( i = 0; i < *(_DWORD *)(v12 + 48); ++i )
    {
      v53 = *(_QWORD *)(v12 + 240) + 480LL * i;
      v54 = *(_DWORD *)(v53 + 4);
      if ( (v54 & 0x200) != 0 && (v54 & 0x400) == 0 )
      {
        v55 = *(_QWORD *)(v53 + 16);
        v56 = v54 | 0x400;
        *(_DWORD *)(v53 + 4) = v56;
        if ( v55 )
        {
          if ( (v56 & 0x80u) != 0 )
          {
            v57 = *(_DWORD *)(v53 + 180);
            if ( (v57 & 4) != 0 )
              CTouchProcessor::SetPointerCapture(
                v8,
                v55,
                v53 + 352,
                2 - (unsigned int)((v57 & 0x10000) != 0),
                1,
                -__CFSHR__(*(_DWORD *)v53, 21));
          }
        }
      }
    }
  }
  else
  {
    MessagesCore = 0;
  }
  CTouchProcessor::UnreferenceFrame(v8, v12);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v58) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v58) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v10 = 0;
  if ( (_BYTE)v58 || v10 )
  {
    v59 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
    LOBYTE(v59) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v58,
      (_DWORD)v59,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      82,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  }
  CInputDest::~CInputDest((CInputDest *)v76);
  v9 = MessagesCore;
LABEL_154:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v78);
  return v9;
}
