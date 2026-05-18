/*
 * XREFs of sub_18002DB30 @ 0x18002DB30
 * Callers:
 *     sub_18002CF90 @ 0x18002CF90 (sub_18002CF90.c)
 *     sub_18002DDF4 @ 0x18002DDF4 (sub_18002DDF4.c)
 *     sub_18003696C @ 0x18003696C (sub_18003696C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18002DB30(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v3; // bl

  v3 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
    return (int)_std_type_info_compare(*a3 + 8LL, *(_QWORD *)(a2 + 32) + 8LL) >= 0;
  return v3;
}
