/*
 * XREFs of sub_18007B3FC @ 0x18007B3FC
 * Callers:
 *     sub_18007B19C @ 0x18007B19C (sub_18007B19C.c)
 * Callees:
 *     sub_18007ADF4 @ 0x18007ADF4 (sub_18007ADF4.c)
 */

__int64 *__fastcall sub_18007B3FC(__int64 *a1, __int64 *a2)
{
  if ( a1 != a2 )
    sub_18007ADF4(a1, *a2, 0xCCCCCCCCCCCCCCCDuLL * ((a2[1] - *a2) >> 3));
  return a1;
}
