/*
 * XREFs of ExpTranslateHexStringToGUID @ 0x1407BD684
 * Callers:
 *     ExpParseSignatureName @ 0x1407BC480 (ExpParseSignatureName.c)
 * Callees:
 *     towlower @ 0x1404FD4D0 (towlower.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall ExpTranslateHexStringToGUID(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  int v5; // ebx
  __int16 v6; // bp
  unsigned __int16 v7; // di
  int v8; // esi
  unsigned int i; // r14d
  wint_t v10; // ax
  int v11; // ebx
  __int64 v12; // rax
  __int16 v13; // ax
  char v14; // cl
  char v15; // cl
  char v16; // cl
  __int64 result; // rax
  __int128 v18; // [rsp+20h] [rbp-58h]

  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  if ( (_DWORD)v2 == 32 )
  {
    v5 = 0;
    v18 = 0LL;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    for ( i = 0; ; ++i )
    {
      if ( i >= 0x20 )
      {
        result = 0LL;
        *a2 = v18;
        return result;
      }
      v10 = towlower(*(_WORD *)(a1 + 2LL * i));
      if ( (unsigned __int16)(v10 - 48) > 9u )
      {
        if ( (unsigned __int16)(v10 - 97) > 5u )
          return 3221225485LL;
        v11 = 16 * v5 - 87;
      }
      else
      {
        v11 = 16 * v5 - 48;
      }
      v5 = v10 + v11;
      if ( (i & 1) != 0 )
        break;
LABEL_27:
      ;
    }
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        if ( v6 != 2 )
        {
          if ( v6 != 3 )
            return 3221225485LL;
          v12 = v7++;
          *((_BYTE *)&v18 + v12 + 8) = v5;
          v13 = v6 + 1;
          if ( v7 != 8 )
            v13 = v6;
          v6 = v13;
          goto LABEL_26;
        }
        v14 = v7++;
        v8 += v5 << (8 * v14);
        if ( v7 == 2 )
        {
          WORD3(v18) = v8;
          v7 = 0;
LABEL_25:
          ++v6;
          v8 = 0;
        }
LABEL_26:
        v5 = 0;
        goto LABEL_27;
      }
      v15 = v7++;
      v8 += v5 << (8 * v15);
      if ( v7 != 2 )
        goto LABEL_26;
      WORD2(v18) = v8;
    }
    else
    {
      v16 = v7++;
      v8 += v5 << (8 * v16);
      if ( v7 != 4 )
        goto LABEL_26;
      LODWORD(v18) = v8;
    }
    v7 = 0;
    goto LABEL_25;
  }
  return 3221225485LL;
}
