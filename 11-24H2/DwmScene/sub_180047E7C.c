/*
 * XREFs of sub_180047E7C @ 0x180047E7C
 * Callers:
 *     sub_180047604 @ 0x180047604 (sub_180047604.c)
 * Callees:
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 */

__int64 __fastcall sub_180047E7C(__int64 a1, __int64 a2)
{
  sub_18001254C((__int64 *)a1, (_QWORD *)a2);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  sub_18001254C((__int64 *)(a1 + 24), (_QWORD *)(a2 + 24));
  sub_18001254C((__int64 *)(a1 + 40), (_QWORD *)(a2 + 40));
  sub_18001254C((__int64 *)(a1 + 56), (_QWORD *)(a2 + 56));
  sub_18001254C((__int64 *)(a1 + 72), (_QWORD *)(a2 + 72));
  return a1;
}
