/*
 * XREFs of ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x14008F084
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x14008E23C (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x14025ABEC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?MonitorIsPhysicalMonitor@@YAEPEAUHDXGMONITOR__@@@Z @ 0x14026ED8C (-MonitorIsPhysicalMonitor@@YAEPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorGetLinkInfoFromMonitor@@YAJPEAUHDXGMONITOR__@@AEAU_DXGK_MONITORLINKINFO@@@Z @ 0x14028E91C (-MonitorGetLinkInfoFromMonitor@@YAJPEAUHDXGMONITOR__@@AEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1403DCCE4 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetConnectedMonitor(
        struct _DXGK_MONITORLINKINFO *this,
        struct HDXGMONITOR__ *a2)
{
  int v2; // r8d

  v2 = `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId;
  this[11].UsageHints.Value = `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId;
  `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId = v2 + 1;
  DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer((DMMVIDEOPRESENTTARGET *)this);
  *(_BYTE *)(*(_QWORD *)&this[44].DitheringSupport.0 + 168LL) = 14;
  HIBYTE(this[34].Capabilities.Value) = MonitorIsPhysicalMonitor(a2);
  *(_QWORD *)&this[9].Capabilities.0 = a2;
  if ( !a2 || MonitorGetLinkInfoFromMonitor(a2, this + 46) < 0 )
  {
    *(_QWORD *)&this[46].UsageHints.0 = 0LL;
    this[46].DitheringSupport.Value = 0;
  }
}
