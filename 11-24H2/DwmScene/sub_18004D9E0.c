/*
 * XREFs of sub_18004D9E0 @ 0x18004D9E0
 * Callers:
 *     sub_180085C64 @ 0x180085C64 (sub_180085C64.c)
 *     sub_180085E20 @ 0x180085E20 (sub_180085E20.c)
 *     sub_1800862C0 @ 0x1800862C0 (sub_1800862C0.c)
 * Callees:
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18004E738 @ 0x18004E738 (sub_18004E738.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18004D9E0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax

  *a1 = &unk_180103968;
  std::ios::ios(a1 + 18);
  std::istream::istream(a1, a1 + 2, 0LL, 0LL);
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::istringstream::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 144;
  std::streambuf::streambuf(a1 + 2);
  a1[2] = &std::stringbuf::`vftable';
  v4 = sub_1800138F8(a2);
  sub_18004E738(a1 + 2, v4, *(_QWORD *)(a2 + 16), 2LL);
  return a1;
}
