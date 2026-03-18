/*
 * XREFs of ?PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402C9E14
 * Callers:
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CC61C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CCB4C (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CCFF0 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1400315C4 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ??$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z @ 0x1402C8F48 (--$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z.c)
 *     ?RemoveEntry@CInterceptWindowProp@@AEAAXPEAUSystemOperationActionData@1@@Z @ 0x1402CA34C (-RemoveEntry@CInterceptWindowProp@@AEAAXPEAUSystemOperationActionData@1@@Z.c)
 */

char __fastcall PopFrontSystemOperationData(struct tagWND *a1, struct AdvancedWindowPos::SystemOperationData *a2)
{
  bool v3; // r12
  CInterceptWindowProp *v5; // rsi
  __int64 v6; // rdx
  CInterceptWindowProp *v7; // rcx
  __int64 v8; // rdx
  char v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  char v15; // r14
  char v16; // bp
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  char v22; // di
  bool v23; // si
  __int64 v24; // rbx
  __int64 UserSessionState; // rax
  int v26; // r8d
  int v27; // edx
  CInterceptWindowProp *v29; // [rsp+A0h] [rbp+18h] BYREF

  v3 = 0;
  v29 = 0LL;
  if ( !CWindowProp::GetProp<CInterceptWindowProp>((__int64)a1, (__int64 *)&v29) )
    return 0;
  v5 = v29;
  v6 = *((_QWORD *)v29 + 4);
  if ( (CInterceptWindowProp *)v6 == (CInterceptWindowProp *)((char *)v29 + 32) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
    {
      v22 = 0;
    }
    v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v24 = *(_QWORD *)a1;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
      LOBYTE(v26) = v23;
      LOBYTE(v27) = v22;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v27,
        v26,
        *(_QWORD *)(UserSessionState + 69416),
        3,
        4,
        25,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        v24);
    }
    return 0;
  }
  v7 = v29;
  *(_OWORD *)a2 = *(_OWORD *)(v6 + 16);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(v6 + 32);
  *((_DWORD *)a2 + 8) = *(_DWORD *)(v6 + 48);
  CInterceptWindowProp::RemoveEntry(v7, (struct CInterceptWindowProp::SystemOperationActionData *)v6);
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0 )
  {
    v3 = *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v9 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v9 = 0;
  }
  if ( v3 || v9 )
  {
    v10 = *(_QWORD *)a1;
    v11 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
    LOBYTE(v12) = v9;
    LOBYTE(v13) = v3;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(v11 + 69416),
      5,
      4,
      26,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      v10);
  }
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
    && !(*((_DWORD *)v5 + 12) + *((_DWORD *)v5 + 13)) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v15 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v15 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v16 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v16 = 0;
    }
    if ( v15 || v16 )
    {
      v17 = *(_QWORD *)a1;
      v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
      LOBYTE(v19) = v16;
      LOBYTE(v20) = v15;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v20,
        v19,
        *(_QWORD *)(v18 + 69416),
        5,
        4,
        27,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        v17);
    }
    CWindowProp::RemoveAndDeleteProp(v5);
  }
  return 1;
}
