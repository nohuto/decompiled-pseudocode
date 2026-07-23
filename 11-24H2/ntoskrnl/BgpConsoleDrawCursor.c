/*
 * XREFs of BgpConsoleDrawCursor @ 0x140BB2F18
 * Callers:
 *     BgpConsoleSetCursor @ 0x140BB3520 (BgpConsoleSetCursor.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x140698FEC (BgpDisplayCharacterEx.c)
 */

__int64 BgpConsoleDrawCursor()
{
  unsigned int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // rax
  unsigned __int16 v3; // r11
  __int64 v4; // rax
  int v5; // ecx
  int v6; // edx
  unsigned __int64 v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v0 = *(_DWORD *)(qword_140EEFD00 + 76);
  if ( v0 )
  {
    v6 = *(_DWORD *)(qword_140EEFD00 + 16);
    v5 = *(_DWORD *)(qword_140EEFD00 + 12);
    if ( v0 >= 0x22 )
    {
      v3 = 9604;
      if ( v0 >= 0x43 )
        v3 = 9608;
    }
    else
    {
      v3 = 95;
    }
  }
  else
  {
    v1 = 25LL * *(unsigned int *)(qword_140EEFD00 + 68);
    v2 = *(unsigned int *)(qword_140EEFD00 + 72);
    v3 = *(_WORD *)(qword_140EEFD00 + 12 * (v2 + v1) + 88);
    v4 = 3 * (v2 + v1);
    v5 = *(_DWORD *)(qword_140EEFD00 + 4 * v4 + 80);
    v6 = *(_DWORD *)(qword_140EEFD00 + 4 * v4 + 84);
  }
  return BgpDisplayCharacterEx(
           v3,
           *(__int64 **)(qword_140EEFD00 + 40),
           *(_DWORD *)(qword_140EEFD00 + 60) + *(_DWORD *)(qword_140EEFD00 + 68) * *(_DWORD *)(qword_140EEFD00 + 48),
           *(_DWORD *)(qword_140EEFD00 + 64) + *(_DWORD *)(qword_140EEFD00 + 72) * *(_DWORD *)(qword_140EEFD00 + 52),
           v6,
           v5,
           &v10,
           &v9,
           v8);
}
