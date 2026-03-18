/*
 * XREFs of ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x14003F448
 * Callers:
 *     ?_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z @ 0x14003F430 (-_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z.c)
 * Callees:
 *     FX_TRACK_DRIVER @ 0x14003F8F0 (FX_TRACK_DRIVER.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxInterrupt::WorkItemHandler(FxInterrupt *this)
{
  FxCallbackLock **p_m_CallbackLock; // rsi
  FxCallbackLock *m_CallbackLock; // rcx
  void (__fastcall **p_m_EvtInterruptWorkItem)(WDFINTERRUPT__ *, void *); // rdi
  void (__fastcall *v5)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  FxDeviceBase *v6; // rdx
  unsigned __int16 v7; // ax
  unsigned __int64 v8; // rdx
  bool v9; // zf
  unsigned __int16 v10; // ax
  unsigned __int64 v11; // rbx
  void (__fastcall *WorkItemNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v15; // rdx
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  FX_TRACK_DRIVER(this->m_Globals);
  p_m_CallbackLock = &this->m_CallbackLock;
  m_CallbackLock = this->m_CallbackLock;
  p_m_EvtInterruptWorkItem = &this->m_EvtInterruptWorkItem;
  if ( m_CallbackLock )
  {
    irql = 0;
    m_CallbackLock->Lock(m_CallbackLock, &irql);
    WorkItemNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->WorkItemNotifyRoutine;
    if ( WorkItemNotifyRoutine )
      WorkItemNotifyRoutine(&this->m_EvtInterruptWorkItem, 8u, 1207959552u, 3943u, 2u);
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v15 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    v9 = m_ObjectSize == 0;
    v16 = this->m_ObjectSize;
    if ( v9 )
      v15 = 0LL;
    v17 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v16 )
      v17 = 0LL;
    (*p_m_EvtInterruptWorkItem)((WDFINTERRUPT__ *)v17, (void *)v15);
    LOBYTE(v18) = irql;
    (*p_m_CallbackLock)->Unlock(*p_m_CallbackLock, v18);
  }
  else
  {
    v5 = FxLibraryGlobals.PerfTraceRoutines->WorkItemNotifyRoutine;
    if ( v5 )
      v5(&this->m_EvtInterruptWorkItem, 8u, 1207959552u, 3943u, 2u);
    v6 = this->m_DeviceBase;
    v7 = v6->m_ObjectSize;
    v8 = (unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v9 = v7 == 0;
    v10 = this->m_ObjectSize;
    if ( v9 )
      v8 = 0LL;
    v11 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v10 )
      v11 = 0LL;
    (*p_m_EvtInterruptWorkItem)((WDFINTERRUPT__ *)v11, (void *)v8);
  }
}
