/*
 * XREFs of RtlStringFromGUID @ 0x140964800
 * Callers:
 *     PiInitFirmwareResources @ 0x140C0EE44 (PiInitFirmwareResources.c)
 *     PipHardwareConfigInit @ 0x140C0F9A4 (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x140C299EC (SepSecureBootSetRegistryKey.c)
 *     BapdpRegisterFwUpdateResults @ 0x140C2EA04 (BapdpRegisterFwUpdateResults.c)
 *     VhdInitialize @ 0x140C4BF5C (VhdInitialize.c)
 *     CimfsInitialize @ 0x140C4C9EC (CimfsInitialize.c)
 *     RamdiskCreateSymbolicLink @ 0x140C4D158 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x140965070 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
