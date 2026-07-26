/*
 * XREFs of SepSddlParseWideStringUlong @ 0x14015841C
 * Callers:
 *     SepSddlGetAclForString @ 0x140157F40 (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlParseWideStringUlong(unsigned __int16 *a1, unsigned __int16 **a2, unsigned int *a3)
{
  unsigned __int16 v3; // ax
  int v6; // r8d
  unsigned __int16 *v7; // r10
  unsigned int v8; // r9d
  int v9; // edx
  int v10; // eax
  __int64 result; // rax

  v3 = *a1;
  *a3 = 0;
  *a2 = a1;
  if ( v3 != 48 )
  {
    if ( (unsigned __int16)(v3 - 48) > 9u )
      goto LABEL_4;
LABEL_10:
    v6 = 10;
    goto LABEL_5;
  }
  if ( ((a1[1] - 88) & 0xFFDF) != 0 )
    goto LABEL_10;
  a1 += 2;
LABEL_4:
  v6 = 16;
LABEL_5:
  v7 = a1;
  v8 = 0;
  while ( 1 )
  {
    v9 = *a1;
    if ( !(_WORD)v9 )
      break;
    if ( (unsigned __int16)(v9 - 48) > 9u )
    {
      if ( v6 != 16 )
        break;
      if ( (unsigned __int16)(v9 - 65) > 5u )
      {
        if ( (unsigned __int16)(v9 - 97) > 5u )
          break;
        v10 = v9 - 87;
      }
      else
      {
        v10 = v9 - 55;
      }
    }
    else
    {
      v10 = v9 - 48;
    }
    if ( v10 + v8 * v6 < v8 )
      return 0LL;
    v8 = v10 + v8 * v6;
    ++a1;
  }
  if ( a1 == v7 )
    return 0LL;
  *a2 = a1;
  result = 1LL;
  *a3 = v8;
  return result;
}
