/*
 * XREFs of PiDevCfgCopyDeviceProperties @ 0x1406F8BA0
 * Callers:
 *     PiDevCfgResetDeviceKeyCallback @ 0x140729570 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1409CC950 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x1409CCBD4 (PiDevCfgConfigureDeviceInterface.c)
 * Callees:
 *     PiDevCfgCopyDeviceKey @ 0x1409CE174 (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceProperties(void *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  return PiDevCfgCopyDeviceKey(a1, 1, 0LL, a6);
}
