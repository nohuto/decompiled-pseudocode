/*
 * XREFs of sub_1800D0C74 @ 0x1800D0C74
 * Callers:
 *     sub_1800CF62C @ 0x1800CF62C (sub_1800CF62C.c)
 *     sub_1800CF964 @ 0x1800CF964 (sub_1800CF964.c)
 *     sub_1800D1394 @ 0x1800D1394 (sub_1800D1394.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D0C74(__int64 a1)
{
  __int64 result; // rax

  result = 0x1745D1745D1745DLL;
  if ( *(_QWORD *)(a1 + 16) == 0x1745D1745D1745DLL )
    std::_Xlength_error("unordered_map/set too long");
  return result;
}
