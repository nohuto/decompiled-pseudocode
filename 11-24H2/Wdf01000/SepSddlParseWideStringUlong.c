/*
 * XREFs of SepSddlParseWideStringUlong @ 0x1400DA00C
 * Callers:
 *     SepSddlGetAclForString @ 0x1400D9B30 (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlParseWideStringUlong(wchar_t *Buffer, wchar_t **FinalPosition, unsigned int *Value)
{
  wchar_t v3; // ax
  int v6; // r8d
  const wchar_t *v7; // r10
  unsigned int v8; // r9d
  int v9; // edx
  int v10; // eax
  __int64 result; // rax

  v3 = *Buffer;
  *Value = 0;
  *FinalPosition = Buffer;
  if ( v3 != 48 )
  {
    if ( (unsigned __int16)(v3 - 48) > 9u )
      goto LABEL_4;
LABEL_10:
    v6 = 10;
    goto LABEL_5;
  }
  if ( ((Buffer[1] - 88) & 0xFFDF) != 0 )
    goto LABEL_10;
  Buffer += 2;
LABEL_4:
  v6 = 16;
LABEL_5:
  v7 = Buffer;
  v8 = 0;
  while ( 1 )
  {
    v9 = *Buffer;
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
    ++Buffer;
  }
  if ( Buffer == v7 )
    return 0LL;
  *FinalPosition = Buffer;
  result = 1LL;
  *Value = v8;
  return result;
}
