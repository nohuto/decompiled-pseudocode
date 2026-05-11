/*
 * XREFs of IntersectGetMaxSampleRate @ 0x14003DE8C
 * Callers:
 *     IntersectFindBestMatch @ 0x140030D0C (IntersectFindBestMatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntersectGetMaxSampleRate(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int *v3; // r8
  __int64 v4; // r9
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 108);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 100) = 0;
    v3 = *(unsigned int **)(a1 + 120);
    v4 = v2;
    do
    {
      result = *v3;
      if ( (unsigned int)result <= a2 && (unsigned int)result > *(_DWORD *)(a1 + 100) )
        *(_DWORD *)(a1 + 100) = result;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  else
  {
    result = *(unsigned int *)(a1 + 80);
    if ( (unsigned int)result < a2 )
      a2 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 100) = a2;
  }
  return result;
}
