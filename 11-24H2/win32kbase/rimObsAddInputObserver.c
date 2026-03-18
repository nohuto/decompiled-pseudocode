/*
 * XREFs of rimObsAddInputObserver @ 0x1401EEEE4
 * Callers:
 *     NtRIMAddInputObserver @ 0x1401D4670 (NtRIMAddInputObserver.c)
 *     RIMAddInputObserver @ 0x1401D5CE0 (RIMAddInputObserver.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14002588C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     rimConvertUserToKernelEventHandle @ 0x14005CCEC (rimConvertUserToKernelEventHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDD @ 0x140147320 (WPP_RECORDER_AND_TRACE_SF_DDDD.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x14019B5B4 (RawInputManagerInputObserverObjectCreate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x14019D840 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1401EE888 (rimObsCheckForRegistrationConflicts.c)
 *     rimObsStartStopDeviceRead @ 0x1401F0DA0 (rimObsStartStopDeviceRead.c)
 */

__int64 __fastcall rimObsAddInputObserver(
        __int64 a1,
        unsigned int a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        HANDLE *a9)
{
  CTouchProcessor *v9; // rcx
  unsigned int v10; // ebx
  unsigned int v11; // r12d
  __int64 UserSessionState; // rax
  char v13; // bl
  bool v14; // r14
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  char v19; // bl
  bool v20; // r14
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r9
  char v24; // bl
  char v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  CTouchProcessor *v28; // rcx
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  CTouchProcessor *v33; // rcx
  PVOID v34; // r13
  HANDLE v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  char v38; // r12
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  char v42; // r12
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  char v46; // r12
  __int64 v47; // rax
  int v48; // edx
  int v49; // r8d
  _QWORD *v50; // rdx
  char v51; // r12
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  __int64 v55; // rax
  char v56; // r14
  bool v57; // r15
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  int v61; // [rsp+20h] [rbp-98h]
  int v62; // [rsp+28h] [rbp-90h]
  __int16 v63; // [rsp+30h] [rbp-88h]
  __int16 v64; // [rsp+30h] [rbp-88h]
  char v65; // [rsp+60h] [rbp-58h]
  char v66; // [rsp+60h] [rbp-58h]
  char v67; // [rsp+61h] [rbp-57h]
  char v68; // [rsp+61h] [rbp-57h]
  unsigned int v69; // [rsp+64h] [rbp-54h]
  HANDLE Handle; // [rsp+68h] [rbp-50h] BYREF
  PVOID Object; // [rsp+70h] [rbp-48h] BYREF
  bool v74; // [rsp+C8h] [rbp+10h]
  bool v75; // [rsp+C8h] [rbp+10h]
  bool v76; // [rsp+C8h] [rbp+10h]
  bool v77; // [rsp+C8h] [rbp+10h]

  if ( !a8 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1066);
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    LOBYTE(v9) = 0;
  }
  v65 = (char)v9;
  v67 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v9);
    v10 = a7;
    v69 = a7;
    v11 = a6;
    WPP_RECORDER_AND_TRACE_SF_DDDD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v65,
      v67,
      *(_QWORD *)(UserSessionState + 69400),
      v61,
      v62,
      0x3Cu,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  }
  else
  {
    v10 = a7;
    v69 = a7;
    v11 = a6;
  }
  if ( a2 < 0x30 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 69400),
        3,
        1,
        61,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    }
    return 3221225507LL;
  }
  if ( !a1 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v19 = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v23 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
    v63 = 62;
LABEL_57:
    LOBYTE(v22) = v20;
    LOBYTE(v21) = v19;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v22,
      v23,
      3,
      1,
      v63,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    return 3221225485LL;
  }
  if ( a5 > 2 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v24 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v25,
        *(_QWORD *)(v26 + 69400),
        3u,
        1u,
        0x3Fu,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
        a5);
    }
    return 3221225485LL;
  }
  if ( a5 == 2 )
  {
    if ( !v10 || !v11 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v19 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v23 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
      v63 = 64;
      goto LABEL_57;
    }
    if ( v11 == 7 || v11 == 1 && (v10 == 6 || v10 == 2) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v19 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v23 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
      v63 = 65;
      goto LABEL_57;
    }
  }
  else
  {
    v11 = 0;
    v10 = 0;
    v69 = 0;
  }
  v27 = W32GetUserSessionState(v9);
  RIMLockExclusive(v27 + 72);
  if ( rimObsCheckForRegistrationConflicts(a8, a5, v11, v10) )
  {
    Handle = (HANDLE)-1LL;
    KeEnterCriticalRegion();
    v29 = RawInputManagerInputObserverObjectCreate(a4, v30, v31, a4, &Handle);
    KeLeaveCriticalRegion();
    if ( v29 < 0 )
    {
      v28 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v46 = 0;
      }
      v76 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v46 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v47 = W32GetUserSessionState(WPP_GLOBAL_Control);
      v64 = 70;
    }
    else
    {
      Object = 0LL;
      v29 = RawInputManagerInputObserverObjectResolveHandle((char *)Handle, v32, a4, &Object);
      if ( v29 >= 0 )
      {
        v33 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (LOBYTE(v33) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          LOBYTE(v33) = 0;
        }
        v66 = (char)v33;
        v68 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v35 = Handle;
          v36 = W32GetUserSessionState(v33);
          v34 = Object;
          WPP_RECORDER_AND_TRACE_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v66,
            v68,
            *(_QWORD *)(v36 + 69400),
            4u,
            1u,
            0x42u,
            (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
            v35,
            Object);
        }
        else
        {
          v34 = Object;
        }
        *((_DWORD *)v34 + 18) = a4;
        *((_QWORD *)v34 + 12) = a1;
        *((_DWORD *)v34 + 26) = a2;
        *((_DWORD *)v34 + 27) = a5;
        *((_DWORD *)v34 + 28) = v11;
        *((_DWORD *)v34 + 29) = v69;
        *((_DWORD *)v34 + 30) = a8;
        v29 = rimConvertUserToKernelEventHandle(a3, (void **)v34 + 10);
        if ( v29 < 0 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v42 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v42 = 0;
          }
          v75 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v43 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v44) = v75;
            LOBYTE(v45) = v42;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v45,
              v44,
              *(_QWORD *)(v43 + 69400),
              3,
              1,
              68,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
        }
        else
        {
          LOBYTE(v37) = 1;
          v29 = rimObsStartStopDeviceRead(v34, v37);
          if ( v29 < 0 )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v38 = 0;
            }
            v74 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v39 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v40) = v74;
              LOBYTE(v41) = v38;
              WPP_RECORDER_AND_TRACE_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v41,
                v40,
                *(_QWORD *)(v39 + 69400),
                3,
                1,
                67,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
                v29);
            }
          }
        }
        ObfDereferenceObject(v34);
        goto LABEL_89;
      }
      v28 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v46 = 0;
      }
      v76 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v46 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v47 = W32GetUserSessionState(WPP_GLOBAL_Control);
      v64 = 69;
    }
    LOBYTE(v49) = v76;
    LOBYTE(v48) = v46;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v48,
      v49,
      *(_QWORD *)(v47 + 69400),
      3,
      1,
      v64,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
LABEL_89:
    if ( v29 < 0 )
    {
      if ( Handle != (HANDLE)-1LL )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v51 = 0;
        }
        v77 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v52 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v53) = v77;
          LOBYTE(v54) = v51;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v54,
            v53,
            *(_QWORD *)(v52 + 69400),
            3,
            1,
            72,
            (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
        }
        ObCloseHandle(Handle, a4);
      }
    }
    else if ( a4 )
    {
      v50 = a9;
      v28 = (CTouchProcessor *)MmUserProbeAddress;
      if ( (unsigned __int64)a9 >= MmUserProbeAddress )
        v50 = (_QWORD *)MmUserProbeAddress;
      *v50 = Handle;
    }
    else
    {
      v28 = (CTouchProcessor *)a9;
      *a9 = Handle;
    }
    goto LABEL_119;
  }
  v29 = -1073741823;
LABEL_119:
  v55 = W32GetUserSessionState(v28);
  RIMUnlockExclusive(v55 + 72);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v56 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v56 = 0;
  }
  v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v56 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v58 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v59) = v57;
    LOBYTE(v60) = v56;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v60,
      v59,
      *(_QWORD *)(v58 + 69400),
      4,
      1,
      73,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v29);
  }
  return (unsigned int)v29;
}
