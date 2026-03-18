/*
 * XREFs of ??1FxAutoRegKey@@QEAA@XZ @ 0x14006847C
 * Callers:
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1400318C4 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     GetEnhancedVerifierOptions @ 0x1400472FC (GetEnhancedVerifierOptions.c)
 *     ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x14006CE40 (-IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z.c)
 *     RegistryReadLastLoggedTime @ 0x140072FE8 (RegistryReadLastLoggedTime.c)
 *     RegistryWriteCurrentTime @ 0x14007CC48 (RegistryWriteCurrentTime.c)
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x140081F18 (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 *     ?FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z @ 0x14008CCC8 (-FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1400961F4 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x1400982EC (-RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?CheckWakeFromShutdownOptIn@FxPkgPnp@@AEAAXXZ @ 0x1400A6194 (-CheckWakeFromShutdownOptIn@FxPkgPnp@@AEAAXXZ.c)
 *     ?ReadRegistrySxWake@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1400A73F0 (-ReadRegistrySxWake@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1400AA20C (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxAutoRegKey::~FxAutoRegKey(FxAutoRegKey *this)
{
  void *m_Key; // rcx

  m_Key = this->m_Key;
  if ( m_Key )
    ZwClose(m_Key);
}
