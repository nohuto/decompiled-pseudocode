/*
 * XREFs of sub_1800CAF54 @ 0x1800CAF54
 * Callers:
 *     sub_1800CBAD4 @ 0x1800CBAD4 (sub_1800CBAD4.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000CD2C @ 0x18000CD2C (sub_18000CD2C.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_1800CAF54(void *a1)
{
  memset(a1, 0, 0x90uLL);
  return sub_18000CD2C((__int64)a1 + 48, 48LL, 2LL, (__int64 (__fastcall *)(__int64))sub_1800CB0A0);
}
