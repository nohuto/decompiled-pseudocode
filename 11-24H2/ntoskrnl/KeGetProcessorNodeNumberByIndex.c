/*
 * XREFs of KeGetProcessorNodeNumberByIndex @ 0x14043AC00
 * Callers:
 *     PspEnableProcessOptionalXStateFeatures @ 0x1407748A0 (PspEnableProcessOptionalXStateFeatures.c)
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x1408A644C (PspRecheckThreadOptionalXStateFeatures.c)
 *     KeUserModeCallback @ 0x1408BF150 (KeUserModeCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumberByIndex(int a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[a1] + 192) + 138LL);
}
