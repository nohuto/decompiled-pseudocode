/*
 * XREFs of sub_180034808 @ 0x180034808
 * Callers:
 *     sub_1800269B8 @ 0x1800269B8 (sub_1800269B8.c)
 *     sub_180032804 @ 0x180032804 (sub_180032804.c)
 *     sub_180039518 @ 0x180039518 (sub_180039518.c)
 *     sub_18004BC6C @ 0x18004BC6C (sub_18004BC6C.c)
 *     sub_1800508B0 @ 0x1800508B0 (sub_1800508B0.c)
 *     sub_180050AB0 @ 0x180050AB0 (sub_180050AB0.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 *     sub_180068F70 @ 0x180068F70 (sub_180068F70.c)
 *     sub_1800782A0 @ 0x1800782A0 (sub_1800782A0.c)
 *     sub_18007F020 @ 0x18007F020 (sub_18007F020.c)
 *     sub_18007F7E0 @ 0x18007F7E0 (sub_18007F7E0.c)
 *     sub_1800814EC @ 0x1800814EC (sub_1800814EC.c)
 *     sub_180082480 @ 0x180082480 (sub_180082480.c)
 *     sub_180085630 @ 0x180085630 (sub_180085630.c)
 * Callees:
 *     sub_180028584 @ 0x180028584 (sub_180028584.c)
 *     sub_1800287FC @ 0x1800287FC (sub_1800287FC.c)
 *     sub_18002F3D8 @ 0x18002F3D8 (sub_18002F3D8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180034808(__int64 a1, __int64 *a2)
{
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF

  sub_1800287FC(a1 + 112, (__int64)v5);
  sub_18002F3D8(a2, a1 + 88);
  sub_180028584((__int64)v5);
  return a2;
}
