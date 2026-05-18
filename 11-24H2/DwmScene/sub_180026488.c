/*
 * XREFs of sub_180026488 @ 0x180026488
 * Callers:
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 *     sub_18002DD04 @ 0x18002DD04 (sub_18002DD04.c)
 *     sub_1800502A0 @ 0x1800502A0 (sub_1800502A0.c)
 *     sub_18005DE90 @ 0x18005DE90 (sub_18005DE90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180026488(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)a2 = **a4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  return result;
}
