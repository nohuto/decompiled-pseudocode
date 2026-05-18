/*
 * XREFs of sub_18003FD80 @ 0x18003FD80
 * Callers:
 *     sub_18003D3D4 @ 0x18003D3D4 (sub_18003D3D4.c)
 *     sub_18003FF60 @ 0x18003FF60 (sub_18003FF60.c)
 *     sub_18005E568 @ 0x18005E568 (sub_18005E568.c)
 *     sub_1800680F0 @ 0x1800680F0 (sub_1800680F0.c)
 *     sub_18008DA8C @ 0x18008DA8C (sub_18008DA8C.c)
 *     sub_18009099C @ 0x18009099C (sub_18009099C.c)
 *     sub_1800CDCF0 @ 0x1800CDCF0 (sub_1800CDCF0.c)
 *     sub_1800D0D64 @ 0x1800D0D64 (sub_1800D0D64.c)
 *     sub_1800D14A4 @ 0x1800D14A4 (sub_1800D14A4.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180016B14 @ 0x180016B14 (sub_180016B14.c)
 *     sub_18003D300 @ 0x18003D300 (sub_18003D300.c)
 */

unsigned __int64 __fastcall sub_18003FD80(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rdi
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  if ( (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3 >= a2 )
    return sub_18003D300(*(unsigned __int64 **)a1, *(unsigned __int64 **)(a1 + 8), &v10);
  v6 = sub_180016B14(a2);
  v7 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(v6);
  v8 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  if ( v8 )
    sub_180010134(*(void **)a1, 8 * v8);
  result = (unsigned __int64)&v7[a2];
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 16) = result;
  while ( v7 != (unsigned __int64 *)result )
    *v7++ = a3;
  return result;
}
