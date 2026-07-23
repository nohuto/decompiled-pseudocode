/*
 * XREFs of RtlDecompressChunks @ 0x14077DDF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDecompressBuffer @ 0x14044FDC0 (RtlDecompressBuffer.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __stdcall RtlDecompressChunks(
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PUCHAR CompressedTail,
        ULONG CompressedTailSize,
        PCOMPRESSED_DATA_INFO CompressedDataInfo)
{
  PUCHAR v7; // rbp
  __int64 v9; // r12
  int NumberOfChunks; // ebx
  unsigned int v12; // edx
  UCHAR *v13; // rcx
  ULONG *CompressedChunkSizes; // r14
  __int64 v15; // rdi
  ULONG v16; // eax
  ULONG v17; // r13d
  __int64 v18; // rbx
  PUCHAR v19; // rbx
  char *v20; // r13
  NTSTATUS result; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // [rsp+30h] [rbp-48h]
  UCHAR *v25; // [rsp+38h] [rbp-40h]
  ULONG FinalUncompressedSize; // [rsp+80h] [rbp+8h] BYREF
  int v27; // [rsp+88h] [rbp+10h]

  FinalUncompressedSize = 0;
  v7 = UncompressedBuffer;
  v9 = UncompressedBufferSize;
  NumberOfChunks = CompressedDataInfo->NumberOfChunks;
  v12 = 1 << CompressedDataInfo->ChunkShift;
  v13 = &UncompressedBuffer[v9];
  v27 = NumberOfChunks;
  v24 = v12;
  v25 = v13;
  if ( v13 >= v7 )
  {
    CompressedChunkSizes = CompressedDataInfo->CompressedChunkSizes;
    while ( 1 )
    {
      v15 = (unsigned int)v9;
      if ( (unsigned int)v9 >= v12 )
        v15 = v12;
      if ( NumberOfChunks && (v16 = *CompressedChunkSizes) != 0 )
      {
        if ( v16 == v12 )
        {
          if ( (unsigned int)v15 < CompressedBufferSize )
          {
            memmove(v7, CompressedBuffer, (unsigned int)v15);
          }
          else
          {
            v17 = CompressedTailSize;
            if ( !CompressedTailSize && (unsigned int)v15 > CompressedBufferSize )
              return -1073741246;
            v18 = CompressedBufferSize;
            memmove(v7, CompressedBuffer, CompressedBufferSize);
            memmove(&v7[CompressedBufferSize], CompressedTail, (unsigned int)v15 - CompressedBufferSize);
            CompressedBufferSize += v17;
            CompressedBuffer = &CompressedTail[-v18];
            NumberOfChunks = v27;
            CompressedTailSize = 0;
          }
        }
        else
        {
          if ( v16 > CompressedBufferSize )
          {
            if ( !CompressedTailSize )
              return -1073741246;
            v19 = &v7[(unsigned int)v9 - (unsigned __int64)v12];
            v20 = (char *)&v19[CompressedBufferSize];
            if ( v20 < (char *)v19 )
              return -1073741811;
            if ( v19 < v7 || v20 > (char *)v13 )
              return -1073741246;
            memmove(v19, CompressedBuffer, CompressedBufferSize);
            memmove(&v19[CompressedBufferSize], CompressedTail, *CompressedChunkSizes - CompressedBufferSize);
            CompressedBuffer = v19;
            NumberOfChunks = v27;
          }
          result = RtlDecompressBuffer(
                     CompressedDataInfo->CompressionFormatAndEngine,
                     v7,
                     v15,
                     CompressedBuffer,
                     *CompressedChunkSizes,
                     &FinalUncompressedSize);
          if ( result < 0 )
            return result;
          if ( (unsigned int)v15 > FinalUncompressedSize )
            memset_0(&v7[FinalUncompressedSize], 0, (unsigned int)v15 - FinalUncompressedSize);
          if ( *CompressedChunkSizes >= CompressedBufferSize )
          {
            v22 = CompressedBufferSize;
            CompressedBufferSize += CompressedTailSize;
            CompressedBuffer = &CompressedTail[-v22];
            CompressedTailSize = 0;
          }
        }
      }
      else
      {
        if ( &v7[v15] > v13 )
          return -1073741246;
        memset_0(v7, 0, (unsigned int)v15);
        if ( !NumberOfChunks )
        {
          NumberOfChunks = 1;
          --CompressedChunkSizes;
        }
      }
      v13 = v25;
      v7 += (unsigned int)v15;
      if ( v7 > v25 || (unsigned int)v15 > (unsigned int)v9 )
        return -1073741246;
      v23 = *CompressedChunkSizes;
      --NumberOfChunks;
      CompressedBuffer += v23;
      v27 = NumberOfChunks;
      CompressedBufferSize -= v23;
      ++CompressedChunkSizes;
      LODWORD(v9) = v9 - v15;
      if ( !(_DWORD)v9 )
        return 0;
      v12 = v24;
    }
  }
  return -1073741811;
}
