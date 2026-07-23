/*
 * XREFs of ZwUnloadKey2 @ 0x1406AAF10
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x14092CC8C (VrpUnloadDifferencingHive.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140A5BD80 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     PiDrvDbLoadHive @ 0x140A739D4 (PiDrvDbLoadHive.c)
 *     PiDrvDbUnloadHive @ 0x140A73AB0 (PiDrvDbUnloadHive.c)
 *     BiUnloadHiveByName @ 0x140A81BF0 (BiUnloadHiveByName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140C244F8 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
