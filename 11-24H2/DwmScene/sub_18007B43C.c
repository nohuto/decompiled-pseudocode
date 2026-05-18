/*
 * XREFs of sub_18007B43C @ 0x18007B43C
 * Callers:
 *     sub_18007ADF4 @ 0x18007ADF4 (sub_18007ADF4.c)
 * Callees:
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 */

__int64 __fastcall sub_18007B43C(__int64 a1, __int64 a2)
{
  sub_18001254C((__int64 *)a1, (_QWORD *)a2);
  sub_18001254C((__int64 *)(a1 + 16), (_QWORD *)(a2 + 16));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  return a1;
}
