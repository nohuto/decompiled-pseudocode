/*
 * XREFs of sub_180093A40 @ 0x180093A40
 * Callers:
 *     sub_180094230 @ 0x180094230 (sub_180094230.c)
 *     sub_1800948A0 @ 0x1800948A0 (sub_1800948A0.c)
 * Callees:
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 */

__int64 __fastcall sub_180093A40(__int64 a1)
{
  __int64 result; // rax

  sub_18001244C((__int64 *)(a1 + 24), (_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 40) = -1;
  result = 1065353216LL;
  *(_DWORD *)(a1 + 44) = 1065353216;
  *(_DWORD *)(a1 + 48) = 1065353216;
  *(_DWORD *)(a1 + 52) = 1065353216;
  *(_DWORD *)(a1 + 56) = 1065353216;
  *(_WORD *)(a1 + 60) = 256;
  return result;
}
