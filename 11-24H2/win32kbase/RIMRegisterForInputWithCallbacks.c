/*
 * XREFs of RIMRegisterForInputWithCallbacks @ 0x14014F6E0
 * Callers:
 *     RIMRegisterForInputEx @ 0x14014F670 (RIMRegisterForInputEx.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x14020BD10 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     rimConvertUserToKernelEventHandle @ 0x14005CCEC (rimConvertUserToKernelEventHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     rimCheckForRegistrationConflicts @ 0x1400CFAA4 (rimCheckForRegistrationConflicts.c)
 *     RawInputManagerObjectCreate @ 0x14013323C (RawInputManagerObjectCreate.c)
 *     CreateKernelSemaphore @ 0x140136430 (CreateKernelSemaphore.c)
 *     ?RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z @ 0x14013C4DC (-RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z.c)
 *     RIMCheckPressureDefaultSetting @ 0x140147638 (RIMCheckPressureDefaultSetting.c)
 *     RIMUnregisterForInput @ 0x14017BA20 (RIMUnregisterForInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1401D3130 (RIMIDEAdoptOrphanedRimDevs.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDd @ 0x1401D8EB0 (WPP_RECORDER_AND_TRACE_SF_qDd.c)
 *     rimConvertUserToKernelSemaphoreHandle @ 0x1401E3AA4 (rimConvertUserToKernelSemaphoreHandle.c)
 *     rimConvertUserToKernelTimerHandle @ 0x1401E3B94 (rimConvertUserToKernelTimerHandle.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1401ED2E0 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDiscoverSpecificDevice @ 0x1401ED4D0 (RIMDiscoverSpecificDevice.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RIMRegisterForInputWithCallbacks(
        unsigned int a1,
        ULONG64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        HANDLE *a13)
{
  CTouchProcessor *v15; // rcx
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  char v19; // bl
  __int64 v20; // rax
  char v21; // bl
  bool v22; // r14
  __int64 v23; // rax
  int v24; // edx
  int v25; // r8d
  char v26; // bl
  bool v27; // r12
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  char v31; // bl
  __int64 v32; // rax
  int v34; // eax
  struct _KSEMAPHORE *KernelSemaphore; // r15
  struct _KSEMAPHORE *v36; // r14
  char *v37; // rcx
  unsigned int v38; // r13d
  __int64 v39; // rax
  char *v40; // rcx
  int v41; // r14d
  int v42; // r13d
  int v43; // eax
  bool v44; // sf
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r13
  char *v49; // r15
  unsigned int v50; // r9d
  char *v51; // rdx
  GUID **v52; // rcx
  char *v53; // r10
  _DWORD *v54; // r13
  signed __int64 v55; // r11
  signed __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rax
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  BOOL v62; // edx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned int i; // eax
  const void *v67; // rdx
  struct _UNICODE_STRING *v68; // rax
  ULONG64 v69; // rax
  int v70; // ecx
  WCHAR *v71; // rdx
  ULONG64 v72; // r8
  char *v73; // rcx
  char *v74; // rbx
  _QWORD *v75; // rdx
  char **v76; // r12
  char v77; // bl
  bool v78; // r15
  __int64 v79; // rax
  int v80; // r8d
  int v81; // edx
  char **v82; // rbx
  __int64 v83; // r13
  int TableContext; // [rsp+20h] [rbp-168h]
  int v85; // [rsp+28h] [rbp-160h]
  int v86; // [rsp+30h] [rbp-158h]
  __int16 v87; // [rsp+30h] [rbp-158h]
  int v88; // [rsp+38h] [rbp-150h]
  bool v89; // [rsp+60h] [rbp-128h]
  char v90; // [rsp+60h] [rbp-128h]
  char v91; // [rsp+60h] [rbp-128h]
  char v92; // [rsp+68h] [rbp-120h]
  int v93; // [rsp+6Ch] [rbp-11Ch]
  bool v94; // [rsp+74h] [rbp-114h]
  unsigned int v95; // [rsp+78h] [rbp-110h]
  PVOID Object; // [rsp+88h] [rbp-100h] BYREF
  int v98; // [rsp+90h] [rbp-F8h]
  HANDLE v99; // [rsp+98h] [rbp-F0h] BYREF
  PVOID Buffer; // [rsp+A0h] [rbp-E8h]
  unsigned int v101; // [rsp+A8h] [rbp-E0h]
  struct _KSEMAPHORE *v102; // [rsp+B0h] [rbp-D8h]
  unsigned int v103; // [rsp+B8h] [rbp-D0h]
  HANDLE *v104; // [rsp+C0h] [rbp-C8h]
  void *v105; // [rsp+C8h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-B8h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+E0h] [rbp-A8h]
  HANDLE Handle; // [rsp+E8h] [rbp-A0h] BYREF
  HANDLE v109; // [rsp+F0h] [rbp-98h] BYREF
  HANDLE v110; // [rsp+F8h] [rbp-90h] BYREF
  UNICODE_STRING SourceString; // [rsp+100h] [rbp-88h] BYREF
  __int64 v112; // [rsp+110h] [rbp-78h]
  ULONG64 v113; // [rsp+118h] [rbp-70h]
  __int64 v114; // [rsp+120h] [rbp-68h]
  char v115; // [rsp+128h] [rbp-60h] BYREF
  __int128 v116; // [rsp+130h] [rbp-58h]

  v112 = a4;
  v95 = a3;
  v103 = a1;
  v113 = a2;
  *(_QWORD *)&DestinationString.Length = a4;
  v105 = a6;
  v114 = a7;
  *(_QWORD *)&SourceString.Length = a8;
  v104 = a13;
  Handle = (HANDLE)-1LL;
  v109 = (HANDLE)-1LL;
  v110 = (HANDLE)-1LL;
  v99 = (HANDLE)-1LL;
  v116 = 0LL;
  v98 = a12 == 0;
  v94 = 0;
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    LOBYTE(v15) = 0;
  }
  v92 = (char)v15;
  v89 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v15);
    LOBYTE(v17) = v89;
    LOBYTE(v18) = v92;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      11,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
    a3 = v95;
  }
  if ( (a1 & 0xFFFFFFC0) != 0 )
  {
    v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v90 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v90,
        *(_QWORD *)(v20 + 19392),
        2u,
        1u,
        0xCu,
        (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
        a1);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v21 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v21 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
    v87 = 13;
LABEL_59:
    LOBYTE(v25) = v22;
    LOBYTE(v24) = v21;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v25,
      *(_QWORD *)(v23 + 19392),
      4,
      1,
      v87,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( !a1 || ((a1 - 1) & a1) != 0 || a3 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v26 = 0;
      }
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v29) = v27;
        LOBYTE(v30) = v26;
        WPP_RECORDER_AND_TRACE_SF_qDd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v29,
          *(_QWORD *)(v28 + 19392),
          TableContext,
          v85,
          v86,
          v88,
          a2,
          a1,
          v95);
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v21 = 0;
      }
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v21 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
      v87 = 15;
      goto LABEL_59;
    }
  }
  else if ( a3 )
  {
    if ( (a1 & 0x20) == 0 )
    {
      v31 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v91 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v31,
          v91,
          *(_QWORD *)(v32 + 19392),
          2u,
          1u,
          0x10u,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
          a1,
          v95);
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v21 = 0;
      }
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v21 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
      v87 = 17;
      goto LABEL_59;
    }
    if ( a12 )
    {
      v34 = rimCheckForRegistrationConflicts(a1);
      if ( v34 == 1 )
        return 3221225506LL;
      v94 = v34 == 0;
    }
  }
  KernelSemaphore = CreateKernelSemaphore(0, -1);
  v102 = KernelSemaphore;
  if ( !KernelSemaphore )
    return 3221225495LL;
  v36 = CreateKernelSemaphore(0, 0x7FFFFFFF);
  Buffer = v36;
  if ( !v36 )
  {
    v37 = (char *)KernelSemaphore;
LABEL_179:
    GreDeleteFastMutex(v37);
    return 3221225495LL;
  }
  v38 = 0;
  Object = &v115;
  do
  {
    v39 = Win32AllocPoolZInitImpl(64LL, 0x68uLL, 0x63704152u);
    v40 = (char *)Object;
    *(_QWORD *)Object = v39;
    if ( !v39 )
    {
      v82 = (char **)&v115;
      v83 = 3LL;
      do
      {
        if ( *v82 )
          GreDeleteFastMutex(*v82);
        ++v82;
        --v83;
      }
      while ( v83 );
      GreDeleteFastMutex((char *)KernelSemaphore);
      v37 = (char *)v36;
      goto LABEL_179;
    }
    ++v38;
    Object = v40 + 8;
  }
  while ( v38 <= 2 );
  v41 = rimConvertUserToKernelEventHandle(v105, &Handle);
  v42 = rimConvertUserToKernelTimerHandle(v114, &v109);
  v43 = rimConvertUserToKernelSemaphoreHandle(*(_QWORD *)&SourceString.Length, &v110);
  v44 = v41 < 0;
  if ( v41 < 0 )
  {
LABEL_133:
    if ( !v44 )
      v41 = v42;
    v48 = 3LL;
    goto LABEL_136;
  }
  if ( v42 < 0 || v43 < 0 )
  {
    v44 = v41 < 0;
    goto LABEL_133;
  }
  KeEnterCriticalRegion();
  v41 = RawInputManagerObjectCreate(a12 != 0, v45, v46, v47, &v99);
  KeLeaveCriticalRegion();
  v48 = 3LL;
  if ( v41 < 0 )
    goto LABEL_150;
  Object = 0LL;
  v41 = RawInputManagerObjectResolveHandle((char *)v99, 3u, 1, &Object);
  v93 = v41;
  if ( v41 < 0 )
    goto LABEL_136;
  v49 = (char *)Object;
  *((_QWORD *)Object + 9) = v99;
  *((_WORD *)v49 + 40) = 0;
  v49[82] = 0;
  *((_DWORD *)v49 + 21) = v103;
  *((_QWORD *)v49 + 15) = a5;
  *((_QWORD *)v49 + 13) = 0LL;
  *((_QWORD *)v49 + 14) = 0LL;
  *((_QWORD *)v49 + 95) = 0LL;
  *((_QWORD *)v49 + 96) = 0LL;
  *((_QWORD *)v49 + 53) = 0LL;
  *((_DWORD *)v49 + 102) = 0;
  *((_QWORD *)v49 + 52) = 0LL;
  *((_QWORD *)v49 + 55) = v49 + 432;
  *((_QWORD *)v49 + 54) = v49 + 432;
  *((_QWORD *)v49 + 57) = v49 + 448;
  *((_QWORD *)v49 + 56) = v49 + 448;
  RIMCheckPressureDefaultSetting((__int64)v49);
  *((_DWORD *)v49 + 264) = v98;
  *((_QWORD *)v49 + 133) = v102;
  *((_DWORD *)v49 + 268) = 0;
  v102 = 0LL;
  *((_QWORD *)v49 + 137) = Buffer;
  *((_DWORD *)v49 + 276) = 0;
  Buffer = 0LL;
  v50 = 0;
  v51 = &v115;
  v52 = &off_140258E40;
  v53 = v49 + 248;
  v54 = v49 + 296;
  v55 = v49 - (char *)&off_140258E40;
  v56 = v49 - &v115;
  do
  {
    *(_OWORD *)((char *)v52 + v55 + 128) = *(_OWORD *)v52;
    *(_OWORD *)((char *)v52 + v55 + 144) = *((_OWORD *)v52 + 1);
    *(_QWORD *)&v51[v56 + 224] = 0LL;
    *(_QWORD *)&v51[v56 + 312] = *(_QWORD *)v51;
    *v54 = 0;
    *(_QWORD *)v51 = 0LL;
    *((_DWORD *)v53 + 2) = v50;
    *(_QWORD *)v53 = v49;
    ++v50;
    ++v54;
    v52 += 4;
    v51 += 8;
    v53 += 16;
  }
  while ( v50 <= 2 );
  *((_QWORD *)v49 + 42) = v109;
  *((_QWORD *)v49 + 50) = a9;
  *((_QWORD *)v49 + 43) = Handle;
  v49[392] = v94;
  v49[393] = 0;
  *((_QWORD *)v49 + 44) = 0LL;
  *((_QWORD *)v49 + 45) = 0LL;
  *((_QWORD *)v49 + 46) = v110;
  *((_QWORD *)v49 + 48) = v49 + 376;
  *((_QWORD *)v49 + 47) = v49 + 376;
  v49[776] = 0;
  *((_QWORD *)v49 + 113) = 0LL;
  v57 = ((unsigned __int64)(500 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  *((_QWORD *)v49 + 112) = (v57 + ((unsigned __int64)(500 * gliQpcFreq.QuadPart - v57) >> 1)) >> 9;
  v58 = ((unsigned __int64)(5000 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  *((_QWORD *)v49 + 116) = (v58 + ((unsigned __int64)(5000 * gliQpcFreq.QuadPart - v58) >> 1)) >> 9;
  *((_QWORD *)v49 + 103) = a10;
  *((_QWORD *)v49 + 104) = a11;
  *((_WORD *)v49 + 356) = 0;
  *(_QWORD *)(v49 + 716) = 1LL;
  *((_QWORD *)v49 + 100) = 0LL;
  *((_QWORD *)v49 + 92) = v49 + 728;
  *((_QWORD *)v49 + 91) = v49 + 728;
  *((_QWORD *)v49 + 94) = v49 + 744;
  *((_QWORD *)v49 + 93) = v49 + 744;
  *((_QWORD *)v49 + 99) = v49 + 784;
  *((_QWORD *)v49 + 98) = v49 + 784;
  *((_QWORD *)v49 + 102) = v49 + 808;
  *((_QWORD *)v49 + 101) = v49 + 808;
  *((_QWORD *)v49 + 136) = v49 + 1080;
  *((_QWORD *)v49 + 135) = v49 + 1080;
  RtlInitializeGenericTableAvl(
    (PRTL_AVL_TABLE)v49 + 9,
    (PRTL_AVL_COMPARE_ROUTINE)rimUserMemAllocNodeCompare,
    rimUserMemAllocNodeAlloc,
    (PRTL_AVL_FREE_ROUTINE)rimUserMemAllocNodeFree,
    0LL);
  v59 = v95;
  *((_DWORD *)v49 + 22) = v95;
  v48 = 3LL;
  if ( !v95 )
  {
LABEL_95:
    v62 = a12 != 0;
    goto LABEL_96;
  }
  if ( a2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 458LL);
    v59 = v95;
  }
  *(_QWORD *)&SourceString.Length = v59;
  v60 = 4 * v59;
  if ( v60 > 0xFFFFFFFF )
  {
    v41 = -1073741811;
    v93 = -1073741811;
    goto LABEL_95;
  }
  v61 = Win32AllocPoolZInitImpl(256LL, (unsigned int)v60, 0x70617552u);
  *((_QWORD *)v49 + 12) = v61;
  v62 = a12 != 0;
  if ( !v61 )
  {
    v41 = -1073741801;
    v93 = -1073741801;
LABEL_96:
    v68 = (struct _UNICODE_STRING *)a2;
    goto LABEL_97;
  }
  if ( !a12 )
  {
    v63 = 0LL;
    v64 = *(_QWORD *)&SourceString.Length;
    v65 = v112;
    do
    {
      *(_DWORD *)(v63 + *((_QWORD *)v49 + 12)) = *(_DWORD *)(v65 + v63);
      v63 += 4LL;
      --v64;
    }
    while ( v64 );
    goto LABEL_95;
  }
  for ( i = 0; ; i = v101 + 1 )
  {
    v101 = i;
    if ( i >= v95 )
      break;
    v67 = (const void *)(v112 + 4LL * i);
    if ( (unsigned __int64)v67 >= MmUserProbeAddress )
      v67 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory((void *)(*((_QWORD *)v49 + 12) + 4LL * i), v67, 4uLL);
  }
  v68 = (struct _UNICODE_STRING *)a2;
  v62 = a12 != 0;
LABEL_97:
  if ( !v68 )
  {
    if ( v41 >= 0 && !v49[392] )
      RIMDiscoverDevicesOfInputType(v49);
    RIMIDEAdoptOrphanedRimDevs(v49);
    goto LABEL_131;
  }
  SourceString = 0LL;
  p_DestinationString = 0LL;
  DestinationString = 0LL;
  if ( !v62 )
  {
    p_DestinationString = v68;
    goto LABEL_118;
  }
  v69 = a2;
  if ( a2 >= MmUserProbeAddress )
    v69 = MmUserProbeAddress;
  v70 = *(_DWORD *)v69;
  v98 = v70;
  *(_DWORD *)&SourceString.Length = v70;
  v71 = *(WCHAR **)(v69 + 8);
  SourceString.Buffer = v71;
  if ( ((unsigned __int8)v71 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v72 = (ULONG64)v71 + (unsigned __int16)v70 + 2;
  if ( v72 <= (unsigned __int64)v71 || v72 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v70 > HIWORD(v98) )
  {
    if ( (v70 & 1) == 0 )
      goto LABEL_116;
    goto LABEL_115;
  }
  if ( (v70 & 1) != 0 )
  {
LABEL_115:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 521LL);
LABEL_116:
    ExRaiseAccessViolation();
  }
  if ( (_WORD)v70 )
  {
    DestinationString.MaximumLength = v70;
    DestinationString.Length = v70;
    DestinationString.Buffer = (PWSTR)Win32AllocPoolZInitImpl(256LL, (unsigned __int16)v70, 0x706D7452u);
    if ( DestinationString.Buffer )
    {
      RtlCopyUnicodeString(&DestinationString, &SourceString);
      p_DestinationString = &DestinationString;
    }
    v41 = v93;
  }
  else
  {
    v41 = -1073741801;
  }
  v49 = (char *)Object;
LABEL_118:
  if ( v41 >= 0 )
  {
    RIMLockExclusive((__int64)(v49 + 104));
    v41 = RIMDiscoverSpecificDevice((struct RawInputManagerObject *)v49);
    RIMUnlockExclusive((__int64)(v49 + 104));
    if ( v41 < 0 )
    {
      if ( *((_QWORD *)v49 + 12) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 558LL);
      v73 = (char *)*((_QWORD *)v49 + 52);
      if ( v73 )
      {
        GreDeleteFastMutex(v73);
        *((_QWORD *)v49 + 52) = 0LL;
      }
      *((_QWORD *)v49 + 42) = -1LL;
      *((_QWORD *)v49 + 43) = -1LL;
      *((_QWORD *)v49 + 46) = -1LL;
    }
  }
  if ( DestinationString.Buffer )
    GreDeleteFastMutex((char *)DestinationString.Buffer);
LABEL_131:
  InputTraceLogging::RIM::RawInputManagerObjectUsed((const struct RawInputManagerObject *)v49);
  ObfDereferenceObject(v49);
  KernelSemaphore = v102;
LABEL_136:
  if ( v41 >= 0 )
  {
    v74 = &v115;
    do
    {
      if ( *(_QWORD *)v74 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 609LL);
      v74 += 8;
      --v48;
    }
    while ( v48 );
    if ( KernelSemaphore )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 612LL);
    if ( Buffer )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 613LL);
    if ( a12 )
    {
      v75 = v104;
      if ( (unsigned __int64)v104 >= MmUserProbeAddress )
        v75 = (_QWORD *)MmUserProbeAddress;
      *v75 = v99;
    }
    else
    {
      *v104 = v99;
    }
    goto LABEL_166;
  }
LABEL_150:
  v76 = (char **)&v115;
  do
  {
    if ( *v76 )
      GreDeleteFastMutex(*v76);
    ++v76;
    --v48;
  }
  while ( v48 );
  if ( KernelSemaphore )
    GreDeleteFastMutex((char *)KernelSemaphore);
  if ( Buffer )
    GreDeleteFastMutex((char *)Buffer);
  if ( Handle != (HANDLE)-1LL )
    ZwClose(Handle);
  if ( v109 != (HANDLE)-1LL )
    ZwClose(v109);
  if ( v110 != (HANDLE)-1LL )
    ZwClose(v110);
  if ( v99 != (HANDLE)-1LL )
    ObCloseHandle(v99, 1);
LABEL_166:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v77 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v77 = 0;
  }
  v78 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v77 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v79 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v80) = v78;
    LOBYTE(v81) = v77;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v81,
      v80,
      *(_QWORD *)(v79 + 19392),
      4,
      1,
      20,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v41);
  }
  return (unsigned int)v41;
}
