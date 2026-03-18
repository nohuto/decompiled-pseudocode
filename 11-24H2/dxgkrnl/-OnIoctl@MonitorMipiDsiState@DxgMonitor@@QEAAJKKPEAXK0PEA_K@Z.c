/*
 * XREFs of ?OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14027EE40
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z @ 0x140275EC0 (-_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z.c)
 * Callees:
 *     ?_DsiReset@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x14027EED0 (-_DsiReset@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x14027F154 (-_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_QueryMipiDsiCaps@MonitorMipiDsiState@DxgMonitor@@AEBAJKPEAXPEA_K@Z @ 0x14027F5AC (-_QueryMipiDsiCaps@MonitorMipiDsiState@DxgMonitor@@AEBAJKPEAXPEA_K@Z.c)
 */

int __fastcall DxgMonitor::MonitorMipiDsiState::OnIoctl(
        DxgMonitor::MonitorMipiDsiState *this,
        int a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned __int64 *a7)
{
  int v7; // edx
  int v8; // edx

  v7 = a2 - 2298880;
  if ( !v7 )
    return DxgMonitor::MonitorMipiDsiState::_QueryMipiDsiCaps(this, a5, a6, a7);
  v8 = v7 - 4;
  if ( !v8 )
    return DxgMonitor::MonitorMipiDsiState::_DsiTransmission(this, a3, a4, a5, a6, a7);
  if ( v8 == 4 )
    return DxgMonitor::MonitorMipiDsiState::_DsiReset(this, a3, a4, a5, a6, a7);
  return -1073741637;
}
