/*
 * XREFs of unknown_libname_4 @ 0x18002DA10
 * Callers:
 *     sub_180033E24 @ 0x180033E24 (sub_180033E24.c)
 * Callees:
 *     sub_1800305B8 @ 0x1800305B8 (sub_1800305B8.c)
 */

// Microsoft VisualC v7/14 64bit runtime
__int64 __fastcall unknown_libname_4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 16LL )
  {
    sub_1800305B8(a3, i);
    a3 += 16LL;
  }
  return a3;
}
