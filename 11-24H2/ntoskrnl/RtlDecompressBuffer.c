/*
 * XREFs of RtlDecompressBuffer @ 0x14045A970
 * Callers:
 *     RtlDecompressChunks @ 0x14077DEC0 (RtlDecompressChunks.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlDecompressBufferLZNT1 @ 0x1409EC6A0 (RtlDecompressBufferLZNT1.c)
 */

NTSTATUS __stdcall RtlDecompressBuffer(
        USHORT CompressionFormat,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PULONG FinalUncompressedSize)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat > 8u )
    return -1073741217;
  if ( (__int64 (__usercall *)@<rax>(void *@<rcx>, int, __int64))RtlDecompressBufferProcs[(unsigned __int8)CompressionFormat] == RtlDecompressBufferLZNT1 )
    return RtlDecompressBufferLZNT1(UncompressedBuffer, 0, (__int64)FinalUncompressedSize);
  return guard_dispatch_icall_no_overrides(
           UncompressedBuffer,
           UncompressedBufferSize,
           CompressedBuffer,
           CompressedBufferSize);
}
