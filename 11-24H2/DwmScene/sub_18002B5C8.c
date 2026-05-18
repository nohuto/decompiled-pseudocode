/*
 * XREFs of sub_18002B5C8 @ 0x18002B5C8
 * Callers:
 *     sub_180028FCC @ 0x180028FCC (sub_180028FCC.c)
 *     sub_1800290E4 @ 0x1800290E4 (sub_1800290E4.c)
 *     sub_18006D0AC @ 0x18006D0AC (sub_18006D0AC.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18002B5C8(_QWORD *a1, unsigned __int64 a2)
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
