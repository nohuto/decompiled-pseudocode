/*
 * XREFs of sub_18002F16C @ 0x18002F16C
 * Callers:
 *     sub_1800328FC @ 0x1800328FC (sub_1800328FC.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002F16C(__int64 a1)
{
  *(_QWORD *)a1 = &unk_1800F88C8;
  *(_QWORD *)(a1 + 16) = &unk_1800F88C0;
  std::wios::wios(a1 + 152);
  std::wiostream::basic_iostream<wchar_t>(a1, a1 + 24, 0LL);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 152;
  std::wstreambuf::wstreambuf(a1 + 24);
  *(_QWORD *)(a1 + 24) = &std::wstringbuf::`vftable';
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_DWORD *)(a1 + 136) = 0;
  return a1;
}
