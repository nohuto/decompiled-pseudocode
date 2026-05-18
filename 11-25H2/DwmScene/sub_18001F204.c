/*
 * XREFs of sub_18001F204 @ 0x18001F204
 * Callers:
 *     sub_1800C2170 @ 0x1800C2170 (sub_1800C2170.c)
 *     sub_1800C223C @ 0x1800C223C (sub_1800C223C.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001F204(__int64 a1)
{
  *(_QWORD *)a1 = &unk_1800F78C8;
  *(_QWORD *)(a1 + 16) = &unk_1800F78C0;
  std::ios::ios(a1 + 152);
  std::iostream::basic_iostream<char>(a1, a1 + 24, 0LL);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 152;
  std::streambuf::streambuf(a1 + 24);
  *(_QWORD *)(a1 + 24) = &std::stringbuf::`vftable';
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_DWORD *)(a1 + 136) = 0;
  return a1;
}
