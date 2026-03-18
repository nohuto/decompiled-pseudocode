/*
 * XREFs of ?NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z @ 0x14027B978
 * Callers:
 *     ?VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021DC20 (-VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1403CFB5C (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall DXGDODPRESENT::NotifyHostMonitorPowerState(DXGDODPRESENT *this, unsigned int a2, char a3)
{
  BLTQUEUE *v3; // rcx

  if ( a2 < *(_DWORD *)this )
  {
    v3 = (BLTQUEUE *)(*((_QWORD *)this + 1) + 2968LL * a2);
    *((_BYTE *)v3 + 624) = a3;
    *((_BYTE *)v3 + 609) = 1;
    BLTQUEUE::IssueCommand(v3);
  }
}
