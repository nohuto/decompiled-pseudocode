/*
 * XREFs of sub_18002312C @ 0x18002312C
 * Callers:
 *     sub_18002176C @ 0x18002176C (sub_18002176C.c)
 *     sub_180022BCC @ 0x180022BCC (sub_180022BCC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 */

char __fastcall sub_18002312C(__int64 a1, char a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  char v6; // cl
  unsigned __int64 v7; // rdx
  char v9; // r8
  char v10; // bp
  unsigned __int64 v11; // rbx
  char *v12; // rax
  char *v13; // rdi
  unsigned __int64 v14; // rdi
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  __int16 v16; // [rsp+28h] [rbp-30h]
  char v17; // [rsp+2Ah] [rbp-2Eh]

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a1 + v4) );
  if ( v4 < 0x12 )
    return 0;
  v5 = 0LL;
  v6 = 2 - (v4 < 0x18);
  v7 = 16LL;
  if ( !a2 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *(_BYTE *)(a1 + v5);
        if ( v5 >= v7 )
          break;
        if ( (unsigned __int8)(v9 - 48) > 9u && (unsigned __int8)(v9 - 65) > 0x19u )
        {
          if ( v9 < 97 )
          {
            if ( ((v9 - 43) & 0xFB) != 0 )
              return 0;
          }
          else if ( v9 > 122 )
          {
            return 0;
          }
        }
        ++v5;
      }
      if ( v9 != 46 )
        v7 = 22LL;
      --v6;
    }
    while ( v6 );
    v10 = (v7 == 22) + 1;
    while ( *(_BYTE *)(a1 + v5) == 46 )
    {
      v11 = v5 + 1;
      if ( v11 >= v4 )
        break;
      v15 = 0LL;
      v16 = 0;
      v17 = 0;
      v12 = strchr((const char *)(a1 + v11), 46);
      v13 = v12 ? &v12[-a1] : (char *)v4;
      v14 = (unsigned __int64)&v13[-v11];
      if ( v14 > 0xB )
        break;
      o_strncpy_s(&v15, 11LL, a1 + v11, v14);
      o__set_errno(0LL);
      if ( !(unsigned int)o_strtol(&v15, 0LL, 10LL) && (_BYTE)v15 != 48 && BYTE1(v15) )
        break;
      if ( *(_DWORD *)o__errno() == 34 )
        break;
      v5 = v14 + v11;
      if ( v5 >= v4 )
        return v10;
    }
    return 0;
  }
  do
  {
    if ( *(_BYTE *)(a1 + v7) == 46 )
      break;
    v7 = 22LL;
    --v6;
  }
  while ( v6 );
  return v6;
}
