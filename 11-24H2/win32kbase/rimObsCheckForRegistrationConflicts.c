/*
 * XREFs of rimObsCheckForRegistrationConflicts @ 0x1401EE888
 * Callers:
 *     rimObsAddInputObserver @ 0x1401EEEE4 (rimObsAddInputObserver.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1401F1268 (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1400D60E0 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsIsObserverTarget @ 0x1401EEB94 (rimObsIsObserverTarget.c)
 *     WPP_RECORDER_AND_TRACE_SF_ss @ 0x1401EED68 (WPP_RECORDER_AND_TRACE_SF_ss.c)
 */

char __fastcall rimObsCheckForRegistrationConflicts(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char v4; // bp
  char v8; // r14
  __int64 UserSessionState; // rbx
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *i; // rdi
  _QWORD *v14; // r13
  const char *v15; // rax
  char v16; // di
  bool v17; // si
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  char v22; // r14
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // rax
  bool v26; // di
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // r9
  const char *v31; // rax
  int v32; // [rsp+20h] [rbp-88h]
  int v33; // [rsp+28h] [rbp-80h]
  int v34; // [rsp+30h] [rbp-78h]
  int v35; // [rsp+38h] [rbp-70h]
  char v36; // [rsp+60h] [rbp-48h]
  __int64 v37; // [rsp+68h] [rbp-40h]
  int v38; // [rsp+B0h] [rbp+8h]
  char v39; // [rsp+B8h] [rbp+10h]

  v4 = 0;
  v8 = a1;
  if ( a2 > 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 687);
  UserSessionState = W32GetUserSessionState(a1);
  RIMLockExclusive(UserSessionState + 56);
  v10 = v8 & 2;
  v38 = v10;
  for ( i = *(_QWORD **)(W32GetUserSessionState(v11) + 152); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(W32GetUserSessionState(v12) + 152) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v16 = 0;
      }
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(v18 + 69400),
          4,
          1,
          38,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      v4 = 1;
      goto LABEL_19;
    }
    v14 = i - 2;
    if ( !v10 )
      break;
    if ( (unsigned int)rimObsIsObserverTarget(i - 2, a2, a3, a4) )
    {
      v15 = "existing observer exists";
      goto LABEL_21;
    }
LABEL_9:
    ;
  }
  if ( (v14[15] & 2) == 0 || !(unsigned int)rimObsIsObserverTarget(i - 2, a2, a3, a4) )
    goto LABEL_9;
  v15 = "existing exclusive observer exists";
LABEL_21:
  v37 = (__int64)v15;
  v22 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
  {
    v23 = 0;
  }
  v39 = v23;
  v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetProcessId((PEPROCESS)v14[4]);
    PsGetThreadId((PETHREAD)v14[5]);
    v25 = W32GetUserSessionState(v24);
    WPP_RECORDER_AND_TRACE_SF_qdd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v39,
      v36,
      *(_QWORD *)(v25 + 69400),
      3u,
      1u,
      0x24u,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
  {
    v22 = 0;
  }
  v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v28) = v26;
    LOBYTE(v29) = v22;
    v30 = *(_QWORD *)(v27 + 69400);
    v31 = "exclusive";
    if ( !v38 )
      v31 = "shared";
    WPP_RECORDER_AND_TRACE_SF_ss(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v28,
      v30,
      v32,
      v33,
      v34,
      v35,
      (__int64)v31,
      v37);
  }
LABEL_19:
  RIMUnlockExclusive(UserSessionState + 56);
  return v4;
}
