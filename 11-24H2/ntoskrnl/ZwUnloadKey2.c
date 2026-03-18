/*
 * XREFs of ZwUnloadKey2 @ 0x1406A9F70
 * Callers:
 *     BiUnloadHiveByName @ 0x14085EE48 (BiUnloadHiveByName.c)
 *     VrpUnloadDifferencingHive @ 0x14092AB4C (VrpUnloadDifferencingHive.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140A63480 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     PiDrvDbLoadHive @ 0x140A796D4 (PiDrvDbLoadHive.c)
 *     PiDrvDbUnloadHive @ 0x140A797B0 (PiDrvDbUnloadHive.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140C224B8 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
