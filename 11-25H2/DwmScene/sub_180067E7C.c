/*
 * XREFs of sub_180067E7C @ 0x180067E7C
 * Callers:
 *     sub_18005E0A0 @ 0x18005E0A0 (sub_18005E0A0.c)
 *     sub_18005E1C4 @ 0x18005E1C4 (sub_18005E1C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180067E7C(__int64 a1)
{
  __int64 result; // rax

  result = 0x555555555555555LL;
  if ( *(_QWORD *)(a1 + 16) == 0x555555555555555LL )
    std::_Xlength_error("unordered_map/set too long");
  return result;
}
