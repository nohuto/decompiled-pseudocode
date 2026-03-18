/*
 * XREFs of ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x14008F370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1400167FC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x140039E90 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?CallCleanup@FxObject@@QEAAXXZ @ 0x140045858 (-CallCleanup@FxObject@@QEAAXXZ.c)
 *     ?CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ @ 0x14008EBF0 (-CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxCompanionTarget::Dispose(FxCompanionTarget *this, unsigned __int8 a2)
{
  const void *_a1; // rcx
  IDeviceCompanion *m_RdDeviceCompanion; // rdx
  FxCompanionLibrary *CompanionLibrary; // rbx
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
    CompanionLibrary = FxLibraryGlobals.CompanionLibrary;
    ((void (__fastcall *)(ICompanionLibrary *))FxLibraryGlobals.CompanionLibrary->m_RdCompanionLibrary->UnloadCompanion)(FxLibraryGlobals.CompanionLibrary->m_RdCompanionLibrary);
    FxCompanionLibrary::CloseCompanionLibraryInterface(CompanionLibrary);
    this->m_RdDeviceCompanion = 0LL;
  }
  return 0;
}
