/*
 * XREFs of ?IsCancelled@FxRequest@@QEAAEXZ @ 0x140059A20
 * Callers:
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x140016AB0 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxRequest::IsCancelled(FxRequest *this)
{
  return this->m_Irp.m_Irp->Cancel || this->m_Canceled;
}
