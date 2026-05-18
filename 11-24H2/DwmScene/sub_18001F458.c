/*
 * XREFs of sub_18001F458 @ 0x18001F458
 * Callers:
 *     sub_18001F4BC @ 0x18001F4BC (sub_18001F4BC.c)
 * Callees:
 *     sub_18001F424 @ 0x18001F424 (sub_18001F424.c)
 */

__int64 __fastcall sub_18001F458(__int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 152) + 4LL) + a1 - 152) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 152) + 4LL);
  *(_DWORD *)(v2 + a1 - 156) = v2 - 152;
  sub_18001F424((_QWORD *)(a1 - 128));
  return std::iostream::~basic_iostream<char,std::char_traits<char>>(a1 - 120);
}
