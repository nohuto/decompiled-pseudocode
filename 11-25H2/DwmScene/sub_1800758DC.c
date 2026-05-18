/*
 * XREFs of sub_1800758DC @ 0x1800758DC
 * Callers:
 *     sub_180073DF8 @ 0x180073DF8 (sub_180073DF8.c)
 *     sub_180073E98 @ 0x180073E98 (sub_180073E98.c)
 *     sub_1800751E0 @ 0x1800751E0 (sub_1800751E0.c)
 *     sub_180077D00 @ 0x180077D00 (sub_180077D00.c)
 *     sub_1800851A8 @ 0x1800851A8 (sub_1800851A8.c)
 *     sub_180085908 @ 0x180085908 (sub_180085908.c)
 *     sub_180085B04 @ 0x180085B04 (sub_180085B04.c)
 *     sub_1800DAA15 @ 0x1800DAA15 (sub_1800DAA15.c)
 *     sub_1800DB198 @ 0x1800DB198 (sub_1800DB198.c)
 *     sub_1800E1F55 @ 0x1800E1F55 (sub_1800E1F55.c)
 *     sub_1800E1FAF @ 0x1800E1FAF (sub_1800E1FAF.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_1800758DC(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_180010134(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
