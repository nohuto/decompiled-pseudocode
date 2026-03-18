/*
 * XREFs of BuildSetFeaturesCacheCommand @ 0x140019F00
 * Callers:
 *     ScsiModeSelectRequest @ 0x1400261F4 (ScsiModeSelectRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildSetFeaturesCacheCommand(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 result; // rax

  *(_BYTE *)a1 = 9;
  *(_BYTE *)(a1 + 40) = 6;
  if ( a3 )
    *(_DWORD *)(a1 + 40) |= 0x80000000;
  result = *(unsigned int *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = result ^ ((unsigned __int8)result ^ a2) & 1;
  return result;
}
