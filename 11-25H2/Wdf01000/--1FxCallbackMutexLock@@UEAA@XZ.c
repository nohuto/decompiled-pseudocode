/*
 * XREFs of ??1FxCallbackMutexLock@@UEAA@XZ @ 0x14004C568
 * Callers:
 *     ??1FxDriver@@UEAA@XZ @ 0x14004A848 (--1FxDriver@@UEAA@XZ.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x14004C118 (--1FxIoQueue@@UEAA@XZ.c)
 *     ??_GFxCallbackMutexLock@@UEAAPEAXI@Z @ 0x1400947D0 (--_GFxCallbackMutexLock@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x14007EB90 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 */

void __fastcall FxCallbackMutexLock::~FxCallbackMutexLock(FxCallbackMutexLock *this, unsigned int a2)
{
  FxVerifierLock *m_Verifier; // rcx

  this->__vftable = (FxCallbackMutexLock_vtbl *)FxCallbackMutexLock::`vftable';
  m_Verifier = this->m_Verifier;
  if ( m_Verifier )
    FxVerifierLock::`scalar deleting destructor'(m_Verifier, a2);
  this->m_Lock.m_DbgFlagIsInitialized = 0;
  this->__vftable = (FxCallbackMutexLock_vtbl *)FxCallbackLock::`vftable';
}
