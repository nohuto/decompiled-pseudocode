/*
 * XREFs of sub_18002C0E4 @ 0x18002C0E4
 * Callers:
 *     sub_18002E5E0 @ 0x18002E5E0 (sub_18002E5E0.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000CBBC @ 0x18000CBBC (sub_18000CBBC.c)
 *     sub_180023E8C @ 0x180023E8C (sub_180023E8C.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_18002C0E4(__int64 a1)
{
  memset((void *)a1, 0, 0x128uLL);
  sub_180023E8C((_QWORD *)a1);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return sub_18000CBBC(a1 + 56, 24LL, 10LL, (__int64 (__fastcall *)(__int64))unknown_libname_137);
}
