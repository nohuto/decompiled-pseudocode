/*
 * XREFs of ?RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402CA394
 * Callers:
 *     NtUserApplyWindowAction @ 0x140292770 (NtUserApplyWindowAction.c)
 *     ?xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z @ 0x1402CC99C (-xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1400315C4 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ??$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z @ 0x1402C8F48 (--$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z.c)
 *     ?RemoveEntry@CInterceptWindowProp@@AEAAXPEAUSystemOperationActionData@1@@Z @ 0x1402CA34C (-RemoveEntry@CInterceptWindowProp@@AEAAXPEAUSystemOperationActionData@1@@Z.c)
 */

void __fastcall WindowActions::RemoveLastSystemOperationData(WindowActions *this, struct tagWND *a2)
{
  __int64 v3; // rdx
  CInterceptWindowProp *v4; // rdi
  char v5; // si
  char v6; // r14
  char v7; // bp
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rdx
  char v13; // bp
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  CInterceptWindowProp *v18; // [rsp+88h] [rbp+10h] BYREF

  v18 = 0LL;
  if ( CWindowProp::GetProp<CInterceptWindowProp>((__int64)this, (__int64 *)&v18) )
  {
    v4 = v18;
    if ( *((CInterceptWindowProp **)v18 + 4) != (CInterceptWindowProp *)((char *)v18 + 32) )
      CInterceptWindowProp::RemoveEntry(v18, *((struct CInterceptWindowProp::SystemOperationActionData ****)v18 + 5));
    v5 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v6 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v6 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v7 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v7 = 0;
    }
    if ( v6 || v7 )
    {
      v8 = *(_QWORD *)this;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v3);
      LOBYTE(v10) = v7;
      LOBYTE(v11) = v6;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69416),
        5,
        4,
        28,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        v8);
    }
    if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
      && !(*((_DWORD *)v4 + 12) + *((_DWORD *)v4 + 13)) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v13 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v5 = 0;
      }
      if ( v13 || v5 )
      {
        v14 = *(_QWORD *)this;
        v15 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
        LOBYTE(v16) = v5;
        LOBYTE(v17) = v13;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v17,
          v16,
          *(_QWORD *)(v15 + 69416),
          5,
          4,
          29,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
          v14);
      }
      CWindowProp::RemoveAndDeleteProp(v4);
    }
  }
}
