/*
 * XREFs of sub_180025EB0 @ 0x180025EB0
 * Callers:
 *     sub_180025070 @ 0x180025070 (sub_180025070.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180025EB0(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  if ( a1[1] == *a1 )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  return v1;
}
