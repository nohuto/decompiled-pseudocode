/*
 * XREFs of IopLiveDumpIsChunkInIOSpace @ 0x14059832C
 * Callers:
 *     IopLiveDumpShouldCheckChunkCRC @ 0x14049AF84 (IopLiveDumpShouldCheckChunkCRC.c)
 *     IopLiveDumpBufferDumpData @ 0x140596168 (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     IopLiveDumpIsChunkInIOSpaceBuffer @ 0x140598368 (IopLiveDumpIsChunkInIOSpaceBuffer.c)
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
