/*
 * XREFs of PopCompressCallback @ 0x140B4C5E0
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestWrite @ 0x140B4DFC0 (PopRequestWrite.c)
 */

__int64 __fastcall PopCompressCallback(ULONG_PTR a1)
{
  return PopRequestWrite(a1);
}
