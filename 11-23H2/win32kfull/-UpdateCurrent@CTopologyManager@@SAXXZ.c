/*
 * XREFs of ?UpdateCurrent@CTopologyManager@@SAXXZ @ 0x1C005A528
 * Callers:
 *     EditionUpdateCurrentMonitorTopology @ 0x1C005A510 (EditionUpdateCurrentMonitorTopology.c)
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C00A35C0 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x1C005A740 (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1C005ADFC (-Release@CMonitorTopology@@QEAAXXZ.c)
 */

void CTopologyManager::UpdateCurrent(void)
{
  int v0; // edx
  CMonitorTopology *TopologySnapshot; // rbx
  int v2; // r8d
  CMonitorTopology *v3; // rcx

  TopologySnapshot = CMonitorTopology::CreateTopologySnapshot();
  if ( TopologySnapshot )
  {
    v3 = qword_1C035E320;
    if ( qword_1C035E320 )
    {
      qword_1C035E320 = 0LL;
      CMonitorTopology::Release(v3);
    }
    qword_1C035E320 = TopologySnapshot;
  }
  else
  {
    LOBYTE(v0) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v0,
        v2,
        21,
        2,
        7,
        21,
        (__int64)&WPP_b503bcdc7a733346aed43161a8297e0b_Traceguids);
    }
  }
}
