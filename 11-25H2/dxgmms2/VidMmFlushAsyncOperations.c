/*
 * XREFs of VidMmFlushAsyncOperations @ 0x14004C5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall VidMmFlushAsyncOperations(__int64 a1)
{
  return KeWaitForSingleObject((PVOID)(a1 + 44472), Executive, 0, 0, 0LL);
}
