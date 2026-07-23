/*
 * XREFs of MiMirrorRemoveBlackChildPartitionPages @ 0x140673F40
 * Callers:
 *     <none>
 * Callees:
 *     MiMirrorOmitPagesFromCopy @ 0x14041D540 (MiMirrorOmitPagesFromCopy.c)
 */

ULONG *__fastcall MiMirrorRemoveBlackChildPartitionPages(__int64 a1, __int64 *a2)
{
  ULONG *result; // rax
  unsigned int *v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rsi

  result = &MiSystemPartition;
  if ( (ULONG *)a1 != &MiSystemPartition )
  {
    v3 = *(unsigned int **)(a1 + 80);
    v4 = 0;
    v5 = *a2;
    if ( v3 )
    {
      if ( *v3 )
      {
        do
        {
          result = (ULONG *)MiMirrorOmitPagesFromCopy(v5, *(_QWORD *)&v3[4 * v4 + 4], *(_QWORD *)&v3[4 * v4 + 6]);
          ++v4;
        }
        while ( v4 < *v3 );
      }
    }
  }
  return result;
}
