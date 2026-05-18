/*
 * XREFs of sub_180041F14 @ 0x180041F14
 * Callers:
 *     sub_180042358 @ 0x180042358 (sub_180042358.c)
 *     sub_1800431B4 @ 0x1800431B4 (sub_1800431B4.c)
 *     sub_180043710 @ 0x180043710 (sub_180043710.c)
 *     sub_180043CA4 @ 0x180043CA4 (sub_180043CA4.c)
 *     sub_18004D35C @ 0x18004D35C (sub_18004D35C.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_1800764D0 @ 0x1800764D0 (sub_1800764D0.c)
 *     sub_180076860 @ 0x180076860 (sub_180076860.c)
 *     sub_180076F14 @ 0x180076F14 (sub_180076F14.c)
 *     sub_18008F6A0 @ 0x18008F6A0 (sub_18008F6A0.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

__int64 __fastcall sub_180041F14(__int64 a1, __int64 a2, int a3)
{
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  sub_180011A5C(a2);
  return a1;
}
