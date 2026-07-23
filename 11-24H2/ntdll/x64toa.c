/*
 * XREFs of x64toa @ 0x18011FE70
 * Callers:
 *     _i64toa @ 0x18011FDD0 (_i64toa.c)
 *     _ui64toa @ 0x18011FE30 (_ui64toa.c)
 * Callees:
 *     <none>
 */

char __fastcall x64toa(unsigned __int64 a1, char *a2, unsigned int a3, int a4)
{
  unsigned __int64 v4; // rax
  char *v5; // r10
  char *v6; // r8
  unsigned __int64 v7; // rbx
  _BYTE *v8; // r11
  char *v9; // r9
  unsigned __int64 v10; // rdx
  char v11; // al
  char result; // al
  char v13; // cl

  v4 = a3;
  v5 = a2;
  if ( a4 )
  {
    v5 = a2 + 1;
    *a2 = 45;
    a1 = -(__int64)a1;
  }
  v6 = v5;
  v7 = v4;
  do
  {
    v8 = v5 + 1;
    v9 = v5;
    v10 = a1 % v7;
    a1 /= v7;
    v11 = 87;
    if ( (unsigned int)v10 <= 9 )
      v11 = 48;
    *v5++ = v10 + v11;
  }
  while ( a1 );
  *v8 = 0;
  do
  {
    result = *v6;
    v13 = *v9;
    *v9-- = *v6;
    *v6++ = v13;
  }
  while ( v6 < v9 );
  return result;
}
