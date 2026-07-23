/*
 * XREFs of RaspMapCharacterCodeToGlyphIndex @ 0x14069CCF4
 * Callers:
 *     RaspGetUnscaledGlyphData @ 0x14069C27C (RaspGetUnscaledGlyphData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaspMapCharacterCodeToGlyphIndex(unsigned int *a1, unsigned __int16 a2, _WORD *a3)
{
  unsigned int v3; // r10d
  int v4; // r9d
  unsigned int v5; // edx
  unsigned int v7; // r11d
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // edx
  __int16 v12; // r9

  v3 = 0;
  v4 = a2;
  v5 = *a1;
  v7 = 0;
  if ( *a1 )
  {
    v8 = *((_QWORD *)a1 + 2);
    v9 = 0LL;
    do
    {
      if ( *(_WORD *)(v9 + v8) <= (unsigned __int16)v4 && (unsigned __int16)v4 <= *(_WORD *)(v9 + *((_QWORD *)a1 + 3)) )
        break;
      ++v7;
      v9 += 2LL;
    }
    while ( v7 < v5 );
  }
  if ( v7 == v5 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v10 = *((_QWORD *)a1 + 5);
    v11 = *(unsigned __int16 *)(v10 + 2LL * v7);
    if ( (_WORD)v11 )
      v12 = *(_WORD *)(*((_QWORD *)a1 + 4) + 2LL * v7)
          + *(_WORD *)(v10 + 2LL * (v4 + v7 + (v11 >> 1) - *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 2LL * v7)));
    else
      v12 = *(_WORD *)(*((_QWORD *)a1 + 4) + 2LL * v7) + v4;
    *a3 = v12;
  }
  return v3;
}
