/*
 * XREFs of sub_1800C2960 @ 0x1800C2960
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180014FA0 @ 0x180014FA0 (sub_180014FA0.c)
 *     sub_1800BF6A8 @ 0x1800BF6A8 (sub_1800BF6A8.c)
 *     sub_1800C300C @ 0x1800C300C (sub_1800C300C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C2960(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v5 = (__int64 *)sub_1800C300C(*a2, v11, *(unsigned int *)(a1 + 88));
  sub_180014FA0(&v9, (__int64)v5, *v5);
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 )
    sub_18001050C(v7);
  sub_1800BF6A8(v9, &v12);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 144) + 400LL))(*(_QWORD *)(a1 + 144), v12, a3);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  result = sub_18000E854(&v12);
  if ( v10 )
    return sub_18001050C(v10);
  return result;
}
