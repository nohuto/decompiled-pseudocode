/*
 * XREFs of ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1401CB0A8
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400688A4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ?Cancel@CRapidHpdInfo@@SAPEAVCMonitorTopology@@XZ @ 0x1401CB108 (-Cancel@CRapidHpdInfo@@SAPEAVCMonitorTopology@@XZ.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1401CB20C (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 */

void __fastcall DesktopRecalc::OnWorkAreaChanged(DesktopRecalc *this, struct CMonitorTopology *a2)
{
  DesktopRecalc *v3; // rax
  const struct _GUID *v4; // r9
  CMonitorTopology *v5; // rdi
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v6);
  v3 = CRapidHpdInfo::Cancel();
  v5 = v3;
  if ( v3 )
    this = v3;
  DesktopRecalc::StartRecalc(0LL, this, 0LL, v4);
  if ( v5 )
    CMonitorTopology::Release(v5);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v6);
}
