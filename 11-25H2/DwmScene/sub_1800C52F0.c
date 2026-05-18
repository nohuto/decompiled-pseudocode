/*
 * XREFs of sub_1800C52F0 @ 0x1800C52F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800C2E7C @ 0x1800C2E7C (sub_1800C2E7C.c)
 *     sub_1800C2F54 @ 0x1800C2F54 (sub_1800C2F54.c)
 *     sub_1800C5F38 @ 0x1800C5F38 (sub_1800C5F38.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C52F0(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 *v7; // rax
  char v8; // bl
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  char v14; // [rsp+28h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+40h] [rbp-38h]
  __int64 v18; // [rsp+48h] [rbp-30h] BYREF
  __int64 v19; // [rsp+50h] [rbp-28h]

  _InterlockedIncrement64(qword_1801C39B0);
  if ( *a2 )
  {
    v7 = sub_1800C2F54(*a2, &v18, *(_DWORD *)(a1 + 88));
    v8 = 1;
    v9 = *v7;
  }
  else
  {
    v15 = 0LL;
    v7 = (__int64 *)&v14;
    v8 = 2;
    v9 = 0LL;
  }
  v16 = v9;
  v10 = v7[1];
  v17 = v10;
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v15 )
      sub_18001050C(v15);
  }
  if ( (v8 & 1) != 0 && v19 )
    sub_18001050C(v19);
  v11 = *sub_1800C2E7C(v9, &v13);
  sub_18000E854(&v13);
  result = sub_1800C5F38(a1, v11, a3, a4);
  if ( v10 )
    return sub_18001050C(v10);
  return result;
}
