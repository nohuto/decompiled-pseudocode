/*
 * XREFs of CmpGetBiosVersion @ 0x140C4B4C4
 * Callers:
 *     CmpSetSystemBiosInformation @ 0x140C4BC04 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140C4BFA4 (CmpSetVideoBiosInformation.c)
 * Callees:
 *     strstr @ 0x1404FB270 (strstr.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall CmpGetBiosVersion(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  char *p_Str; // rsi
  unsigned __int16 v6; // cx
  char *v7; // rbx
  char v8; // al
  char *v9; // rbx
  unsigned __int16 i; // di
  const char *v11; // rdx
  unsigned __int16 j; // dx
  char v13; // r8
  __int64 v14; // rcx
  char result; // al
  char Str; // [rsp+9Fh] [rbp-29h] BYREF

  if ( a1 )
  {
    BiosBegin = a1;
    Start = a1 + 1;
    End = a2 + a1 - 2;
  }
  while ( 1 )
  {
    v4 = Start;
    if ( Start > (unsigned __int64)End )
      break;
    if ( *(_BYTE *)Start == 46
      && (unsigned __int8)(*(_BYTE *)(Start + 1) - 48) <= 9u
      && (unsigned __int8)(*(_BYTE *)(Start - 1) - 48) <= 9u )
    {
      Str = 0;
      Start += 2LL;
      p_Str = &Str;
      v6 = 0;
      v7 = (char *)(v4 - 1);
      do
      {
        if ( (unsigned __int64)v7 < BiosBegin )
          break;
        v8 = *v7;
        if ( *v7 < 32 )
          break;
        if ( v8 == 36 )
          break;
        --p_Str;
        --v7;
        ++v6;
        *p_Str = v8;
      }
      while ( v6 < 0x78u );
      v9 = v7 + 1;
      for ( i = 0; ; ++i )
      {
        v11 = SearchStrings[i];
        if ( !v11 )
          break;
        if ( strstr(p_Str, v11) )
        {
          for ( ; v9; ++v9 )
          {
            if ( *v9 != 32 )
              break;
          }
          for ( j = 0; j < 0x7Fu; ++j )
          {
            if ( !v9 )
              break;
            if ( (unsigned __int64)v9 > End + 1 )
              break;
            v13 = *v9;
            if ( *v9 < 32 )
              break;
            if ( v13 == 36 )
              break;
            v14 = j;
            ++v9;
            *(_BYTE *)(v14 + a3) = v13;
          }
          result = 1;
          *(_BYTE *)(j + a3) = 0;
          return result;
        }
      }
    }
    else
    {
      ++Start;
    }
  }
  return 0;
}
