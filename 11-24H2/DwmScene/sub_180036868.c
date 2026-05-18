/*
 * XREFs of sub_180036868 @ 0x180036868
 * Callers:
 *     sub_18002FFBC @ 0x18002FFBC (sub_18002FFBC.c)
 *     sub_180030044 @ 0x180030044 (sub_180030044.c)
 *     sub_180052E8C @ 0x180052E8C (sub_180052E8C.c)
 *     sub_180052F4C @ 0x180052F4C (sub_180052F4C.c)
 *     sub_180062390 @ 0x180062390 (sub_180062390.c)
 *     sub_1800D79EE @ 0x1800D79EE (sub_1800D79EE.c)
 *     sub_1800D96C9 @ 0x1800D96C9 (sub_1800D96C9.c)
 *     sub_1800DA5EF @ 0x1800DA5EF (sub_1800DA5EF.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18002C5D8 @ 0x18002C5D8 (sub_18002C5D8.c)
 */

__int64 __fastcall sub_180036868(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18002C5D8((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010234(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
