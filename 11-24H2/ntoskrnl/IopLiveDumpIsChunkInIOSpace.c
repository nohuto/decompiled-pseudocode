/*
 * XREFs of IopLiveDumpIsChunkInIOSpace @ 0x14059BA3C
 * Callers:
 *     IopLiveDumpShouldCheckChunkCRC @ 0x14049B234 (IopLiveDumpShouldCheckChunkCRC.c)
 *     IopLiveDumpBufferDumpData @ 0x140599878 (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     IopLiveDumpIsChunkInIOSpaceBuffer @ 0x14059BA78 (IopLiveDumpIsChunkInIOSpaceBuffer.c)
 */

__int64 __fastcall IopLiveDumpIsChunkInIOSpace(__int64 a1)
{
  __int64 v1; // r11
  unsigned int v2; // r10d

  if ( (unsigned int)IopLiveDumpIsChunkInIOSpaceBuffer(a1 + 160)
    || (unsigned int)IopLiveDumpIsChunkInIOSpaceBuffer(v1 + 120) )
  {
    return 1;
  }
  return v2;
}
