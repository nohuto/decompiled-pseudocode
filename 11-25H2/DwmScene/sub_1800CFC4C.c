/*
 * XREFs of sub_1800CFC4C @ 0x1800CFC4C
 * Callers:
 *     sub_1800CFD98 @ 0x1800CFD98 (sub_1800CFD98.c)
 *     sub_1800CFDC8 @ 0x1800CFDC8 (sub_1800CFDC8.c)
 *     sub_1800E23E7 @ 0x1800E23E7 (sub_1800E23E7.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_1800CFC4C(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010134(v1, 0xC0uLL);
  return result;
}
