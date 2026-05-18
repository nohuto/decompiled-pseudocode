/*
 * XREFs of sub_18002B468 @ 0x18002B468
 * Callers:
 *     sub_180028E6C @ 0x180028E6C (sub_180028E6C.c)
 *     sub_180028F84 @ 0x180028F84 (sub_180028F84.c)
 *     sub_18006CF4C @ 0x18006CF4C (sub_18006CF4C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18002B468(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x1AF286BCA1AF286LL;
  v3 = (0x86BCA1AF286BCA1BuLL * ((__int64)(a1[2] - *a1) >> 3)) >> 1;
  if ( 0x86BCA1AF286BCA1BuLL * ((__int64)(a1[2] - *a1) >> 3) <= 0x1AF286BCA1AF286LL - v3 )
  {
    result = v3 - 0x79435E50D79435E5LL * ((__int64)(a1[2] - *a1) >> 3);
    if ( result < a2 )
      return a2;
  }
  return result;
}
