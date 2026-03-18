/*
 * XREFs of _anonymous_namespace_::CanSetForegroundWindow @ 0x140231B18
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     IsNonImmersiveBand @ 0x140148FEC (IsNonImmersiveBand.c)
 *     IsDebuggerAttached @ 0x1401566A4 (IsDebuggerAttached.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x14016DFE0 (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x14018817C (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     IsForegroundLocked @ 0x1401886A0 (IsForegroundLocked.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140189B00 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019552C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1402753D0 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 */

__int64 __fastcall anonymous_namespace_::CanSetForegroundWindow(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rbp
  __int64 v7; // r14
  char v8; // bp
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rdx
  bool v14; // di
  bool v15; // bp
  int v16; // edx
  int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  char v38; // r14
  bool v39; // r15
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  int v43; // eax
  __int64 v45; // rcx
  char v46; // r15
  __int64 v47; // rdx
  bool v48; // r14
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  __int64 v52; // r9
  const char *v53; // rax
  int v54; // eax
  __int16 v55; // [rsp+30h] [rbp-38h]

  v2 = a2;
  v6 = PtiCurrent((__int64)a1, a2);
  v7 = *((_QWORD *)v6 + 58);
  if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) == 15 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v8 = 0;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        2,
        36,
        (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
    }
    return 1LL;
  }
  if ( *(int *)(v7 + 12) < 0 )
  {
    *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18896) = 0LL;
    v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 2LL;
    v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13) + 69416);
    v55 = 37;
LABEL_87:
    LOBYTE(v17) = v15;
    LOBYTE(v16) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v16,
      v17,
      v18,
      4,
      2,
      v55,
      (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
    return 2LL;
  }
  v20 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19200);
  if ( *((_QWORD *)v6 + 62) == v20 && v2 == 31 )
  {
    *(_QWORD *)(W32GetUserSessionState(v20, v19) + 18896) = 0LL;
    v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 2LL;
    v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21) + 69416);
    v55 = 38;
    goto LABEL_87;
  }
  if ( (unsigned int)IsCurrentProcessDwm(v20) && !IsGhostWindowClass(a1, v22) )
  {
    v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 2LL;
    v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22) + 69416);
    v55 = 39;
    goto LABEL_87;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState(v23, v22) + 18908) )
  {
    if ( (unsigned int)IsDebuggerAttached((__int64 *)v7) && IsNonImmersiveBand((__int64)a1) )
    {
      v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v14 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 2LL;
      v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26) + 69416);
      v55 = 40;
      goto LABEL_87;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v27, v26) + 18944) )
    {
      v25 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 18944);
      if ( *(_QWORD *)(v25 + 128) )
      {
        v28 = W32GetUserSessionState(v25, v24);
        if ( (unsigned int)IsDebuggerAttached(*(__int64 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 18944) + 128LL)
                                                                      + 16LL)
                                                          + 464LL)) )
        {
          if ( IsNonImmersiveBand((__int64)a1) )
          {
            v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
               && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
               && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
            v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( !v14 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              return 2LL;
            v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24) + 69416);
            v55 = 41;
            goto LABEL_87;
          }
        }
      }
    }
  }
  v29 = W32GetUserSessionState(v25, v24);
  v14 = 1;
  if ( v6 == (struct tagTHREADINFO *)GetProp((__int64)a1, *(unsigned __int16 *)(v29 + 41418), 1u) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v14 = 0;
    }
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 2LL;
    v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v30) + 69416);
    v55 = 42;
    goto LABEL_87;
  }
  if ( v7 == *(_QWORD *)(W32GetUserSessionState(v31, v30) + 62864) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v14 = 0;
    }
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 2LL;
    v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v32) + 69416);
    v55 = 43;
    goto LABEL_87;
  }
  if ( !(unsigned int)IsForegroundLocked(v33, v32) )
  {
    if ( (unsigned int)IsDesktopApp(*((_QWORD *)v6 + 58)) )
    {
      LOBYTE(v34) = 1;
      if ( (unsigned int)LastWokenThread::Test(v7, v34) == 3 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          v14 = 0;
        }
        v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v14 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 2LL;
        v18 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v35) + 69416);
        v55 = 44;
        goto LABEL_87;
      }
    }
  }
  if ( !(unsigned __int8)anonymous_namespace_::CheckImmersiveForegroundAccess(a1, v2) )
  {
    v37 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v38 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v38 = 0;
    }
    v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v38 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v40 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v36);
      LOBYTE(v41) = v39;
      LOBYTE(v42) = v38;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v42,
        v41,
        *(_QWORD *)(v40 + 69416),
        4,
        2,
        45,
        (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
    }
    if ( *((_QWORD *)v6 + 62) == *(_QWORD *)(W32GetUserSessionState(v37, v36) + 19200) )
    {
      LOBYTE(v43) = IAMThreadAccessGranted(v6);
      if ( v43 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1694LL);
    }
    return 1LL;
  }
  v46 = anonymous_namespace_::CheckCanonicalForegroundAccess(v2, v36);
  v47 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v45 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v45 & 2) == 0)
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v14 = 0;
  }
  v48 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v49 = W32GetUserSessionState(v45, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v50) = v48;
    LOBYTE(v51) = v14;
    v52 = *(_QWORD *)(v49 + 69416);
    v53 = "HasRight";
    if ( !v46 )
      v53 = "NoRights";
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v51,
      v50,
      v52,
      4,
      2,
      46,
      (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids,
      (__int64)v53);
  }
  if ( v46 )
    return 2LL;
  if ( *((_QWORD *)v6 + 62) == *(_QWORD *)(W32GetUserSessionState(v45, v47) + 19200) )
  {
    LOBYTE(v54) = IAMThreadAccessGranted(v6);
    if ( v54 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1712LL);
  }
  return 0LL;
}
