/*
 * XREFs of RtlDecompressFragmentEx @ 0x140484FE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __cdecl RtlDecompressFragmentEx(
        USHORT CompressionFormat,
        PUCHAR UncompressedFragment,
        ULONG UncompressedFragmentSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        ULONG FragmentOffset,
        ULONG UncompressedChunkSize,
        PULONG FinalUncompressedSize,
        PVOID WorkSpace)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat > 8u )
    return -1073741217;
  return guard_dispatch_icall_no_overrides(UncompressedFragment, UncompressedFragmentSize);
}
