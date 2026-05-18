/*
 * XREFs of sub_18004D880 @ 0x18004D880
 * Callers:
 *     sub_180085B04 @ 0x180085B04 (sub_180085B04.c)
 *     sub_180085CC0 @ 0x180085CC0 (sub_180085CC0.c)
 *     sub_180086160 @ 0x180086160 (sub_180086160.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18004E5D8 @ 0x18004E5D8 (sub_18004E5D8.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18004D880(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax

  *a1 = &unk_180102968;
  std::ios::ios(a1 + 18);
  std::istream::istream(a1, a1 + 2, 0LL, 0LL);
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::istringstream::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 144;
  std::streambuf::streambuf(a1 + 2);
  a1[2] = &std::stringbuf::`vftable';
  v4 = sub_1800137F8(a2);
  sub_18004E5D8(a1 + 2, v4, *(_QWORD *)(a2 + 16), 2LL);
  return a1;
}
