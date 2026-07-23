/*
 * XREFs of RtlStringFromGUID @ 0x1409A2C00
 * Callers:
 *     PiInitFirmwareResources @ 0x140C21FEC (PiInitFirmwareResources.c)
 *     PipHardwareConfigInit @ 0x140C22B44 (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x140C3CE24 (SepSecureBootSetRegistryKey.c)
 *     BapdpRegisterFwUpdateResults @ 0x140C41E30 (BapdpRegisterFwUpdateResults.c)
 *     VhdInitialize @ 0x140C5F424 (VhdInitialize.c)
 *     CimfsInitialize @ 0x140C5FEBC (CimfsInitialize.c)
 *     RamdiskCreateSymbolicLink @ 0x140C60628 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x1409A3470 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
