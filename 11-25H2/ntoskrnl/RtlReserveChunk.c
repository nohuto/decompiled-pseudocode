/*
 * XREFs of RtlReserveChunk @ 0x14076EFD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall RtlReserveChunk(
        USHORT CompressionFormat,
        PUCHAR *CompressedBuffer,
        PUCHAR EndOfCompressedBufferPlus1,
        PUCHAR *ChunkBuffer,
        ULONG ChunkSize)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat <= 8u )
    return guard_dispatch_icall_no_overrides(CompressedBuffer);
  return -1073741217;
}
