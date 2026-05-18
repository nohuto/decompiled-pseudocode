/*
 * XREFs of sub_180013FD0 @ 0x180013FD0
 * Callers:
 *     sub_180013CEC @ 0x180013CEC (sub_180013CEC.c)
 * Callees:
 *     sub_180047BB0 @ 0x180047BB0 (sub_180047BB0.c)
 */

__int64 __fastcall sub_180013FD0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v5[0] = v2;
  v3 = a2[1];
  a2[1] = 0LL;
  v5[1] = v3;
  return sub_180047BB0(a1, v5);
}
