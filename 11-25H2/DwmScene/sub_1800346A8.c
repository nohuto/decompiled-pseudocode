/*
 * XREFs of sub_1800346A8 @ 0x1800346A8
 * Callers:
 *     sub_180026858 @ 0x180026858 (sub_180026858.c)
 *     sub_1800326A4 @ 0x1800326A4 (sub_1800326A4.c)
 *     sub_1800393B8 @ 0x1800393B8 (sub_1800393B8.c)
 *     sub_18004BB0C @ 0x18004BB0C (sub_18004BB0C.c)
 *     sub_180050750 @ 0x180050750 (sub_180050750.c)
 *     sub_180050950 @ 0x180050950 (sub_180050950.c)
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 *     sub_180078140 @ 0x180078140 (sub_180078140.c)
 *     sub_18007EEC0 @ 0x18007EEC0 (sub_18007EEC0.c)
 *     sub_18007F680 @ 0x18007F680 (sub_18007F680.c)
 *     sub_18008138C @ 0x18008138C (sub_18008138C.c)
 *     sub_180082320 @ 0x180082320 (sub_180082320.c)
 *     sub_1800854D0 @ 0x1800854D0 (sub_1800854D0.c)
 * Callees:
 *     sub_180028424 @ 0x180028424 (sub_180028424.c)
 *     sub_18002869C @ 0x18002869C (sub_18002869C.c)
 *     sub_18002F278 @ 0x18002F278 (sub_18002F278.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800346A8(__int64 a1, __int64 *a2)
{
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF

  sub_18002869C(a1 + 112, (__int64)v5);
  sub_18002F278(a2, a1 + 88);
  sub_180028424((__int64)v5);
  return a2;
}
