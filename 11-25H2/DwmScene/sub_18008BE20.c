/*
 * XREFs of sub_18008BE20 @ 0x18008BE20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032AC8 @ 0x180032AC8 (sub_180032AC8.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 */

__int64 __fastcall sub_18008BE20(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v5; // edx

  result = *a4;
  v5 = *(_DWORD *)(*a4 + 440);
  if ( (v5 & 0x10000) != 0 && (v5 & 0x8000000) != 0 )
  {
    sub_180078418(a1);
    sub_180032AC8();
  }
  return result;
}
