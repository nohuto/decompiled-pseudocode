/*
 * XREFs of EndPointerDeviceContacts @ 0x1C013B014
 * Callers:
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C001C414 (MasterInputThreadPrepareForRitTakeover.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C009E670 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 * Callees:
 *     ?ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z @ 0x1C013AFAC (-ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z.c)
 */

void __noreturn EndPointerDeviceContacts()
{
  ResetPointerDevices(0LL);
}
