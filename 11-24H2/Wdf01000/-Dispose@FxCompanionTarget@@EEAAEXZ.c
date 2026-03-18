/*
 * XREFs of ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x14008F3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1400141B0 (--0FxCREvent@@QEAA@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x14002DF5C (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?CallCleanup@FxObject@@QEAAXXZ @ 0x14004B0F8 (-CallCleanup@FxObject@@QEAAXXZ.c)
 *     ?CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ @ 0x14008EC50 (-CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxCompanionTarget::Dispose(FxCompanionTarget *this, unsigned __int8 a2)
{
  const void *_a1; // rcx
  IDeviceCompanion *m_RdDeviceCompanion; // rdx
  FxCompanionLibrary *v5; // rbx
  FxCREvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  FxCREvent::FxCREvent(&eventOnStack, a2);
  KeInitializeEvent(&eventOnStack.m_Event.m_Event, SynchronizationEvent, 0);
  eventOnStack.m_Event.m_DbgFlagIsInitialized = 1;
  FxObject::CallCleanup(this);
  this->m_DisposeEvent = &eventOnStack;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0xEu, WPP_FxCompanionTarget_cpp_Traceguids, _a1, &eventOnStack);
  if ( _InterlockedExchangeAdd(&this->m_PendingTaskCount, 0xFFFFFFFF) > 1 )
    FxCREvent::EnterCRAndWaitAndLeave(&eventOnStack);
  m_RdDeviceCompanion = this->m_RdDeviceCompanion;
  this->m_DisposeEvent = 0LL;
  if ( m_RdDeviceCompanion )
  {
    v5 = qword_1400C80D0;
    ((void (__fastcall *)(ICompanionLibrary *))qword_1400C80D0->m_RdCompanionLibrary->UnloadCompanion)(qword_1400C80D0->m_RdCompanionLibrary);
    FxCompanionLibrary::CloseCompanionLibraryInterface(v5);
    this->m_RdDeviceCompanion = 0LL;
  }
  return 0;
}
