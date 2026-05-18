/*
 * XREFs of sub_1800D60AD @ 0x1800D60AD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D60AD(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 56) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    return std::ios::~ios<char,std::char_traits<char>>(*(_QWORD *)(a2 + 48) + 152LL);
  }
  return result;
}
