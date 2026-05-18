/*
 * XREFs of sub_1800408E0 @ 0x1800408E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032C28 @ 0x180032C28 (sub_180032C28.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 */

__int64 __fastcall sub_1800408E0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v5; // edx

  result = *a4;
  v5 = *(_DWORD *)(*a4 + 440);
  if ( (v5 & 0x10000) != 0 && (v5 & 0x200000) != 0 )
  {
    sub_180078578();
    sub_180032C28();
  }
  return result;
}
