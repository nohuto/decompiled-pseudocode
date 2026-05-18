/*
 * XREFs of sub_18007CA84 @ 0x18007CA84
 * Callers:
 *     sub_18007CB98 @ 0x18007CB98 (sub_18007CB98.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_180026124 @ 0x180026124 (sub_180026124.c)
 *     sub_180027138 @ 0x180027138 (sub_180027138.c)
 */

__int64 __fastcall sub_18007CA84(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

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
    sub_180026124((__int64)a1, (__int64)a1, v7[1]);
    v7[1] = v7;
    *v7 = v7;
    v7[2] = v7;
    a1[1] = 0LL;
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
