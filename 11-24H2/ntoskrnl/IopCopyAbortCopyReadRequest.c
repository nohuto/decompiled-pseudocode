/*
 * XREFs of IopCopyAbortCopyReadRequest @ 0x140594950
 * Callers:
 *     <none>
 * Callees:
 *     IopCopyCompleteReadRequest @ 0x14025FD20 (IopCopyCompleteReadRequest.c)
 */

__int64 __fastcall IopCopyAbortCopyReadRequest(__int64 a1)
{
  return IopCopyCompleteReadRequest(a1, a1 + 48, a1 + 56, (__int64 *)(a1 + 64));
}
