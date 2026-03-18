/*
 * XREFs of ?ConfirmFrame@CTokenManager@@UEAAXAEBUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x14009A1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeFlipAwayFence@CAdapterCollection@@QEAAX_K@Z @ 0x14009A7B0 (-FreeFlipAwayFence@CAdapterCollection@@QEAAX_K@Z.c)
 */

void __fastcall CTokenManager::ConfirmFrame(CTokenManager *this, const struct tagCOMPOSITION_CONFIRM_FRAME_INFO *a2)
{
  if ( *((_QWORD *)a2 + 4) )
    CAdapterCollection::FreeFlipAwayFence((CTokenManager *)((char *)this + 112), (unsigned __int64)a2);
}
