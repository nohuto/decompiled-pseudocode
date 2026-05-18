/*
 * XREFs of sub_180046E58 @ 0x180046E58
 * Callers:
 *     sub_180013A60 @ 0x180013A60 (sub_180013A60.c)
 *     sub_180082D38 @ 0x180082D38 (sub_180082D38.c)
 *     sub_180082EF0 @ 0x180082EF0 (sub_180082EF0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180046E58(__int64 a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 124) )
    *(_DWORD *)(a1 + 124) = a2;
  *(_DWORD *)(a1 + 120) = a2;
}
