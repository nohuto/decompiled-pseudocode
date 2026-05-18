/*
 * XREFs of sub_180010CC0 @ 0x180010CC0
 * Callers:
 *     sub_180010B10 @ 0x180010B10 (sub_180010B10.c)
 *     sub_180010C7C @ 0x180010C7C (sub_180010C7C.c)
 *     sub_180012284 @ 0x180012284 (sub_180012284.c)
 *     sub_1800169B8 @ 0x1800169B8 (sub_1800169B8.c)
 *     sub_18002CA64 @ 0x18002CA64 (sub_18002CA64.c)
 *     sub_18002E2AC @ 0x18002E2AC (sub_18002E2AC.c)
 *     sub_1800527B4 @ 0x1800527B4 (sub_1800527B4.c)
 *     sub_18005A11C @ 0x18005A11C (sub_18005A11C.c)
 *     sub_18005A244 @ 0x18005A244 (sub_18005A244.c)
 *     sub_180088FF0 @ 0x180088FF0 (sub_180088FF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010CC0(__int64 a1, _QWORD *a2, _QWORD *a3)
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
