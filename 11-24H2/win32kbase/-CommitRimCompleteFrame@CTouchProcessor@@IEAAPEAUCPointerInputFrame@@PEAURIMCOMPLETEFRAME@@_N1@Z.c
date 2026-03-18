/*
 * XREFs of ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140182E00
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1401853C0 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140188294 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x1401FC890 (-GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x140203D88 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     IsTouchpadDevice @ 0x140048B4C (IsTouchpadDevice.c)
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1400601C0 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x140060214 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D3998 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1400E2AF8 (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 *     ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x1400E358C (-CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1400ED6B0 (EtwTraceBeginPointerFrameCommit.c)
 *     HMAssignmentLock @ 0x1400F47B0 (HMAssignmentLock.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x14010AAA8 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x140182918 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6360 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x140222544 (ApiSetResetLastSeenFrameId.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CommitRimCompleteFrame(
        PERESOURCE *this,
        struct RIMCOMPLETEFRAME *a2,
        char a3,
        char a4)
{
  struct RIMCOMPLETEFRAME *v5; // r14
  char v7; // di
  char v8; // r8
  int v9; // edx
  char v10; // bl
  bool v11; // si
  __int64 UserSessionState; // rax
  int v13; // edx
  char v14; // bl
  bool v15; // si
  __int64 v16; // rax
  int v17; // edx
  char *v18; // rcx
  KPROCESSOR_MODE v19; // r8
  int v20; // eax
  int v21; // edx
  char v22; // r12
  __int64 v23; // r12
  __int64 v24; // r8
  int v25; // edx
  __int64 v26; // rsi
  char v27; // bl
  bool v28; // si
  __int64 v29; // rax
  int v30; // edx
  struct CPointerQFrame *v31; // rax
  int v32; // edx
  char v33; // bl
  bool v34; // si
  __int64 v35; // rax
  int v36; // edx
  unsigned __int64 v37; // rcx
  int v38; // edx
  char v39; // bl
  bool v40; // si
  __int64 v41; // rax
  int v42; // edx
  _DWORD *v43; // rbx
  __int64 v44; // rcx
  int v45; // r13d
  __int64 v46; // rax
  __int64 v47; // rcx
  _DWORD *v48; // rdx
  unsigned int v49; // r13d
  __int64 v50; // rbx
  _OWORD *v51; // rcx
  __int64 v52; // rdx
  int v53; // ebx
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // r13
  void *v57; // rax
  __int64 v58; // rdx
  int v59; // edx
  CTouchProcessor *v60; // rcx
  bool v61; // bl
  bool v62; // r15
  __int64 v63; // rax
  int v64; // edx
  __int64 v65; // rbx
  char *v66; // rcx
  char *v67; // r15
  CTouchProcessor *v68; // rcx
  int v69; // edx
  char v71; // bl
  bool v72; // si
  __int64 v73; // rax
  int v74; // r8d
  int v75; // edx
  __int16 v76; // [rsp+38h] [rbp-89h]
  struct RIMDEV *v77; // [rsp+58h] [rbp-69h]
  _QWORD v78[2]; // [rsp+68h] [rbp-59h] BYREF
  PERESOURCE *v79[7]; // [rsp+78h] [rbp-49h] BYREF
  PERESOURCE *v80[13]; // [rsp+B0h] [rbp-11h] BYREF
  PVOID Object; // [rsp+128h] [rbp+67h] BYREF
  char v82; // [rsp+138h] [rbp+77h]
  char v83; // [rsp+140h] [rbp+7Fh]

  v83 = a4;
  v82 = a3;
  v5 = a2;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v8 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v8 = 0;
  }
  if ( (_BYTE)a2 || v8 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      v8,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      153,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v79,
    (struct CEResourceLock *)(this + 4),
    0LL);
  if ( !tagDomLock::IsLockedShared(this + 4) )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6278LL);
  }
  if ( a4 )
  {
    if ( *((_DWORD *)this + 41) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v10 = 0;
      }
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v13) = v10;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v11,
          *(_QWORD *)(UserSessionState + 69400),
          3,
          4,
          154,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v9) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v7 = 0;
      if ( (_BYTE)v9 || v7 )
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v9,
          v7,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          155,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      goto LABEL_195;
    }
  }
  else if ( *((_DWORD *)this + 40) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v14 = 0;
    }
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v17) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v15,
        *(_QWORD *)(v16 + 69400),
        3,
        4,
        156,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( (_BYTE)v9 || v7 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v7,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        157,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    goto LABEL_195;
  }
  v18 = (char *)*((_QWORD *)v5 + 4);
  v19 = *((_DWORD *)v5 + 48) == 0;
  Object = 0LL;
  v20 = RawInputManagerDeviceObjectResolveHandle(v18, 3u, v19, &Object);
  v22 = v20;
  if ( v20 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v71 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v71 = 0;
    }
    v72 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v71 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v73 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v74) = v72;
      LOBYTE(v75) = v71;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v75,
        v74,
        *(_QWORD *)(v73 + 69400),
        2,
        4,
        158,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids,
        v22);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v21) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v21) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( (_BYTE)v21 || v7 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v7,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        159,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  }
  else
  {
    v23 = 0LL;
    if ( Object )
      v23 = *((_QWORD *)Object + 9);
    ObfDereferenceObject(Object);
    v77 = (struct RIMDEV *)HMValidateHandleNoSecure(v23, 19);
    if ( !v77 )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6331LL);
    }
    if ( !*((_DWORD *)v5 + 6) )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6334LL);
    }
    EtwTraceBeginPointerFrameCommit(0LL, *((_DWORD *)v5 + 6), v24);
    v26 = Win32AllocPoolZInitImpl(256LL, 0x108uLL, 0x66707355u);
    if ( v26 )
    {
      v31 = CTouchProcessor::AllocPointerQFrameList(this, *((_DWORD *)v5 + 6));
      *(_QWORD *)(v26 + 248) = v31;
      if ( v31 )
      {
        v37 = 480LL * *((unsigned int *)v5 + 6);
        if ( v37 <= 0xFFFFFFFF )
          *(_QWORD *)(v26 + 240) = Win32AllocPoolZInitImpl(256LL, (unsigned int)v37, 0x65707355u);
        if ( *(_QWORD *)(v26 + 240) )
        {
          *(_DWORD *)(v26 + 224) = 1;
          v43 = *(_DWORD **)(W32GetUserSessionState(v37) + 16728);
          CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
            (CInpLockGuardExclusiveIfNeeded *)v80,
            (struct CEResourceLock *)(v43 + 2),
            0LL);
          v45 = (*v43)++;
          if ( v45 == -1 )
          {
            *v43 = 1;
            v46 = W32GetUserSessionState(v44);
            ApiSetResetLastSeenFrameId(*(_QWORD *)(v46 + 19200));
          }
          CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v80);
          *(_DWORD *)(v26 + 40) = v45;
          *(_DWORD *)(v26 + 48) = *((_DWORD *)v5 + 6);
          *(_QWORD *)(v26 + 64) = v23;
          *(_OWORD *)(v26 + 72) = *((_OWORD *)v5 + 3);
          *(_OWORD *)(v26 + 88) = *((_OWORD *)v5 + 4);
          *(_OWORD *)(v26 + 104) = *((_OWORD *)v5 + 5);
          *(_OWORD *)(v26 + 120) = *((_OWORD *)v5 + 6);
          *(_OWORD *)(v26 + 136) = *((_OWORD *)v5 + 7);
          *(_OWORD *)(v26 + 152) = *((_OWORD *)v5 + 8);
          *(_OWORD *)(v26 + 168) = *((_OWORD *)v5 + 9);
          *(_OWORD *)(v26 + 184) = *((_OWORD *)v5 + 10);
          *(_OWORD *)(v26 + 200) = *((_OWORD *)v5 + 11);
          *(_QWORD *)(v26 + 216) = *(_QWORD *)(*((_QWORD *)v5 + 29) + 96LL);
          InputTraceLogging::Pointer::CommitFrame(v77, (const struct CPointerInputFrame *)v26);
          v48 = (_DWORD *)*((_QWORD *)v5 + 29);
          v49 = 0;
          for ( Object = v48; v49 < *((_DWORD *)v5 + 6); Object = (char *)Object + 192 )
          {
            v50 = 480LL * v49;
            *(_DWORD *)(*(_QWORD *)(v26 + 240) + v50 + 156) = *v48;
            v51 = (_OWORD *)(v50 + *(_QWORD *)(v26 + 240) + 160LL);
            *v51 = *(_OWORD *)(v48 + 2);
            v51[1] = *(_OWORD *)(v48 + 6);
            v51[2] = *(_OWORD *)(v48 + 10);
            v51[3] = *(_OWORD *)(v48 + 14);
            v51[4] = *(_OWORD *)(v48 + 18);
            v51[5] = *(_OWORD *)(v48 + 22);
            v51[6] = *(_OWORD *)(v48 + 26);
            v51 += 8;
            *(v51 - 1) = *(_OWORD *)(v48 + 30);
            *v51 = *(_OWORD *)(v48 + 34);
            v51[1] = *(_OWORD *)(v48 + 38);
            v51[2] = *(_OWORD *)(v48 + 42);
            *((_QWORD *)v51 + 6) = *((_QWORD *)v48 + 23);
            *(_QWORD *)(v50 + *(_QWORD *)(v26 + 240) + 184) = v23;
            CInputDest::~CInputDest((CInputDest *)(v50 + *(_QWORD *)(v26 + 240) + 352LL));
            InputTraceLogging::Pointer::CommitFramePointer(
              v77,
              (const struct CPointerInputFrame *)v26,
              (const struct tagPOINTEREVENTINT *)(v50 + *(_QWORD *)(v26 + 240) + 160LL));
            v53 = *((_DWORD *)Object + 7);
            if ( (v53 & 0x10000) != 0 || IsTouchpadDevice(v23, v52) && (v53 & 0x10070) != 0 )
              *((_BYTE *)this + 40) = 1;
            ++v49;
            v48 = (char *)Object + 192;
          }
          *(_DWORD *)(v26 + 56) = *((_DWORD *)v5 + 7);
          v54 = W32GetUserSessionState(v47);
          Object = 0LL;
          *(_QWORD *)v26 = *(_QWORD *)(v54 + 3264);
          v55 = *((_QWORD *)v5 + 28);
          while ( 1 )
          {
            if ( !v55 )
            {
              v78[0] = v26 + 256;
              v78[1] = *((_QWORD *)v77 + 57);
              HMAssignmentLock((__int64)v78, 0);
              if ( v82
                || (CTouchProcessor::CommitInputFrame((CTouchProcessor *)this, (struct CPointerInputFrame *)v26),
                    IsTouchpadDevice(v23, v58)) )
              {
                Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
                *(_DWORD *)(v26 + 228) |= 0x80u;
              }
              else if ( v83 )
              {
                *(_DWORD *)(v26 + 228) |= 0x40u;
                ++*((_DWORD *)this + 40);
              }
              else
              {
                ++*((_DWORD *)this + 41);
              }
              *(_QWORD *)(v26 + 32) = v26 + 24;
              *(_QWORD *)(v26 + 24) = v26 + 24;
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                || (LOBYTE(v59) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
              {
                LOBYTE(v59) = 0;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                || !*((_WORD *)WPP_GLOBAL_Control + 36) )
              {
                v7 = 0;
              }
              if ( (_BYTE)v59 || v7 )
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v59,
                  v7,
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  5,
                  4,
                  169,
                  (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
              CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v79);
              return (struct CPointerInputFrame *)v26;
            }
            v56 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x64727355u);
            if ( !v56 )
              break;
            v57 = (void *)Win32AllocPoolZInitImpl(256LL, *(unsigned int *)(v55 + 4), 0x64727355u);
            *(_QWORD *)(v56 + 16) = v57;
            if ( !v57 )
            {
              v60 = WPP_GLOBAL_Control;
              v61 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                 && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
              v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v63 = W32GetUserSessionState(WPP_GLOBAL_Control);
                v76 = 166;
LABEL_149:
                LOBYTE(v64) = v61;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v64,
                  v62,
                  *(_QWORD *)(v63 + 69400),
                  2,
                  4,
                  v76,
                  (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
                goto LABEL_150;
              }
              goto LABEL_150;
            }
            *(_DWORD *)(v56 + 4) = *(_DWORD *)v55;
            *(_DWORD *)(v56 + 8) = *(_DWORD *)(v55 + 4);
            memmove(v57, *(const void **)(v55 + 8), *(unsigned int *)(v55 + 4));
            if ( Object )
              *((_QWORD *)Object + 3) = v56;
            else
              *(_QWORD *)(v26 + 232) = v56;
            v55 = *(_QWORD *)(v55 + 16);
            Object = (PVOID)v56;
          }
          v60 = WPP_GLOBAL_Control;
          v61 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
          v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v63 = W32GetUserSessionState(WPP_GLOBAL_Control);
            v76 = 167;
            goto LABEL_149;
          }
LABEL_150:
          v65 = *(_QWORD *)(v26 + 232);
          while ( v65 )
          {
            v66 = *(char **)(v65 + 16);
            v67 = (char *)v65;
            if ( v66 )
              GreDeleteFastMutex(v66);
            v65 = *(_QWORD *)(v65 + 24);
            GreDeleteFastMutex(v67);
          }
          CTouchProcessor::FreePointerInfoList(v60, *(struct CPointerInfoNode **)(v26 + 240), *((_DWORD *)v5 + 6));
          CTouchProcessor::FreePointerQFrameList(v68, *(struct CPointerQFrame **)(v26 + 248), *((_DWORD *)v5 + 6));
          GreDeleteFastMutex((char *)v26);
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (LOBYTE(v69) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            LOBYTE(v69) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
            v7 = 0;
          if ( (_BYTE)v69 || v7 )
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v69,
              v7,
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5,
              4,
              168,
              (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
        }
        else
        {
          CTouchProcessor::FreePointerQFrameList(
            (CTouchProcessor *)v37,
            *(struct CPointerQFrame **)(v26 + 248),
            *((_DWORD *)v5 + 6));
          GreDeleteFastMutex((char *)v26);
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v39 = 0;
          }
          v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v41 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v42) = v39;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v42,
              v40,
              *(_QWORD *)(v41 + 69400),
              2,
              4,
              164,
              (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
          }
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (LOBYTE(v38) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            LOBYTE(v38) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
            v7 = 0;
          if ( (_BYTE)v38 || v7 )
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v38,
              v7,
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5,
              4,
              165,
              (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
        }
      }
      else
      {
        GreDeleteFastMutex((char *)v26);
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v33 = 0;
        }
        v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v35 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v36) = v33;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v36,
            v34,
            *(_QWORD *)(v35 + 69400),
            2,
            4,
            162,
            (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
        }
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (LOBYTE(v32) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          LOBYTE(v32) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
          v7 = 0;
        if ( (_BYTE)v32 || v7 )
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v32,
            v7,
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5,
            4,
            163,
            (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v27 = 0;
      }
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v30) = v27;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v28,
          *(_QWORD *)(v29 + 69400),
          2,
          4,
          160,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v25) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v25) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v7 = 0;
      if ( (_BYTE)v25 || v7 )
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v7,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          161,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
  }
LABEL_195:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v79);
  return 0LL;
}
