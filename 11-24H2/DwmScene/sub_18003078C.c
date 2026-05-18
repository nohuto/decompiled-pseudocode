/*
 * XREFs of sub_18003078C @ 0x18003078C
 * Callers:
 *     sub_180034D98 @ 0x180034D98 (sub_180034D98.c)
 * Callees:
 *     sub_18002E0F8 @ 0x18002E0F8 (sub_18002E0F8.c)
 */

__int64 __fastcall sub_18003078C(__int64 *a1, __int64 a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)sub_18002E0F8(a1, (__int64)v3, a2) + 64LL;
}
