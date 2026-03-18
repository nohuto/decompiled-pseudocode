/*
 * XREFs of ?GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z @ 0x140206730
 * Callers:
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140205E28 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitorData@CMonitorTopology@@@Z @ 0x1402C2A38 (-GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitor.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402C5D00 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C68BC (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ContainsHash@MonitorId@CMonitorTopology@@QEBA_NAEBUD3DKMT_HASH@@PEAI@Z @ 0x14021ED08 (-ContainsHash@MonitorId@CMonitorTopology@@QEBA_NAEBUD3DKMT_HASH@@PEAI@Z.c)
 */

const struct CMonitorTopology::MonitorData *__fastcall CMonitorTopology::GetCurrentMonitorDataFromId(
        const struct CMonitorTopology::MonitorId *a1,
        __int64 a2)
{
  char v2; // r12
  bool v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 i; // rdi
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 j; // rdi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // [rsp+70h] [rbp+8h] BYREF

  v2 = a2;
  if ( !*((_DWORD *)a1 + 2) )
  {
    v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69416),
        3,
        7,
        10,
        (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids);
    }
    return 0LL;
  }
  v10 = W32GetUserSessionState(a1, a2);
  v11 = *(_QWORD *)(v10 + 71480)
      + 8
      * (*(unsigned int *)(*(_QWORD *)(v10 + 71480) + 8LL) + 8LL * *(unsigned int *)(*(_QWORD *)(v10 + 71480) + 8LL) + 2);
  if ( *(_DWORD *)(v11 + 56) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
    {
      v13 = *(_QWORD *)a1;
      v19 = 0;
      if ( CMonitorTopology::MonitorId::ContainsHash(
             (CMonitorTopology::MonitorId *)(v11 + 48),
             (const struct D3DKMT_HASH *)(v13 + 20 * i),
             &v19) )
      {
        if ( !v2 || !v19 )
          return (const struct CMonitorTopology::MonitorData *)v11;
        return 0LL;
      }
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(v10 + 71480) + 4LL) <= 1u )
    return 0LL;
  v14 = 0LL;
LABEL_21:
  if ( (unsigned int)v14 >= *((_DWORD *)a1 + 2) )
    return 0LL;
  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
  {
    v16 = *(_QWORD *)(v10 + 71480);
    if ( (unsigned int)j >= *(_DWORD *)(v16 + 4) )
    {
      v14 = (unsigned int)(v14 + 1);
      goto LABEL_21;
    }
    v17 = v16 + 8 * ((unsigned int)j + 8 * j + 2);
    if ( *(_DWORD *)(v17 + 56) )
    {
      if ( v17 != v11 )
      {
        v18 = *(_QWORD *)a1;
        v19 = 0;
        if ( CMonitorTopology::MonitorId::ContainsHash(
               (CMonitorTopology::MonitorId *)(v17 + 48),
               (const struct D3DKMT_HASH *)(v18 + 20 * v14),
               &v19) )
        {
          break;
        }
      }
    }
  }
  if ( v2 && v19 )
    return 0LL;
  return (const struct CMonitorTopology::MonitorData *)v17;
}
