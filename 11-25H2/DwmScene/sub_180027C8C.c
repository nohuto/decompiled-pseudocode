/*
 * XREFs of sub_180027C8C @ 0x180027C8C
 * Callers:
 *     sub_180027D7C @ 0x180027D7C (sub_180027D7C.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_180027138 @ 0x180027138 (sub_180027138.c)
 *     sub_180027D3C @ 0x180027D3C (sub_180027D3C.c)
 */

__int64 __fastcall sub_180027C8C(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = a2[1];
  v5 = *a2;
  v12 = *a2;
  v6 = 0LL;
  while ( v5 != v4 )
  {
    ++v6;
    sub_18001C2C0(&v12);
    v5 = v12;
  }
  v7 = (_QWORD *)*a1;
  v12 = v2;
  if ( v2 == *v7 && *(_BYTE *)(v4 + 25) )
  {
    sub_180027D3C(a1);
  }
  else
  {
    while ( v2 != v4 )
    {
      sub_18001C2C0(&v12);
      v13 = v9;
      sub_18001C2C0(&v13);
      v11 = sub_180027138(a1, v10);
      sub_180010134(v11, 0x28uLL);
      v2 = v12;
    }
  }
  return v6;
}
