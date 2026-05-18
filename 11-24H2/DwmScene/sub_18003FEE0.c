/*
 * XREFs of sub_18003FEE0 @ 0x18003FEE0
 * Callers:
 *     sub_18003D534 @ 0x18003D534 (sub_18003D534.c)
 *     sub_1800400C0 @ 0x1800400C0 (sub_1800400C0.c)
 *     sub_18005E6C8 @ 0x18005E6C8 (sub_18005E6C8.c)
 *     sub_180068250 @ 0x180068250 (sub_180068250.c)
 *     sub_18008DBEC @ 0x18008DBEC (sub_18008DBEC.c)
 *     sub_180090AFC @ 0x180090AFC (sub_180090AFC.c)
 *     sub_1800CDE50 @ 0x1800CDE50 (sub_1800CDE50.c)
 *     sub_1800D0EC4 @ 0x1800D0EC4 (sub_1800D0EC4.c)
 *     sub_1800D1604 @ 0x1800D1604 (sub_1800D1604.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180016C14 @ 0x180016C14 (sub_180016C14.c)
 *     sub_18003D460 @ 0x18003D460 (sub_18003D460.c)
 */

unsigned __int64 __fastcall sub_18003FEE0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rdi
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  if ( (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3 >= a2 )
    return sub_18003D460(*(unsigned __int64 **)a1, *(unsigned __int64 **)(a1 + 8), &v10);
  v6 = sub_180016C14(a2);
  v7 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(v6);
  v8 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  if ( v8 )
    sub_180010234(*(void **)a1, 8 * v8);
  result = (unsigned __int64)&v7[a2];
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 16) = result;
  while ( v7 != (unsigned __int64 *)result )
    *v7++ = a3;
  return result;
}
