/*
 * XREFs of sub_180024570 @ 0x180024570
 * Callers:
 *     sub_1800D62CD @ 0x1800D62CD (sub_1800D62CD.c)
 *     sub_1800D65C5 @ 0x1800D65C5 (sub_1800D65C5.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_1800237E4 @ 0x1800237E4 (sub_1800237E4.c)
 */

__int64 __fastcall sub_180024570(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_1800237E4((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010134(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
