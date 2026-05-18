/*
 * XREFs of sub_180093BA0 @ 0x180093BA0
 * Callers:
 *     sub_180094390 @ 0x180094390 (sub_180094390.c)
 *     sub_180094A00 @ 0x180094A00 (sub_180094A00.c)
 * Callees:
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 */

__int64 __fastcall sub_180093BA0(__int64 a1)
{
  __int64 result; // rax

  sub_18001254C((__int64 *)(a1 + 24), (_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 40) = -1;
  result = 1065353216LL;
  *(_DWORD *)(a1 + 44) = 1065353216;
  *(_DWORD *)(a1 + 48) = 1065353216;
  *(_DWORD *)(a1 + 52) = 1065353216;
  *(_DWORD *)(a1 + 56) = 1065353216;
  *(_WORD *)(a1 + 60) = 256;
  return result;
}
