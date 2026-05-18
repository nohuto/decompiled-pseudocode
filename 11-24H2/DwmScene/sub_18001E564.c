/*
 * XREFs of sub_18001E564 @ 0x18001E564
 * Callers:
 *     sub_180054654 @ 0x180054654 (sub_180054654.c)
 *     sub_1800CF404 @ 0x1800CF404 (sub_1800CF404.c)
 *     sub_1800D1480 @ 0x1800D1480 (sub_1800D1480.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001D8FC @ 0x18001D8FC (sub_18001D8FC.c)
 */

__int64 __fastcall sub_18001E564(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18001D8FC((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_180010234(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
  return result;
}
