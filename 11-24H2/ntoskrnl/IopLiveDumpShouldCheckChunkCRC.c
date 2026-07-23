/*
 * XREFs of IopLiveDumpShouldCheckChunkCRC @ 0x140495C24
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x1404957D4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpBufferDumpData @ 0x1405967F8 (IopLiveDumpBufferDumpData.c)
 *     IopLiveDumpGetCapturePages @ 0x140598114 (IopLiveDumpGetCapturePages.c)
 * Callees:
 *     IopLiveDumpIsChunkInIOSpace @ 0x1405989BC (IopLiveDumpIsChunkInIOSpace.c)
 */

bool __fastcall IopLiveDumpShouldCheckChunkCRC(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_QWORD *)(a1 + 200) )
    return (unsigned int)IopLiveDumpIsChunkInIOSpace() != 0;
  return v1;
}
