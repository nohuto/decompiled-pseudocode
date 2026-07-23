/*
 * XREFs of IopCloseIoCompletion @ 0x140A31C30
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteIoCompletionInternal @ 0x14040F238 (IopDeleteIoCompletionInternal.c)
 */

void __fastcall IopCloseIoCompletion(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  if ( a4 == 1 )
    IopDeleteIoCompletionInternal(a2, 1);
}
