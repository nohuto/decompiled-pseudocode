/*
 * XREFs of sub_18001E324 @ 0x18001E324
 * Callers:
 *     sub_18001D698 @ 0x18001D698 (sub_18001D698.c)
 *     sub_1800789B4 @ 0x1800789B4 (sub_1800789B4.c)
 *     sub_18007AB68 @ 0x18007AB68 (sub_18007AB68.c)
 *     sub_180084D78 @ 0x180084D78 (sub_180084D78.c)
 *     sub_180094CE8 @ 0x180094CE8 (sub_180094CE8.c)
 *     sub_1800CCD2C @ 0x1800CCD2C (sub_1800CCD2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001E324(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x3FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 2;
  v4 = v3 >> 1;
  if ( v3 <= 0x3FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
