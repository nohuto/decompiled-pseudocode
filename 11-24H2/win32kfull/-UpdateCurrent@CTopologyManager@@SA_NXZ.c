/*
 * XREFs of ?UpdateCurrent@CTopologyManager@@SA_NXZ @ 0x1402175E8
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x14020A840 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     EditionUpdateCurrentMonitorTopology @ 0x1402175D0 (EditionUpdateCurrentMonitorTopology.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400688A4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ @ 0x1401CBA98 (-LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ.c)
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x14024D2AC (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 *     ?SetTopologyId@CMonitorTopology@@QEAAXXZ @ 0x1402AB6EC (-SetTopologyId@CMonitorTopology@@QEAAXXZ.c)
 */

char CTopologyManager::UpdateCurrent(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  CMonitorTopology *TopologySnapshot; // rbx
  bool v3; // bl
  bool v4; // di
  __int64 v5; // rax
  int v6; // r8d
  int v7; // edx
  __int64 UserSessionState; // rax
  CMonitorTopology *v10; // rdi

  TopologySnapshot = CMonitorTopology::CreateTopologySnapshot();
  if ( TopologySnapshot )
  {
    UserSessionState = W32GetUserSessionState(v1, v0);
    v10 = *(CMonitorTopology **)(UserSessionState + 71480);
    *(_QWORD *)(UserSessionState + 71480) = TopologySnapshot;
    CMonitorTopology::SetTopologyId(TopologySnapshot);
    if ( v10 )
    {
      CMonitorTopology::LogComparisonToCurrent(v10);
      CMonitorTopology::Release(v10);
    }
    return 1;
  }
  else
  {
    v3 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v5 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v0);
      LOBYTE(v6) = v4;
      LOBYTE(v7) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v7,
        v6,
        *(_QWORD *)(v5 + 69416),
        2,
        7,
        29,
        (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids);
    }
    return 0;
  }
}
