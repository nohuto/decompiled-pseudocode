/*
 * XREFs of sub_180087030 @ 0x180087030
 * Callers:
 *     sub_1800871D0 @ 0x1800871D0 (sub_1800871D0.c)
 * Callees:
 *     sub_18001C0F0 @ 0x18001C0F0 (sub_18001C0F0.c)
 *     sub_180087720 @ 0x180087720 (sub_180087720.c)
 *     sub_18008786C @ 0x18008786C (sub_18008786C.c)
 *     sub_180087928 @ 0x180087928 (sub_180087928.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180087030(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax

  v6 = *a3;
  *a3 = 0LL;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 52);
  *(_QWORD *)(a1 + 32) = 0LL;
  sub_180087720(a1 + 40, a2 + 56);
  sub_18001C0F0(a1 + 104, a2 + 120);
  *(_BYTE *)(a1 + 168) = 0;
  sub_18008786C(a2);
  sub_180087928(a3);
  return a1;
}
