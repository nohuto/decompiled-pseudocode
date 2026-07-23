/*
 * XREFs of BcdUtilGetBootOption @ 0x140812D74
 * Callers:
 *     BcdUtilGetBootOption @ 0x140812D74 (BcdUtilGetBootOption.c)
 *     BcdUtilGetBootOptionBoolean @ 0x140812DDC (BcdUtilGetBootOptionBoolean.c)
 *     BcdUtilGetBootOptionInteger @ 0x140812E20 (BcdUtilGetBootOptionInteger.c)
 *     BcdUtilGetBootOptionString @ 0x140812E68 (BcdUtilGetBootOptionString.c)
 * Callees:
 *     BcdUtilGetBootOption @ 0x140812D74 (BcdUtilGetBootOption.c)
 */

__int64 __fastcall BcdUtilGetBootOption(__int64 a1, unsigned int a2)
{
  unsigned int v4; // eax
  __int64 v5; // rbx
  int v6; // ecx
  __int64 result; // rax

  if ( !a1 )
    return 0LL;
  v4 = 0;
  while ( 1 )
  {
    v5 = a1 + v4;
    if ( *(_DWORD *)v5 == a2 && !*(_BYTE *)(v5 + 20) )
      break;
    v6 = *(_DWORD *)(v5 + 12);
    if ( v6 )
    {
      result = BcdUtilGetBootOption(a1 + v4 + v6, a2);
      if ( result )
        return result;
    }
    v4 = *(_DWORD *)(v5 + 16);
    if ( !v4 )
      return 0LL;
  }
  return a1 + v4;
}
