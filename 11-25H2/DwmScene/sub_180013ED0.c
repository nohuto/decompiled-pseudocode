/*
 * XREFs of sub_180013ED0 @ 0x180013ED0
 * Callers:
 *     sub_180013BEC @ 0x180013BEC (sub_180013BEC.c)
 * Callees:
 *     sub_180047A50 @ 0x180047A50 (sub_180047A50.c)
 */

__int64 __fastcall sub_180013ED0(__int64 a1, __int64 *a2)
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
  return sub_180047A50(a1, v5);
}
