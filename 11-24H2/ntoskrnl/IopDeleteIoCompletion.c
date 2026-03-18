/*
 * XREFs of IopDeleteIoCompletion @ 0x140A4ADE0
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteIoCompletionInternal @ 0x14041B6F8 (IopDeleteIoCompletionInternal.c)
 */

void __fastcall IopDeleteIoCompletion(ULONG_PTR a1)
{
  IopDeleteIoCompletionInternal(a1, 0);
}
