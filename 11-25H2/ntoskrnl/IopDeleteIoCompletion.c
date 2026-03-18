/*
 * XREFs of IopDeleteIoCompletion @ 0x140A48340
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteIoCompletionInternal @ 0x14041E268 (IopDeleteIoCompletionInternal.c)
 */

void __fastcall IopDeleteIoCompletion(ULONG_PTR a1)
{
  IopDeleteIoCompletionInternal(a1, 0);
}
