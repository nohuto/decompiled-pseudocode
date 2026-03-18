/*
 * XREFs of RtlCompressBuffer @ 0x1403A15F0
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14034B5FC (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     SmStoreCompressBuffer @ 0x1403A1334 (SmStoreCompressBuffer.c)
 *     EtwpFileModeCompress @ 0x140426E94 (EtwpFileModeCompress.c)
 *     EtwpCompressBuffer @ 0x140644CB4 (EtwpCompressBuffer.c)
 *     RtlCompressChunks @ 0x14076EB00 (RtlCompressChunks.c)
 *     EtwpWriteBufferCompressed @ 0x1407A1280 (EtwpWriteBufferCompressed.c)
 *     PopAddPagesToCompressedPageSet @ 0x140B4C3C0 (PopAddPagesToCompressedPageSet.c)
 * Callees:
 *     RtlCompressBufferLz4 @ 0x1403A1770 (RtlCompressBufferLz4.c)
 *     RtlCompressBufferXpressHuff @ 0x1403A2F90 (RtlCompressBufferXpressHuff.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCompressBufferLZNT1 @ 0x140B53FA0 (RtlCompressBufferLZNT1.c)
 */

NTSTATUS __stdcall RtlCompressBuffer(
        USHORT CompressionFormatAndEngine,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        ULONG UncompressedChunkSize,
        PULONG FinalCompressedSize,
        PVOID WorkSpace)
{
  unsigned __int16 v8; // r10
  __int64 (__fastcall *v9)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // rax

  if ( (unsigned __int8)CompressionFormatAndEngine < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine > 8u )
    return -1073741217;
  v8 = CompressionFormatAndEngine & 0xFF00;
  v9 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))RtlCompressBufferProcs[(unsigned __int8)CompressionFormatAndEngine];
  if ( v9 == RtlCompressBufferLz4 )
    return RtlCompressBufferLz4(
             v8,
             (_DWORD)UncompressedBuffer,
             UncompressedBufferSize,
             (_DWORD)CompressedBuffer,
             CompressedBufferSize,
             UncompressedChunkSize,
             (__int64)FinalCompressedSize,
             (__int64)WorkSpace);
  if ( v9 == RtlCompressBufferLZNT1 )
    return RtlCompressBufferLZNT1(
             v8,
             (_DWORD)UncompressedBuffer,
             UncompressedBufferSize,
             (_DWORD)CompressedBuffer,
             CompressedBufferSize,
             UncompressedChunkSize,
             (__int64)FinalCompressedSize,
             (__int64)WorkSpace);
  if ( (char *)v9 == (char *)RtlCompressBufferXpressHuff )
    return RtlCompressBufferXpressHuff(
             v8,
             UncompressedBuffer,
             UncompressedBufferSize,
             CompressedBuffer,
             CompressedBufferSize,
             UncompressedChunkSize,
             FinalCompressedSize,
             WorkSpace);
  return guard_dispatch_icall_no_overrides(v8, UncompressedBuffer);
}
