/*
 * XREFs of sub_18004DC50 @ 0x18004DC50
 * Callers:
 *     sub_18004DF48 @ 0x18004DF48 (sub_18004DF48.c)
 * Callees:
 *     sub_18001F424 @ 0x18001F424 (sub_18001F424.c)
 */

__int64 __fastcall sub_18004DC50(__int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 144) + 4LL) + a1 - 144) = &std::istringstream::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 144) + 4LL);
  *(_DWORD *)(v2 + a1 - 148) = v2 - 144;
  sub_18001F424((_QWORD *)(a1 - 128));
  return std::istream::~istream<char,std::char_traits<char>>(a1 - 120);
}
