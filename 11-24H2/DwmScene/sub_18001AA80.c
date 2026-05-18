/*
 * XREFs of sub_18001AA80 @ 0x18001AA80
 * Callers:
 *     sub_180017398 @ 0x180017398 (sub_180017398.c)
 *     sub_1800173F0 @ 0x1800173F0 (sub_1800173F0.c)
 *     sub_1800173FC @ 0x1800173FC (sub_1800173FC.c)
 *     sub_18003905C @ 0x18003905C (sub_18003905C.c)
 *     sub_180042490 @ 0x180042490 (sub_180042490.c)
 *     sub_18004B918 @ 0x18004B918 (sub_18004B918.c)
 *     sub_18005AEE4 @ 0x18005AEE4 (sub_18005AEE4.c)
 *     sub_18007A6A4 @ 0x18007A6A4 (sub_18007A6A4.c)
 *     sub_1800852C8 @ 0x1800852C8 (sub_1800852C8.c)
 *     sub_1800DAA24 @ 0x1800DAA24 (sub_1800DAA24.c)
 *     sub_1800E23FB @ 0x1800E23FB (sub_1800E23FB.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_18001AA80(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_180010234(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
