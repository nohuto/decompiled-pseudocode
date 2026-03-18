/*
 * XREFs of NVMeControllerValidateFirmwareActivateCapability @ 0x140022420
 * Callers:
 *     <none>
 * Callees:
 *     GetRegistrySettingsForSpecificKey @ 0x14002FAF0 (GetRegistrySettingsForSpecificKey.c)
 */

__int64 __fastcall NVMeControllerValidateFirmwareActivateCapability(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9

  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 56) & 0xFFFFFFDF | ((unsigned int)GetRegistrySettingsForSpecificKey() != 0
                                                            ? 0x20
                                                            : 0);
  return StorPortExtendedFunction(31LL, a1, a3, v5);
}
