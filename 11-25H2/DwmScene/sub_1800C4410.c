/*
 * XREFs of sub_1800C4410 @ 0x1800C4410
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800C2E7C @ 0x1800C2E7C (sub_1800C2E7C.c)
 *     sub_1800C2F54 @ 0x1800C2F54 (sub_1800C2F54.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800C4410(__int64 a1, int a2, __int64 *a3, unsigned int a4)
{
  __int64 *result; // rax
  char v8; // di
  __int64 v9; // rsi
  __int64 v10; // r14
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+58h] [rbp-8h]
  __int64 v19; // [rsp+A0h] [rbp+40h] BYREF

  if ( *a3 )
  {
    result = sub_1800C2F54(*a3, &v17, *(_DWORD *)(a1 + 88));
    v8 = 1;
    v9 = *result;
  }
  else
  {
    v14 = 0LL;
    result = &v13;
    v8 = 2;
    v9 = 0LL;
  }
  v15 = v9;
  v10 = result[1];
  v16 = v10;
  *result = 0LL;
  result[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v14 )
      result = (__int64 *)sub_18001050C(v14);
  }
  if ( (v8 & 1) != 0 && v18 )
    result = (__int64 *)sub_18001050C(v18);
  if ( v9 )
  {
    v19 = *sub_1800C2E7C(v9, &v13);
    result = (__int64 *)sub_18000E854(&v13);
  }
  else
  {
    v19 = 0LL;
  }
  v11 = a2 - 1;
  if ( v11 )
  {
    v12 = v11 - 3;
    if ( v12 )
    {
      if ( v12 == 1 )
        result = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144)
                                                                                          + 128LL))(
                              *(_QWORD *)(a1 + 144),
                              a4,
                              1LL,
                              &v19);
    }
    else
    {
      result = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 176LL))(
                            *(_QWORD *)(a1 + 144),
                            a4,
                            1LL,
                            &v19);
    }
  }
  else
  {
    result = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 56LL))(
                          *(_QWORD *)(a1 + 144),
                          a4,
                          1LL,
                          &v19);
  }
  if ( v10 )
    return (__int64 *)sub_18001050C(v10);
  return result;
}
