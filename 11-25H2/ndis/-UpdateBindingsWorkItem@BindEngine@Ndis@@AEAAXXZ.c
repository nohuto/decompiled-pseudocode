/*
 * XREFs of ?UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ @ 0x14015D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015DC00 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 */

void __fastcall Ndis::BindEngine::UpdateBindingsWorkItem(Ndis::BindEngine *this)
{
  KPushLock *p_m_lock; // rdi
  KWaitEvent *m_removeReadyEvent; // rdi
  struct KLockThisExclusive v4; // [rsp+20h] [rbp-28h] BYREF

  p_m_lock = &this->m_lock;
  this->m_bindThread = KeGetCurrentThread();
  v4.m_Lock = &this->m_lock;
  KeEnterCriticalRegion();
  v4.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
  v4.m_State = Exclusive;
  Ndis::BindEngine::UpdateBindings(this, &v4);
  m_removeReadyEvent = this->m_removeReadyEvent;
  ExReleasePushLockExclusiveEx(v4.m_Lock, 0LL);
  KeLeaveCriticalRegion();
  if ( m_removeReadyEvent )
    KeSetEvent(&this->m_removeReadyEvent->m_event, 0, 0);
}
