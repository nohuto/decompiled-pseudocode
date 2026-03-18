/*
 * XREFs of ?WaitForSentIoToComplete@FxIoTarget@@MEAAXXZ @ 0x140017A20
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1400167FC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 */

void __fastcall FxIoTarget::WaitForSentIoToComplete(FxIoTarget *this)
{
  FxCREvent::EnterCRAndWaitAndLeave(&this->m_SentIoEvent);
}
