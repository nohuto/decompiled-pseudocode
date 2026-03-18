/*
 * XREFs of PopDecompressCallback @ 0x140B4C8E0
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x140B4DB88 (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
