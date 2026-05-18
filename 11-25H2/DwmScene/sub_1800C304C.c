/*
 * XREFs of sub_1800C304C @ 0x1800C304C
 * Callers:
 *     sub_1800C3B90 @ 0x1800C3B90 (sub_1800C3B90.c)
 *     sub_1800C5900 @ 0x1800C5900 (sub_1800C5900.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800C304C(unsigned int a1)
{
  char *v1; // rdi
  __int64 v2; // rdx
  __int64 i; // rcx
  _DWORD v5[2]; // [rsp+0h] [rbp-88h]
  char v6; // [rsp+8h] [rbp-80h] BYREF
  int v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+5Ch] [rbp-2Ch]
  int v9; // [rsp+60h] [rbp-28h]

  v5[0] = 0;
  v1 = &v6;
  v2 = a1;
  v5[1] = 1;
  for ( i = 20LL; i; --i )
  {
    *(_DWORD *)v1 = 1;
    v1 += 4;
  }
  v7 = 4;
  v8 = 1;
  v9 = 1;
  return (unsigned int)v5[v2];
}
