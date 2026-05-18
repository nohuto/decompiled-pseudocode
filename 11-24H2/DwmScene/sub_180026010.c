/*
 * XREFs of sub_180026010 @ 0x180026010
 * Callers:
 *     sub_1800251D0 @ 0x1800251D0 (sub_1800251D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180026010(__int64 *a1)
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
