/*
 * XREFs of PopDecompressCallback @ 0x140B5E950
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x140B5FCCC (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
