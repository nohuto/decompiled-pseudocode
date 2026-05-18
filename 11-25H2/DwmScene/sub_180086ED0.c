/*
 * XREFs of sub_180086ED0 @ 0x180086ED0
 * Callers:
 *     sub_180087070 @ 0x180087070 (sub_180087070.c)
 * Callees:
 *     sub_18001BF90 @ 0x18001BF90 (sub_18001BF90.c)
 *     sub_1800875C0 @ 0x1800875C0 (sub_1800875C0.c)
 *     sub_18008770C @ 0x18008770C (sub_18008770C.c)
 *     sub_1800877C8 @ 0x1800877C8 (sub_1800877C8.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180086ED0(__int64 a1, __int64 a2, __int64 *a3)
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
  sub_1800875C0(a1 + 40, a2 + 56);
  sub_18001BF90(a1 + 104, a2 + 120);
  *(_BYTE *)(a1 + 168) = 0;
  sub_18008770C(a2);
  sub_1800877C8(a3);
  return a1;
}
