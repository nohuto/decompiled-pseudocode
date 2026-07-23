/*
 * XREFs of PopCompressCallback @ 0x140B5E650
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestWrite @ 0x140B60100 (PopRequestWrite.c)
 */

__int64 __fastcall PopCompressCallback(ULONG_PTR a1)
{
  return PopRequestWrite(a1);
}
