/*
 * XREFs of IopLiveDumpIsChunkInIOSpaceBuffer @ 0x1405989F8
 * Callers:
 *     IopLiveDumpBufferDumpData @ 0x1405967F8 (IopLiveDumpBufferDumpData.c)
 *     IopLiveDumpIsChunkInIOSpace @ 0x1405989BC (IopLiveDumpIsChunkInIOSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopLiveDumpIsChunkInIOSpaceBuffer(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // rax

  v2 = 0;
  if ( a1[2] )
  {
    v3 = a1[1];
    if ( v3 )
    {
      if ( a2 >= *a1 )
        return a2 < *a1 + v3;
    }
  }
  return v2;
}
