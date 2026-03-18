/*
 * XREFs of ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x14027BDBC
 * Callers:
 *     ?CleanupWorker@BLTQUEUE@@AEAAXXZ @ 0x14027AC74 (-CleanupWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x14027BE04 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x140185084 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1403C5B84 (-StopVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 */

void __fastcall BLTQUEUE::ResetInternal(BLTQUEUE *this)
{
  BLTQUEUE::DiscardPendingPresent(this);
  BLTQUEUE::StopVSync(this, 0LL, 11LL);
  if ( (*((_DWORD *)this + 250) & 1) != 0 )
  {
    KeDetachProcess();
    *((_DWORD *)this + 250) &= ~1u;
  }
}
