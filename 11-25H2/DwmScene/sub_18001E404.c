/*
 * XREFs of sub_18001E404 @ 0x18001E404
 * Callers:
 *     sub_1800544F4 @ 0x1800544F4 (sub_1800544F4.c)
 *     sub_1800CF2A4 @ 0x1800CF2A4 (sub_1800CF2A4.c)
 *     sub_1800D1320 @ 0x1800D1320 (sub_1800D1320.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001D79C @ 0x18001D79C (sub_18001D79C.c)
 */

__int64 __fastcall sub_18001E404(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18001D79C((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_180010134(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
  return result;
}
