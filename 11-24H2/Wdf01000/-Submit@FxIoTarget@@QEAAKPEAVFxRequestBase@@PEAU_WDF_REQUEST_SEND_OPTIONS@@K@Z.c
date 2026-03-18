/*
 * XREFs of ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x14000A770
 * Callers:
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x140006BD8 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x14000B350 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxIoTarget::Submit(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        unsigned int Flags)
{
  char m_ObjectFlags; // al
  FxVerifierLock **p_m_TargetDevice; // rsi
  unsigned __int64 *p_m_Lock; // rdi
  unsigned __int8 v11; // bp
  unsigned __int8 v12; // r8
  unsigned int v13; // r14d
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  p_m_TargetDevice = (FxVerifierLock **)&this[-1].m_TargetDevice;
  irql = 0;
  if ( m_ObjectFlags < 0 && *p_m_TargetDevice )
  {
    FxVerifierLock::Lock(*p_m_TargetDevice, &irql, (unsigned __int8)Options);
    v11 = irql;
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    v11 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  v13 = FxIoTarget::SubmitLocked(this, Request, Options, Flags);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_TargetDevice )
  {
    FxVerifierLock::Unlock(*p_m_TargetDevice, v11, v12);
    return v13;
  }
  else
  {
    KeReleaseSpinLock(p_m_Lock, v11);
    return v13;
  }
}
