/*
 * XREFs of sub_1800463F0 @ 0x1800463F0
 * Callers:
 *     sub_180013A60 @ 0x180013A60 (sub_180013A60.c)
 *     sub_180082D38 @ 0x180082D38 (sub_180082D38.c)
 *     sub_180082EF0 @ 0x180082EF0 (sub_180082EF0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800463F0(__int64 a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 116) )
    *(_DWORD *)(a1 + 116) = a2;
  *(_DWORD *)(a1 + 112) = a2;
}
