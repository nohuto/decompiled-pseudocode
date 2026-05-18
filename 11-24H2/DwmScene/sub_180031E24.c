/*
 * XREFs of sub_180031E24 @ 0x180031E24
 * Callers:
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800305D8 @ 0x1800305D8 (sub_1800305D8.c)
 */

__int64 __fastcall sub_180031E24(__int64 a1, __int64 *a2)
{
  __int64 v2; // r10
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 **v5; // r9
  __int64 *v6; // rdx
  __int64 *v7; // r8
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v13; // [rsp+30h] [rbp-18h]

  v2 = *a2;
  *a2 = 0LL;
  v3 = a1 + 168;
  v4 = a2[1];
  a2[1] = 0LL;
  v12 = 0LL;
  v5 = *(__int64 ***)v3;
  v11 = v3;
  v13 = &v12;
  v6 = *v5;
  if ( *v5 != (__int64 *)v5 )
  {
    do
    {
      v7 = (__int64 *)*v6;
      if ( v6[2] == v2 )
      {
        --*(_QWORD *)(v3 + 8);
        v8 = (_QWORD *)*v6;
        *v6 = 0LL;
        v9 = (_QWORD *)v6[1];
        *v9 = v8;
        v8[1] = v9;
        *v13 = (__int64)v6;
        v3 = v11;
        v13 = v6;
      }
      v6 = v7;
    }
    while ( v7 != (__int64 *)v5 );
  }
  result = sub_1800305D8((__int64)&v11);
  if ( v4 )
    return sub_18001060C(v4);
  return result;
}
