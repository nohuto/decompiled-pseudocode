/*
 * XREFs of sub_18004D7E4 @ 0x18004D7E4
 * Callers:
 *     sub_180085CC0 @ 0x180085CC0 (sub_180085CC0.c)
 *     sub_180086160 @ 0x180086160 (sub_180086160.c)
 *     sub_180086554 @ 0x180086554 (sub_180086554.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004D7E4(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r8

  v3 = a2;
  LOBYTE(a2) = 10;
  LOBYTE(v4) = std::ios::widen(a1 + *(int *)(*(_QWORD *)a1 + 4LL), a2);
  return sub_18004D674(a1, v3, v4);
}
