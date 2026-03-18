/*
 * XREFs of PiDevCfgCopyDeviceProperties @ 0x1406EF120
 * Callers:
 *     PiDevCfgResetDeviceKeyCallback @ 0x14071F600 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x14094C400 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14094D9F0 (PiDevCfgConfigureDeviceInterface.c)
 * Callees:
 *     PiDevCfgCopyDeviceKey @ 0x14094C804 (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceProperties(void *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  return PiDevCfgCopyDeviceKey(a1, 1, 0LL, a6);
}
