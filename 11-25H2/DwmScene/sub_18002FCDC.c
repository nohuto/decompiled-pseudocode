/*
 * XREFs of sub_18002FCDC @ 0x18002FCDC
 * Callers:
 *     sub_180030650 @ 0x180030650 (sub_180030650.c)
 * Callees:
 *     sub_18002FCA8 @ 0x18002FCA8 (sub_18002FCA8.c)
 */

__int64 __fastcall sub_18002FCDC(__int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 152) + 4LL) + a1 - 152) = &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 152) + 4LL);
  *(_DWORD *)(v2 + a1 - 156) = v2 - 152;
  sub_18002FCA8((_QWORD *)(a1 - 128));
  return std::wiostream::~basic_iostream<wchar_t,std::char_traits<wchar_t>>(a1 - 120);
}
