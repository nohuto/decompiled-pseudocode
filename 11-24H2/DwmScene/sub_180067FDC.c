/*
 * XREFs of sub_180067FDC @ 0x180067FDC
 * Callers:
 *     sub_18005E200 @ 0x18005E200 (sub_18005E200.c)
 *     sub_18005E324 @ 0x18005E324 (sub_18005E324.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180067FDC(__int64 a1)
{
  __int64 result; // rax

  result = 0x555555555555555LL;
  if ( *(_QWORD *)(a1 + 16) == 0x555555555555555LL )
    std::_Xlength_error("unordered_map/set too long");
  return result;
}
