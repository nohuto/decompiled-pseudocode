/*
 * XREFs of sub_18004D944 @ 0x18004D944
 * Callers:
 *     sub_180085E20 @ 0x180085E20 (sub_180085E20.c)
 *     sub_1800862C0 @ 0x1800862C0 (sub_1800862C0.c)
 *     sub_1800866B4 @ 0x1800866B4 (sub_1800866B4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004D944(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r8

  v3 = a2;
  LOBYTE(a2) = 10;
  LOBYTE(v4) = std::ios::widen(a1 + *(int *)(*(_QWORD *)a1 + 4LL), a2);
  return sub_18004D7D4(a1, v3, v4);
}
