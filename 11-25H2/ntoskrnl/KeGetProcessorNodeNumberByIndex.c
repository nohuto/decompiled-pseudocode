/*
 * XREFs of KeGetProcessorNodeNumberByIndex @ 0x14043BFB0
 * Callers:
 *     PspEnableProcessOptionalXStateFeatures @ 0x140764ED0 (PspEnableProcessOptionalXStateFeatures.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x1408F3834 (PspRecheckThreadOptionalXStateFeatures.c)
 *     KeUserModeCallback @ 0x140938670 (KeUserModeCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumberByIndex(int a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[a1] + 192) + 138LL);
}
