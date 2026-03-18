/*
 * XREFs of IopLiveDumpShouldCheckChunkCRC @ 0x14049AF84
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x14049AB34 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpBufferDumpData @ 0x140596168 (IopLiveDumpBufferDumpData.c)
 *     IopLiveDumpGetCapturePages @ 0x140597A84 (IopLiveDumpGetCapturePages.c)
 * Callees:
 *     IopLiveDumpIsChunkInIOSpace @ 0x14059832C (IopLiveDumpIsChunkInIOSpace.c)
 */

bool __fastcall IopLiveDumpShouldCheckChunkCRC(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_QWORD *)(a1 + 200) )
    return (unsigned int)IopLiveDumpIsChunkInIOSpace() != 0;
  return v1;
}
