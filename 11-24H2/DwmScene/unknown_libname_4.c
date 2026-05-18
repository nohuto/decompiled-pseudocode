/*
 * XREFs of unknown_libname_4 @ 0x18002DB70
 * Callers:
 *     sub_180033F84 @ 0x180033F84 (sub_180033F84.c)
 * Callees:
 *     sub_180030718 @ 0x180030718 (sub_180030718.c)
 */

// Microsoft VisualC v7/14 64bit runtime
__int64 __fastcall unknown_libname_4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 16LL )
  {
    sub_180030718(a3, i);
    a3 += 16LL;
  }
  return a3;
}
