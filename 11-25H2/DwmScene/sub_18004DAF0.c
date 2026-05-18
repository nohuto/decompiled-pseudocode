/*
 * XREFs of sub_18004DAF0 @ 0x18004DAF0
 * Callers:
 *     sub_18004DDE8 @ 0x18004DDE8 (sub_18004DDE8.c)
 * Callees:
 *     sub_18001F2C4 @ 0x18001F2C4 (sub_18001F2C4.c)
 */

__int64 __fastcall sub_18004DAF0(__int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 144) + 4LL) + a1 - 144) = &std::istringstream::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 144) + 4LL);
  *(_DWORD *)(v2 + a1 - 148) = v2 - 144;
  sub_18001F2C4((_QWORD *)(a1 - 128));
  return std::istream::~istream<char,std::char_traits<char>>(a1 - 120);
}
