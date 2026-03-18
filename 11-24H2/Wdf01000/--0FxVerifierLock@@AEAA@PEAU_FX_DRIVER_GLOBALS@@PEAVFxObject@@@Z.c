/*
 * XREFs of ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081BDC
 * Callers:
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081AEC (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 * Callees:
 *     ?InitializeLockOrder@FxVerifierLock@@AEAAXXZ @ 0x140097E3C (-InitializeLockOrder@FxVerifierLock@@AEAAXXZ.c)
 */

void __fastcall FxVerifierLock::FxVerifierLock(
        FxVerifierLock *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObject *ParentObject)
{
  this->m_Globals = FxDriverGlobals;
  this->m_Lock.m_Lock = 0LL;
  this->m_Lock.m_DbgFlagIsInitialized = 1;
  this->m_Mutex.m_DbgFlagIsInitialized = 0;
  this->m_Mutex.m_Lock.Owner = 0LL;
  this->m_Mutex.m_Lock.Contention = 0;
  this->m_Mutex.m_Lock.Count = 1;
  KeInitializeEvent(&this->m_Mutex.m_Lock.Event, SynchronizationEvent, 0);
  this->m_Mutex.m_DbgFlagIsInitialized = 1;
  this->m_OwningThread = 0LL;
  this->m_OwnedLink = 0LL;
  this->m_Order = -1;
  this->m_ThreadTableEntry.Thread = 0LL;
  this->m_ThreadTableEntry.PerThreadPassiveLockList = 0LL;
  this->m_ThreadTableEntry.PerThreadDispatchLockList = 0LL;
  *(_WORD *)&this->m_UseMutex = 0;
  *(_DWORD *)&this->m_Type = 11538450;
  this->m_ParentObject = ParentObject;
  FxVerifierLock::InitializeLockOrder(this);
}
