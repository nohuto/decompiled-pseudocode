/*
 * XREFs of ?WaitForDisposeEvent@FxIoTarget@@MEAAXXZ @ 0x1400113A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1400167FC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 */

void __fastcall FxIoTarget::WaitForDisposeEvent(FxIoTarget *this)
{
  const void *_a1; // rcx
  FxCREvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  eventOnStack.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event.m_Event, SynchronizationEvent, 0);
  eventOnStack.m_Event.m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&eventOnStack.m_Event.m_Event, SynchronizationEvent, 0);
  eventOnStack.m_Event.m_DbgFlagIsInitialized = 1;
  this->m_DisposeEvent = &eventOnStack;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qq(this->m_Globals, 4u, 0xEu, 0xBu, WPP_FxIoTarget_cpp_Traceguids, _a1, &eventOnStack);
  if ( _InterlockedExchangeAdd(&this->m_IoCount, 0xFFFFFFFF) > 1 )
    FxCREvent::EnterCRAndWaitAndLeave(&eventOnStack);
  this->m_DisposeEvent = 0LL;
}
