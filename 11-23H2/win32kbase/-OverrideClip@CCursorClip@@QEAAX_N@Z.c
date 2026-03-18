/*
 * XREFs of ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C01DC164
 * Callers:
 *     DisableDelegation @ 0x1C00B8A90 (DisableDelegation.c)
 *     SetInputDelegationModeImpl @ 0x1C01E8E5C (SetInputDelegationModeImpl.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C009C3B0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CCursorClip::OverrideClip(CCursorClip *this, unsigned __int8 a2)
{
  _DWORD *Reserved; // rdi
  int v3; // esi
  int v4; // eax
  bool v5; // sf

  Reserved = WPP_MAIN_CB.Reserved;
  v3 = a2;
  CPushLock::AcquireLockExclusive((CPushLock *)((char *)WPP_MAIN_CB.Reserved + 32));
  v4 = 2 * v3 - 1;
  v5 = v4 + Reserved[64] < 0;
  Reserved[64] += v4;
  if ( v5 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 98);
  CPushLock::ReleaseLock((CPushLock *)(Reserved + 8));
}
