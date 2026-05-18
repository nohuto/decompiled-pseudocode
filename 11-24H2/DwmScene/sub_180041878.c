/*
 * XREFs of sub_180041878 @ 0x180041878
 * Callers:
 *     sub_1800413CC @ 0x1800413CC (sub_1800413CC.c)
 *     sub_180049390 @ 0x180049390 (sub_180049390.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180041878(__int64 a1)
{
  if ( !*(_DWORD *)a1 )
    return *(_QWORD *)(a1 + 8) == 0LL;
  if ( *(_DWORD *)a1 != 1 )
    return 1;
  return *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24);
}
