/*
 * XREFs of ?Release@CMonitorTopology@@QEAAXXZ @ 0x1401559AC
 * Callers:
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 *     ?_lambda_invoker_cdecl_@_lambda_fd77beed04b6b1a39114e0f43ae1b0ce_@@CA@PEAVCMonitorTopology@@@Z @ 0x1401AB8F0 (-_lambda_invoker_cdecl_@_lambda_fd77beed04b6b1a39114e0f43ae1b0ce_@@CA@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall CMonitorTopology::Release(CMonitorTopology *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
    GreDeleteFastMutex((char *)this);
}
