/*
 * XREFs of ?SetPendingWorkAreaMove@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402CB394
 * Callers:
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402CEA84 (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x1402C9BEC (-GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z.c)
 */

void __fastcall CInterceptWindowProp::SetPendingWorkAreaMove(struct tagWND *a1)
{
  struct CInterceptWindowProp *v2; // rax
  char v3; // di
  char v4; // si
  __int64 v5; // rbx
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  v2 = CInterceptWindowProp::GetOrCreate(a1);
  if ( v2 )
  {
    v3 = 1;
    *((_BYTE *)v2 + 56) = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v4 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v4 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v3 = 0;
    }
    if ( v4 || v3 )
    {
      v5 = *(_QWORD *)a1;
      UserSessionState = W32GetUserSessionState(0LL, *(_QWORD *)&WPP_GLOBAL_Control);
      LOBYTE(v7) = v3;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69416),
        5,
        4,
        18,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        v5);
    }
  }
}
