/*
 * XREFs of sub_18000D750 @ 0x18000D750
 * Callers:
 *     sub_18000EF44 @ 0x18000EF44 (sub_18000EF44.c)
 *     sub_18000FCB4 @ 0x18000FCB4 (sub_18000FCB4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000D750(__int64 a1)
{
  if ( !*(_BYTE *)a1 )
    SetLastError(*(_DWORD *)(a1 + 4));
}
