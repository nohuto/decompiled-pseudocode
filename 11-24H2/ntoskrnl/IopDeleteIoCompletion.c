/*
 * XREFs of IopDeleteIoCompletion @ 0x140A41A60
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteIoCompletionInternal @ 0x14040F238 (IopDeleteIoCompletionInternal.c)
 */

void __fastcall IopDeleteIoCompletion(ULONG_PTR a1)
{
  IopDeleteIoCompletionInternal(a1, 0);
}
