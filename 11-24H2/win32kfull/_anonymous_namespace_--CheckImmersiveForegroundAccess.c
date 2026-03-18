/*
 * XREFs of _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1402753D0
 * Callers:
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x140187F98 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x140231B18 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x140275A1C (_anonymous_namespace_--FAllowForegroundActivate.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsImmersiveBand @ 0x14014E660 (IsImmersiveBand.c)
 *     PtiKbdFromQ @ 0x1401534FC (PtiKbdFromQ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall anonymous_namespace_::CheckImmersiveForegroundAccess(__int64 a1, char a2)
{
  __int64 CurrentProcessWin32Process; // rax
  _DWORD *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // r15
  char v9; // di
  bool v10; // r15
  int v11; // ebx
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  char v15; // si
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // cl
  char v19; // al
  char v20; // bl
  bool v21; // zf
  __int64 v22; // rax
  unsigned int v23; // edi
  __int64 v24; // r13
  unsigned int v25; // r12d
  unsigned int CurrentWin32kSessionId; // eax
  bool v27; // r15
  int v28; // ebx
  int v29; // edi
  __int64 UserSessionState; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // edi
  unsigned int v37; // ebx
  unsigned int v38; // eax
  bool v39; // di
  int v40; // edx
  int v41; // r8d
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  char v47; // bl
  bool v48; // di
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  __int16 v52; // [rsp+30h] [rbp-48h]
  int v53; // [rsp+40h] [rbp-38h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = (_DWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v5 = (_DWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v8 = (unsigned int)IsDesktopApp(v5) != 0;
  if ( (v5[204] & 0x100LL) == 0 )
  {
    v15 = 1;
    if ( v5[219] )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(v5) )
      {
        v18 = a2;
        v19 = a2 | 1;
        v20 = a2 & 0xFE;
        v21 = (v18 & 8) == 0;
        v17 = 16LL;
        if ( !v21 )
          v20 = v19;
        if ( (v20 & 0x10) != 0 )
          a2 = v20 | 2;
        else
          a2 = v20 & 0xFD;
      }
      if ( (a2 & 1) == 0 )
      {
        v22 = *(_QWORD *)(a1 + 16);
        v23 = v5[219];
        v24 = *(_QWORD *)(v22 + 464);
        v25 = *(_DWORD *)(v24 + 876);
        if ( v23 != v25 )
        {
          CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
          if ( !(unsigned __int8)SeIsParentOfChildAppContainer(CurrentWin32kSessionId, v23, v25) )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
            {
              v15 = 0;
            }
            v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v28 = *(_DWORD *)(v24 + 56);
              v29 = v5[14];
              UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
              LOBYTE(v31) = v27;
              LOBYTE(v32) = v15;
              WPP_RECORDER_AND_TRACE_SF_Dd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v32,
                v31,
                *(_QWORD *)(UserSessionState + 69416),
                4,
                2,
                17,
                (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids,
                v29,
                v28);
            }
            return 0;
          }
        }
      }
      if ( (a2 & 2) != 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v5) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1273);
LABEL_42:
        if ( *(_QWORD *)(W32GetUserSessionState(v7, v6) + 18944) )
        {
          v44 = *(_QWORD *)(W32GetUserSessionState(v43, v6) + 18944);
          if ( *(_QWORD *)(v44 + 128) )
          {
            v45 = W32GetUserSessionState(v44, v6);
            if ( (unsigned int)IsImmersiveBand(*(_QWORD *)(*(_QWORD *)(v45 + 18944) + 128LL)) )
            {
              if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
                || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
              {
                v15 = 0;
              }
              v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                return 0;
              v53 = v5[14];
              v42 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6) + 69416);
              v52 = 19;
LABEL_52:
              LOBYTE(v41) = v39;
              LOBYTE(v40) = v15;
              WPP_RECORDER_AND_TRACE_SF_d(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v40,
                v41,
                v42,
                4,
                2,
                v52,
                (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids,
                v53);
              return 0;
            }
          }
        }
LABEL_54:
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v47 = 0;
        }
        v48 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v47 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
          LOBYTE(v50) = v48;
          LOBYTE(v51) = v47;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v51,
            v50,
            *(_QWORD *)(v49 + 69416),
            4,
            2,
            20,
            (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
        }
        return 1;
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18944) )
      {
        v33 = W32GetUserSessionState(v7, v6);
        v7 = *(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(v33 + 18944)) + 464);
        if ( *(_DWORD *)(v7 + 876) != v5[219] )
        {
          v34 = W32GetUserSessionState(v7, v6);
          v35 = PtiKbdFromQ(*(_QWORD *)(v34 + 18944));
          v36 = v5[219];
          v37 = *(_DWORD *)(*(_QWORD *)(v35 + 464) + 876LL);
          v38 = W32GetCurrentWin32kSessionId();
          if ( !(unsigned __int8)SeIsParentOfChildAppContainer(v38, v36, v37) )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
            {
              v15 = 0;
            }
            v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              return 0;
            v53 = v5[14];
            v42 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6) + 69416);
            v52 = 18;
            goto LABEL_52;
          }
        }
      }
    }
    if ( !v8 )
      goto LABEL_54;
    goto LABEL_42;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v9 = 0;
  }
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v11 = v5[14];
    v12 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
    LOBYTE(v13) = v10;
    LOBYTE(v14) = v9;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v14,
      v13,
      *(_QWORD *)(v12 + 69416),
      4,
      2,
      16,
      (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids,
      v11);
  }
  return 1;
}
