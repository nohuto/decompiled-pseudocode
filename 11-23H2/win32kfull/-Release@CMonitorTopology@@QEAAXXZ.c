/*
 * XREFs of ?Release@CMonitorTopology@@QEAAXXZ @ 0x1C005ADFC
 * Callers:
 *     ?UpdateCurrent@CTopologyManager@@SAXXZ @ 0x1C005A528 (-UpdateCurrent@CTopologyManager@@SAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CMonitorTopology::Release(CMonitorTopology *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
    Win32FreePool(this);
}
