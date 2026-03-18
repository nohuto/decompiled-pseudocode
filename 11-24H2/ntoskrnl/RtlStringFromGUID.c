/*
 * XREFs of RtlStringFromGUID @ 0x1409BC5B0
 * Callers:
 *     PiInitFirmwareResources @ 0x140C1FFAC (PiInitFirmwareResources.c)
 *     PipHardwareConfigInit @ 0x140C20B04 (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x140C3ACCC (SepSecureBootSetRegistryKey.c)
 *     BapdpRegisterFwUpdateResults @ 0x140C3FCE0 (BapdpRegisterFwUpdateResults.c)
 *     VhdInitialize @ 0x140C5D2CC (VhdInitialize.c)
 *     CimfsInitialize @ 0x140C5DD6C (CimfsInitialize.c)
 *     RamdiskCreateSymbolicLink @ 0x140C5E4D8 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  char v2; // r8

  v2 = 1;
  return RtlStringFromGUIDEx(Guid, GuidString, v2);
}
