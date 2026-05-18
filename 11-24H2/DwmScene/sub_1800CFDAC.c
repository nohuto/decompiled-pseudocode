/*
 * XREFs of sub_1800CFDAC @ 0x1800CFDAC
 * Callers:
 *     sub_1800CFEF8 @ 0x1800CFEF8 (sub_1800CFEF8.c)
 *     sub_1800CFF28 @ 0x1800CFF28 (sub_1800CFF28.c)
 *     sub_1800E2547 @ 0x1800E2547 (sub_1800E2547.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_1800CFDAC(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010234(v1, 0xC0uLL);
  return result;
}
