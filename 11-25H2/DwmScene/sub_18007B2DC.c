/*
 * XREFs of sub_18007B2DC @ 0x18007B2DC
 * Callers:
 *     sub_18007AC94 @ 0x18007AC94 (sub_18007AC94.c)
 * Callees:
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 */

__int64 __fastcall sub_18007B2DC(__int64 a1, __int64 a2)
{
  sub_18001244C((__int64 *)a1, (_QWORD *)a2);
  sub_18001244C((__int64 *)(a1 + 16), (_QWORD *)(a2 + 16));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  return a1;
}
