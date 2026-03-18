/*
 * XREFs of ZwLoadDriver @ 0x1406A85D0
 * Callers:
 *     KsepLoadShimProvider @ 0x1405CA514 (KsepLoadShimProvider.c)
 *     DifZwLoadDriverWrapper @ 0x140640A20 (DifZwLoadDriverWrapper.c)
 *     PopCadTriggerDriverLoad @ 0x140763280 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x1407B1B38 (EtwpConstructIptData.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1408E9078 (EtwpUpdateFileInfoDriverState.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName, v1);
}
