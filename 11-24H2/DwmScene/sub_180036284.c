/*
 * XREFs of sub_180036284 @ 0x180036284
 * Callers:
 *     sub_18002CBC4 @ 0x18002CBC4 (sub_18002CBC4.c)
 *     sub_18005283C @ 0x18005283C (sub_18005283C.c)
 *     sub_18005A3A4 @ 0x18005A3A4 (sub_18005A3A4.c)
 *     sub_18005DE1C @ 0x18005DE1C (sub_18005DE1C.c)
 *     sub_18008D800 @ 0x18008D800 (sub_18008D800.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18002C5D8 @ 0x18002C5D8 (sub_18002C5D8.c)
 */

__int64 __fastcall sub_180036284(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18002C5D8((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_180010234(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  return result;
}
