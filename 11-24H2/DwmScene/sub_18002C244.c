/*
 * XREFs of sub_18002C244 @ 0x18002C244
 * Callers:
 *     sub_18002E740 @ 0x18002E740 (sub_18002E740.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000CD2C @ 0x18000CD2C (sub_18000CD2C.c)
 *     sub_180023FEC @ 0x180023FEC (sub_180023FEC.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_18002C244(__int64 a1)
{
  memset((void *)a1, 0, 0x128uLL);
  sub_180023FEC((_QWORD *)a1);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return sub_18000CD2C(a1 + 56, 24LL, 10LL, (__int64 (__fastcall *)(__int64))unknown_libname_137);
}
