/*
 * XREFs of ?HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ @ 0x14027B7D8
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14027A168 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14027BB3C (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x140305D64 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1403C5B84 (-StopVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 */

void __fastcall BLTQUEUE::HostMonitorPowerStateWorker(BLTQUEUE *this)
{
  BLTQUEUE::StopVSync(this, 0LL, 15LL);
  BLTQUEUE::RecreateVsyncSource(this, 0LL, 15LL);
  *((_BYTE *)this + 609) = 0;
  BLTQUEUE::FinishCommand(this, 0);
}
