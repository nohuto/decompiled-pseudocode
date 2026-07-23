/*
 * XREFs of CmpGetBiosDate @ 0x140C4B2B4
 * Callers:
 *     CmpSetSystemBiosInformation @ 0x140C4BC04 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140C4BFA4 (CmpSetVideoBiosInformation.c)
 * Callees:
 *     strtoul @ 0x1404FAFA8 (strtoul.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

char __fastcall CmpGetBiosDate(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // r12
  _BYTE *i; // rdi
  char v8; // dl
  unsigned __int8 v9; // r8
  char v10; // al
  unsigned int v11; // r15d
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  char v14; // r8
  char v15; // dl
  char result; // al
  char Str[16]; // [rsp+20h] [rbp-30h] BYREF
  _TBYTE Buf1; // [rsp+30h] [rbp-20h] BYREF
  char v19; // [rsp+3Ah] [rbp-16h]

  Buf1 = 0.0;
  v4 = a1 + a2 - 5LL;
  v19 = 0;
  for ( i = (_BYTE *)(a1 + 2); (unsigned __int64)i < v4; ++i )
  {
    if ( *i == 47
      && i[3] == 47
      && (unsigned __int8)(*(i - 1) - 48) <= 9u
      && (unsigned __int8)(i[1] - 48) <= 9u
      && (unsigned __int8)(i[2] - 48) <= 9u )
    {
      v8 = i[4];
      if ( (unsigned __int8)(v8 - 48) <= 9u )
      {
        v9 = i[5];
        if ( (unsigned __int8)(v9 - 48) <= 9u )
        {
          v10 = i[2];
          *(_DWORD *)&Str[5] = *(_DWORD *)(i - 2);
          Str[9] = v10;
          if ( (unsigned __int8)(Str[5] - 48) > 9u )
            Str[5] = 48;
          Str[2] = v8;
          *(_WORD *)&Str[3] = v9;
          Str[10] = 0;
          Str[7] = 0;
          v11 = strtoul(&Str[2], 0LL, 16);
          v12 = strtoul(&Str[5], 0LL, 16);
          v13 = strtoul(&Str[8], 0LL, 16);
          if ( v12 - 1 <= 0x11 && v13 - 1 <= 0x30 )
          {
            if ( a4
              && (v14 = i[6], (unsigned __int8)(v14 - 48) <= 9u)
              && (v15 = i[7], (unsigned __int8)(v15 - 48) <= 9u)
              && (*((_WORD *)i + 2) == 14641 || *((_WORD *)i + 2) == 12338) )
            {
              *(_WORD *)Str = *((_WORD *)i + 2);
              Str[2] = v14;
              Str[3] = v15;
            }
            else
            {
              *(_WORD *)Str = 12338;
              if ( v11 >= 0x80 )
                *(_WORD *)Str = 14641;
            }
            Str[7] = 47;
            Str[4] = 47;
            if ( memcmp(&Buf1, Str, 0xAuLL) < 0 )
              Buf1 = *(_TBYTE *)Str;
            i += 2;
          }
        }
      }
    }
  }
  if ( LOBYTE(Buf1) )
  {
    result = 1;
    *(_DWORD *)a3 = *(_DWORD *)((char *)&Buf1 + 5);
    *(_BYTE *)(a3 + 4) = HIBYTE(Buf1);
    *(_WORD *)(a3 + 6) = WORD1(Buf1);
    *(_BYTE *)(a3 + 5) = 47;
    *(_BYTE *)(a3 + 8) = 0;
  }
  else
  {
    *(_BYTE *)a3 = 0;
    return 0;
  }
  return result;
}
