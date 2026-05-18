/*
 * XREFs of sub_1800522A8 @ 0x1800522A8
 * Callers:
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 *     sub_180051DD4 @ 0x180051DD4 (sub_180051DD4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18005226C @ 0x18005226C (sub_18005226C.c)
 */

__int64 __fastcall sub_1800522A8(unsigned int a1)
{
  __int64 v1; // rbx
  int v2; // eax
  int v3; // r11d
  unsigned int v4; // edx
  char *v5; // rdi
  __int64 i; // rcx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  _DWORD v10[2]; // [rsp+20h] [rbp-88h]
  char v11; // [rsp+28h] [rbp-80h] BYREF
  int v12; // [rsp+78h] [rbp-30h]
  int v13; // [rsp+7Ch] [rbp-2Ch]
  int v14; // [rsp+80h] [rbp-28h]

  v1 = a1;
  v2 = sub_18005226C(a1);
  v4 = 0;
  if ( (_DWORD)v1 == 23 )
  {
    v8 = v3 + ((unsigned int)(v3 + 1) >> 1);
    return v2 * v8;
  }
  v10[0] = 0;
  v10[1] = 1;
  v5 = &v11;
  for ( i = 20LL; i; --i )
  {
    *(_DWORD *)v5 = 1;
    v5 += 4;
  }
  v12 = 4;
  v13 = 1;
  v14 = 1;
  v7 = v10[v1];
  if ( v7 )
  {
    v8 = (v7 + v3 - 1) / v7;
    return v2 * v8;
  }
  return v4;
}
