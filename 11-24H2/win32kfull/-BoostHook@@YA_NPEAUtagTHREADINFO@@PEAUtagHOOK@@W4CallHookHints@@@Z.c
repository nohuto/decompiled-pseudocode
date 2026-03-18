/*
 * XREFs of ?BoostHook@@YA_NPEAUtagTHREADINFO@@PEAUtagHOOK@@W4CallHookHints@@@Z @ 0x1402832C8
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDd @ 0x14017D758 (WPP_RECORDER_AND_TRACE_SF_DDd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDDd @ 0x1401848C4 (WPP_RECORDER_AND_TRACE_SF_dDDd.c)
 *     ?GetHookPriorityFloor@@YA?AW4tagThreadPriorityFloor@@PEBUtagHOOK@@@Z @ 0x14019A134 (-GetHookPriorityFloor@@YA-AW4tagThreadPriorityFloor@@PEBUtagHOOK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall BoostHook(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int HookPriorityFloor; // eax
  __int64 v5; // r9
  char v6; // r15
  unsigned int v7; // edi
  char v8; // r8
  bool v9; // bp
  __int64 v10; // rdx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rdx
  char v21; // bl
  bool v22; // si
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  char v26; // al
  bool v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  unsigned int v32; // [rsp+60h] [rbp-48h]
  char v33; // [rsp+B8h] [rbp+10h]
  char v34; // [rsp+B8h] [rbp+10h]
  bool v35; // [rsp+C8h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 16);
  if ( (dword_140353514[*(int *)(a2 + 48)] & 0x20) == 0 )
    return 0;
  HookPriorityFloor = GetHookPriorityFloor(a2);
  v32 = HookPriorityFloor;
  v6 = 1;
  v7 = HookPriorityFloor;
  if ( (v8 & 1) == 0 && !(unsigned __int8)tagTHREADINFO::IsPriorityFloorSet(v5, HookPriorityFloor) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v6 = 0;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      PsGetThreadId(*(PETHREAD *)v2);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)(v2 + 464), v10);
      LOBYTE(v12) = v9;
      LOBYTE(v13) = v6;
      WPP_RECORDER_AND_TRACE_SF_DDd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69416));
    }
    return 0;
  }
  if ( (*(_DWORD *)(a2 + 64) & 0x2000) != 0 )
  {
    if ( !(unsigned __int8)tagTHREADINFO::IsPriorityFloorSet(v2, v7) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1534);
    if ( *(_BYTE *)(a2 + 96) == 0xFF )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1535);
    ++*(_BYTE *)(a2 + 96);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
      || (v26 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v26 = 0;
    }
    v34 = v26;
    v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      PsGetThreadId(*(PETHREAD *)v2);
      v29 = W32GetUserSessionState(*(_QWORD *)(v2 + 464), v28);
      LOBYTE(v30) = v27;
      LOBYTE(v31) = v34;
      WPP_RECORDER_AND_TRACE_SF_dDDd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v31,
        v30,
        *(_QWORD *)(v29 + 69416));
    }
  }
  else
  {
    if ( *(_BYTE *)(a2 + 96) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1481);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
      || (v15 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v15 = 0;
    }
    v33 = v15;
    v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      PsGetThreadId(*(PETHREAD *)v2);
      v17 = W32GetUserSessionState(*(_QWORD *)(v2 + 464), v16);
      LOBYTE(v18) = v35;
      LOBYTE(v19) = v33;
      WPP_RECORDER_AND_TRACE_SF_DDd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v19,
        v18,
        *(_QWORD *)(v17 + 69416));
      v7 = v32;
    }
    *(_DWORD *)(a2 + 64) |= 0x2000u;
    *(_BYTE *)(a2 + 96) = 1;
    if ( !(unsigned __int8)tagTHREADINFO::IsPriorityFloorSet(v2, v7) )
    {
      if ( (unsigned __int8)tagTHREADINFO::IsPriorityFloorSet(v2, v7) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1525);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
        || (v21 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v21 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20);
        LOBYTE(v24) = v22;
        LOBYTE(v25) = v21;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v25,
          v24,
          *(_QWORD *)(v23 + 69416),
          4,
          5,
          41,
          (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids);
      }
      tagTHREADINFO::SetPriorityFloor(v2, v7);
    }
  }
  return 1;
}
