/*
 * XREFs of sub_18005ED38 @ 0x18005ED38
 * Callers:
 *     sub_1800601D0 @ 0x1800601D0 (sub_1800601D0.c)
 *     sub_180060630 @ 0x180060630 (sub_180060630.c)
 * Callees:
 *     sub_18005DE90 @ 0x18005DE90 (sub_18005DE90.c)
 */

__int64 __fastcall sub_18005ED38(__int64 *a1, _DWORD *a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)sub_18005DE90(a1, (__int64)v3, a2) + 40LL;
}
