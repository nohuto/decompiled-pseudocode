/*
 * XREFs of ??1CRecalcState@@UEAA@XZ @ 0x1401E4300
 * Callers:
 *     ??_GCRecalcState@@UEAAPEAXI@Z @ 0x1401E42C0 (--_GCRecalcState@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400688A4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall CRecalcState::~CRecalcState(CMonitorTopology **this)
{
  CMonitorTopology *v2; // rcx

  *this = (CMonitorTopology *)&CRecalcState::`vftable';
  CMonitorTopology::Release(this[2]);
  v2 = this[1];
  if ( v2 )
    (**(void (__fastcall ***)(CMonitorTopology *, __int64))v2)(v2, 1LL);
}
