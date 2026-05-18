/*
 * XREFs of sub_180010DC0 @ 0x180010DC0
 * Callers:
 *     sub_180010C10 @ 0x180010C10 (sub_180010C10.c)
 *     sub_180010D7C @ 0x180010D7C (sub_180010D7C.c)
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 *     sub_180016AB8 @ 0x180016AB8 (sub_180016AB8.c)
 *     sub_18002CBC4 @ 0x18002CBC4 (sub_18002CBC4.c)
 *     sub_18002E40C @ 0x18002E40C (sub_18002E40C.c)
 *     sub_180052914 @ 0x180052914 (sub_180052914.c)
 *     sub_18005A27C @ 0x18005A27C (sub_18005A27C.c)
 *     sub_18005A3A4 @ 0x18005A3A4 (sub_18005A3A4.c)
 *     sub_180089150 @ 0x180089150 (sub_180089150.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010DC0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = *a3;
  result = a3[1];
  a2[1] = result;
  *a3 = 0LL;
  a3[1] = 0LL;
  return result;
}
