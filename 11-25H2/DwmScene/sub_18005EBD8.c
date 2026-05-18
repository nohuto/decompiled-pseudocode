/*
 * XREFs of sub_18005EBD8 @ 0x18005EBD8
 * Callers:
 *     sub_180060070 @ 0x180060070 (sub_180060070.c)
 *     sub_1800604D0 @ 0x1800604D0 (sub_1800604D0.c)
 * Callees:
 *     sub_18005DD30 @ 0x18005DD30 (sub_18005DD30.c)
 */

__int64 __fastcall sub_18005EBD8(__int64 *a1, _DWORD *a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)sub_18005DD30(a1, (__int64)v3, a2) + 40LL;
}
