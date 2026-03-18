/*
 * XREFs of NVMeDirectiveStreamsReturnParameters @ 0x140027C84
 * Callers:
 *     NVMeInitStreams @ 0x14001E0C8 (NVMeInitStreams.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x14002158C (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x140021758 (IoctlStorageStreamsGetParameters.c)
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     SetPrpFromBuffer @ 0x140006710 (SetPrpFromBuffer.c)
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall NVMeDirectiveStreamsReturnParameters(__int64 a1)
{
  NVMeAllocateDmaBuffer(a1, 0x20u);
  return 3238002691LL;
}
