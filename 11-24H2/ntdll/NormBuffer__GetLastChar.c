/*
 * XREFs of NormBuffer__GetLastChar @ 0x1800B5F0C
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800B4EFC (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NormBuffer__GetLastChar(__int64 a1)
{
  unsigned __int16 *v2; // rcx
  unsigned int v4; // eax
  signed int v5; // edx
  __int64 v6; // r10
  char v7; // cl
  char v8; // al
  char v9; // cl

  v2 = (unsigned __int16 *)(*(_QWORD *)(a1 + 40) - 2LL);
  if ( *(unsigned __int16 **)(a1 + 64) == v2 )
    return *(unsigned int *)(a1 + 56);
  v4 = *v2;
  *(_QWORD *)(a1 + 64) = v2;
  v5 = v4;
  *(_DWORD *)(a1 + 56) = v4;
  if ( v4 > 0xDC00 && v4 <= 0xDFFF )
  {
    v5 = v4 + ((*(v2 - 1) - 55287) << 10);
    *(_DWORD *)(a1 + 56) = v5;
  }
  v6 = *(_QWORD *)(a1 + 112);
  if ( (unsigned __int8)(*(_BYTE *)(((__int64)v5 >> 7) + *(_QWORD *)(v6 + 32)) - 1) > 0xF9u )
  {
    v8 = 0;
    v9 = 0;
  }
  else
  {
    v7 = *(_BYTE *)(*(_QWORD *)(v6 + 40)
                  + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v5 >> 7) + *(_QWORD *)(v6 + 32)) << 7)
                  + (v5 & 0x7F)
                  - 128);
    v8 = v7 & 0xC0;
    v9 = v7 & 0x3F;
  }
  *(_BYTE *)(a1 + 72) = v9;
  *(_BYTE *)(a1 + 73) = v8;
  return (unsigned int)v5;
}
