/*
 * XREFs of sub_180050A54 @ 0x180050A54
 * Callers:
 *     sub_180050B40 @ 0x180050B40 (sub_180050B40.c)
 * Callees:
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_180026180 @ 0x180026180 (sub_180026180.c)
 *     sub_180027138 @ 0x180027138 (sub_180027138.c)
 *     sub_180050B00 @ 0x180050B00 (sub_180050B00.c)
 */

__int64 __fastcall sub_180050A54(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = a2[1];
  v5 = *a2;
  v13 = *a2;
  v6 = 0LL;
  while ( v5 != v4 )
  {
    ++v6;
    sub_18001C2C0(&v13);
    v5 = v13;
  }
  v7 = (_QWORD *)*a1;
  v13 = v2;
  if ( v2 == *v7 && *(_BYTE *)(v4 + 25) )
  {
    sub_180050B00(a1);
  }
  else
  {
    while ( v2 != v4 )
    {
      sub_18001C2C0(&v13);
      v14 = v9;
      sub_18001C2C0(&v14);
      v11 = sub_180027138(a1, v10);
      sub_180026180(v12, v11);
      v2 = v13;
    }
  }
  return v6;
}
