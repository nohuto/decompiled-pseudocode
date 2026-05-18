/*
 * XREFs of sub_1800CADF4 @ 0x1800CADF4
 * Callers:
 *     sub_1800CB974 @ 0x1800CB974 (sub_1800CB974.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000CBBC @ 0x18000CBBC (sub_18000CBBC.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_1800CADF4(void *a1)
{
  memset(a1, 0, 0x90uLL);
  return sub_18000CBBC((__int64)a1 + 48, 48LL, 2LL, (__int64 (__fastcall *)(__int64))sub_1800CAF40);
}
