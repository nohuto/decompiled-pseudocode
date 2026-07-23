/*
 * XREFs of RtlDecompressBufferEx @ 0x1403CCA50
 * Callers:
 *     SmStoreDecompressBuffer @ 0x14020D068 (SmStoreDecompressBuffer.c)
 *     SmDecompressBuffer @ 0x1403CC850 (SmDecompressBuffer.c)
 *     PopDecompressHiberBlocks @ 0x140B4C904 (PopDecompressHiberBlocks.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     RtlDecompressBufferLz4 @ 0x1403CCB10 (RtlDecompressBufferLz4.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __cdecl RtlDecompressBufferEx(
        USHORT CompressionFormat,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PULONG FinalUncompressedSize,
        PVOID WorkSpace)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat > 8u )
    return -1073741217;
  if ( (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64))RtlDecompressBufferProcs[(unsigned __int8)CompressionFormat] == RtlDecompressBufferLz4 )
    return RtlDecompressBufferLz4(
             (_DWORD)UncompressedBuffer,
             UncompressedBufferSize,
             (_DWORD)CompressedBuffer,
             CompressedBufferSize,
             0,
             (__int64)FinalUncompressedSize);
  return guard_dispatch_icall_no_overrides(UncompressedBuffer, UncompressedBufferSize);
}
