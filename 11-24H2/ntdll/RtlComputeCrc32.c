/*
 * XREFs of RtlComputeCrc32 @ 0x1801082C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG32 __cdecl RtlComputeCrc32(ULONG32 PartialCrc, PVOID Buffer, ULONG Length)
{
  return crc32(PartialCrc, Buffer, Length);
}
