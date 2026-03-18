/*
 * XREFs of ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x140052D40
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x14003A9BC (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?ReadRegistryWdfSetting@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x140051554 (-ReadRegistryWdfSetting@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     imp_WdfRegistryQueryULong @ 0x140052B80 (imp_WdfRegistryQueryULong.c)
 *     GetEnhancedVerifierOptions @ 0x1400542A8 (GetEnhancedVerifierOptions.c)
 *     FxRegistrySettingsInitialize @ 0x14006D2D4 (FxRegistrySettingsInitialize.c)
 *     ?FxIFRGetSettings@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAKPEAE3@Z @ 0x14006DD1C (-FxIFRGetSettings@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAKPEAE3@Z.c)
 *     ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x14006E080 (-IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z.c)
 *     FxOverrideDefaultVerifierSettings @ 0x14006E27C (FxOverrideDefaultVerifierSettings.c)
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x140081F28 (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1400961AC (FxLibraryGlobalsQueryRegistrySettings.c)
 *     FxVerifierQueryStateSeparationDetection @ 0x140096460 (FxVerifierQueryStateSeparationDetection.c)
 *     FxVerifierQueryTrackPower @ 0x140096508 (FxVerifierQueryTrackPower.c)
 *     ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1400A3A44 (-PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z.c)
 *     ?CheckWakeFromShutdownOptIn@FxPkgPnp@@AEAAXXZ @ 0x1400A60C4 (-CheckWakeFromShutdownOptIn@FxPkgPnp@@AEAAXXZ.c)
 *     ?ReadRegistrySxWake@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1400A7320 (-ReadRegistrySxWake@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 */

NTSTATUS __fastcall FxRegKey::_QueryULong(void *Key, _UNICODE_STRING *ValueName, unsigned int *Value)
{
  NTSTATUS result; // eax
  unsigned int length; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  length = 16;
  result = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, buffer, 0x10u, &length);
  if ( (int)(result + 0x80000000) < 0 || result == -2147483643 )
  {
    if ( *(_DWORD *)&buffer[4] == 4 )
    {
      if ( result >= 0 )
        *Value = *(_DWORD *)&buffer[12];
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
