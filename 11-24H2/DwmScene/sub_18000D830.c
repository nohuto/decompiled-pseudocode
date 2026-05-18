/*
 * XREFs of sub_18000D830 @ 0x18000D830
 * Callers:
 *     sub_18000F044 @ 0x18000F044 (sub_18000F044.c)
 *     sub_18000FDB4 @ 0x18000FDB4 (sub_18000FDB4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000D830(__int64 a1)
{
  if ( !*(_BYTE *)a1 )
    SetLastError(*(_DWORD *)(a1 + 4));
}
