/*
 * XREFs of AslStringSearchA @ 0x140808C30
 * Callers:
 *     SdbpCheckMatchingTextEntry @ 0x140803EB0 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslStringSearchA(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r10
  unsigned int v7; // r11d
  unsigned int v8; // r9d
  unsigned int v9; // r8d

  v4 = 0LL;
  if ( a2 && a4 <= a2 )
  {
    v7 = 0;
    while ( 2 )
    {
      if ( v7 + a4 <= a2 )
      {
        v8 = 0;
        v9 = v7;
        while ( v8 < a4 )
        {
          if ( v9 >= a2 )
            goto LABEL_13;
          if ( !*(_BYTE *)(v9 + a1) && ++v9 >= a2 )
            return v4;
          if ( *(_BYTE *)(v9 + a1) != *(_BYTE *)(v8 + a3) )
            goto LABEL_13;
          ++v8;
          ++v9;
        }
        if ( v8 != a4 )
        {
LABEL_13:
          ++v7;
          continue;
        }
        return a1 + v7;
      }
      break;
    }
  }
  return v4;
}
