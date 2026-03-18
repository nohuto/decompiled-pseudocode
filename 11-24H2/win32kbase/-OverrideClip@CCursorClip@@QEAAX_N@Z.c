/*
 * XREFs of ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x14020B190
 * Callers:
 *     DisableDelegation @ 0x140189550 (DisableDelegation.c)
 *     SetInputDelegationModeImpl @ 0x14018980C (SetInputDelegationModeImpl.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CCursorClip::OverrideClip(CCursorClip *this, unsigned __int8 a2)
{
  int v3; // edi
  int v4; // eax
  bool v5; // sf

  v3 = a2;
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)this + 32));
  v4 = 2 * v3 - 1;
  v5 = v4 + *((_DWORD *)this + 62) < 0;
  *((_DWORD *)this + 62) += v4;
  if ( v5 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 99);
  CPushLock::ReleaseLock((CCursorClip *)((char *)this + 32));
}
