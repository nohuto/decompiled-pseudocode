/*
 * XREFs of sub_1800D0DD4 @ 0x1800D0DD4
 * Callers:
 *     sub_1800CF78C @ 0x1800CF78C (sub_1800CF78C.c)
 *     sub_1800CFAC4 @ 0x1800CFAC4 (sub_1800CFAC4.c)
 *     sub_1800D14F4 @ 0x1800D14F4 (sub_1800D14F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D0DD4(__int64 a1)
{
  __int64 result; // rax

  result = 0x1745D1745D1745DLL;
  if ( *(_QWORD *)(a1 + 16) == 0x1745D1745D1745DLL )
    std::_Xlength_error("unordered_map/set too long");
  return result;
}
