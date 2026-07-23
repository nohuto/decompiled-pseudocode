/*
 * XREFs of NormBuffer__AppendEx @ 0x1800B5788
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800B4EFC (Normalization__NormalizeCharacter.c)
 *     NormBuffer__InsertAtBlockedLocation @ 0x1800B608C (NormBuffer__InsertAtBlockedLocation.c)
 * Callees:
 *     NormBuffer__Append @ 0x1800B57E0 (NormBuffer__Append.c)
 */

char __fastcall NormBuffer__AppendEx(__int64 a1, __int64 a2, char a3, char a4)
{
  int v6; // ebx
  __int64 v7; // r11
  __int64 v8; // rax
  char result; // al

  v6 = a2;
  if ( !(unsigned __int8)NormBuffer__Append(a1, a2) )
    return 0;
  v8 = *(_QWORD *)(v7 + 40) - 2LL;
  *(_DWORD *)(v7 + 56) = v6;
  *(_QWORD *)(v7 + 64) = v8;
  result = 1;
  *(_BYTE *)(v7 + 72) = a3;
  *(_BYTE *)(v7 + 73) = a4;
  return result;
}
