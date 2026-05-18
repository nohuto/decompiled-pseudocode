/*
 * XREFs of sub_18007CCA4 @ 0x18007CCA4
 * Callers:
 *     sub_18007B2B0 @ 0x18007B2B0 (sub_18007B2B0.c)
 *     sub_180082D0C @ 0x180082D0C (sub_180082D0C.c)
 *     sub_180082FB4 @ 0x180082FB4 (sub_180082FB4.c)
 *     sub_1800D3CCC @ 0x1800D3CCC (sub_1800D3CCC.c)
 *     sub_1800D4140 @ 0x1800D4140 (sub_1800D4140.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_18007CCA4(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_180010234(v2, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 2));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
