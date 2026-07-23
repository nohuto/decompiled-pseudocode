/*
 * XREFs of ZwLoadDriver @ 0x1406A9570
 * Callers:
 *     KsepLoadShimProvider @ 0x1405C7C3C (KsepLoadShimProvider.c)
 *     DifZwLoadDriverWrapper @ 0x14063EFE0 (DifZwLoadDriverWrapper.c)
 *     PopCadTriggerDriverLoad @ 0x140762C50 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x1407B1F88 (EtwpConstructIptData.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14085A8A0 (EtwpUpdateFileInfoDriverState.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
