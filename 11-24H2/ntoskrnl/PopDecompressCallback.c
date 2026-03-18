/*
 * XREFs of PopDecompressCallback @ 0x140B5C8E0
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x140B5DC4C (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
