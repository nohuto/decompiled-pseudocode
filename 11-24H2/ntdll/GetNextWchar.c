/*
 * XREFs of GetNextWchar @ 0x180143634
 * Callers:
 *     RtlGenerate8dot3Name @ 0x180143780 (RtlGenerate8dot3Name.c)
 * Callees:
 *     RtlIsValidOemCharacter @ 0x180143E38 (RtlIsValidOemCharacter.c)
 */

__int64 __fastcall GetNextWchar(unsigned __int16 *a1, _DWORD *a2, char a3, char a4)
{
  unsigned __int16 i; // r10
  __int64 v9; // r11
  int v10; // eax
  unsigned __int16 v12; // [rsp+40h] [rbp+8h] BYREF

  for ( i = 0; ; i = 0 )
  {
    v9 = (unsigned int)*a2;
    if ( (unsigned int)v9 >= *a1 >> 1 )
      break;
    i = *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v9);
    *a2 = v9 + 1;
    v12 = i;
    if ( i <= 0x20u )
      continue;
    if ( i >= 0x7Fu )
    {
      if ( !a4 || !(unsigned __int8)RtlIsValidOemCharacter(&v12) )
        continue;
      i = v12;
    }
    if ( i != 46 )
    {
      if ( i < 0x80u )
      {
LABEL_12:
        v10 = RtlFatIllegalTable[(unsigned __int64)i >> 5];
        if ( _bittest(&v10, i & 0x1F) )
          i = 95;
      }
      if ( (unsigned __int16)(i - 97) <= 0x19u )
        i -= 32;
      return i;
    }
    if ( !a3 )
      goto LABEL_12;
  }
  return i;
}
