/*
 * XREFs of sub_180046CF8 @ 0x180046CF8
 * Callers:
 *     sub_180013960 @ 0x180013960 (sub_180013960.c)
 *     sub_180082BD8 @ 0x180082BD8 (sub_180082BD8.c)
 *     sub_180082D90 @ 0x180082D90 (sub_180082D90.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180046CF8(__int64 a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 124) )
    *(_DWORD *)(a1 + 124) = a2;
  *(_DWORD *)(a1 + 120) = a2;
}
