/*
 * XREFs of IopLiveDumpShouldCheckChunkCRC @ 0x14049B234
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x14049ADE4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpBufferDumpData @ 0x140599878 (IopLiveDumpBufferDumpData.c)
 *     IopLiveDumpGetCapturePages @ 0x14059B194 (IopLiveDumpGetCapturePages.c)
 * Callees:
 *     IopLiveDumpIsChunkInIOSpace @ 0x14059BA3C (IopLiveDumpIsChunkInIOSpace.c)
 */

bool __fastcall IopLiveDumpShouldCheckChunkCRC(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_QWORD *)(a1 + 200) )
    return (unsigned int)IopLiveDumpIsChunkInIOSpace() != 0;
  return v1;
}
