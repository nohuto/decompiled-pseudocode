/*
 * XREFs of NormBuffer__AppendEx @ 0x1405ECC58
 * Callers:
 *     NormBuffer__InsertAtBlockedLocation @ 0x1405ECE50 (NormBuffer__InsertAtBlockedLocation.c)
 *     Normalization__NormalizeCharacter @ 0x140786414 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__Append @ 0x1405ECB98 (NormBuffer__Append.c)
 */

char __fastcall NormBuffer__AppendEx(__int64 a1, int a2, char a3, char a4)
{
  char result; // al
  __int64 v7; // rcx
  int v8; // r11d
  __int64 v9; // rax

  result = NormBuffer__Append(a1, a2);
  if ( result )
  {
    v9 = *(_QWORD *)(v7 + 40) - 2LL;
    *(_DWORD *)(v7 + 56) = v8;
    *(_QWORD *)(v7 + 64) = v9;
    result = 1;
    *(_BYTE *)(v7 + 72) = a3;
    *(_BYTE *)(v7 + 73) = a4;
  }
  return result;
}
