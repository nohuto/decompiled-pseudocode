/*
 * XREFs of ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x140282E18
 * Callers:
 *     ?CleanupWorker@BLTQUEUE@@AEAAXXZ @ 0x14028189C (-CleanupWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x140282E60 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14018A170 (-StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1402822D0 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 */

void __fastcall BLTQUEUE::ResetInternal(BLTQUEUE *this)
{
  BLTQUEUE::DiscardPendingPresent(this);
  BLTQUEUE::StopVSync((__int64)this, 0LL, 11LL);
  if ( (*((_DWORD *)this + 268) & 1) != 0 )
  {
    KeDetachProcess();
    *((_DWORD *)this + 268) &= ~1u;
  }
}
