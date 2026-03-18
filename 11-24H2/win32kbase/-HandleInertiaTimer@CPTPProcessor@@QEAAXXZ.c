/*
 * XREFs of ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x14014D0A4
 * Callers:
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x140148E60 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14014D108 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 */

void __fastcall CPTPProcessor::HandleInertiaTimer(struct tagPOINT *this)
{
  CInertiaManager *v2; // rcx

  if ( LOBYTE(this[49].x) && (this[48].y & 1) != 0 )
  {
    W32GetUserSessionState(this);
    CInertiaManager::PostInertiaMessage(v2, 0x23Bu, (const struct INERTIA_INFO_INTERNAL *)&this[22], this[46], this[47]);
  }
  LOBYTE(this[49].x) = 0;
}
