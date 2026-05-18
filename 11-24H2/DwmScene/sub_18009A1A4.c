/*
 * XREFs of sub_18009A1A4 @ 0x18009A1A4
 * Callers:
 *     sub_18009A058 @ 0x18009A058 (sub_18009A058.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180016C14 @ 0x180016C14 (sub_180016C14.c)
 *     sub_18003D460 @ 0x18003D460 (sub_18003D460.c)
 */

unsigned __int64 __fastcall sub_18009A1A4(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 *v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  if ( (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3) >= 0x10 )
    return sub_18003D460(*(unsigned __int64 **)a1, *(unsigned __int64 **)(a1 + 8), &v9);
  v5 = sub_180016C14(0x10uLL);
  v6 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  if ( v7 )
    sub_180010234(*(void **)a1, 8 * v7);
  result = (unsigned __int64)(v6 + 16);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v6 + 16;
  *(_QWORD *)(a1 + 16) = v6 + 16;
  while ( v6 != (unsigned __int64 *)result )
    *v6++ = a3;
  return result;
}
