/*
 * XREFs of sub_18002D9D0 @ 0x18002D9D0
 * Callers:
 *     sub_18002CE30 @ 0x18002CE30 (sub_18002CE30.c)
 *     sub_18002DC94 @ 0x18002DC94 (sub_18002DC94.c)
 *     sub_18003680C @ 0x18003680C (sub_18003680C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18002D9D0(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v3; // bl

  v3 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
    return (int)_std_type_info_compare(*a3 + 8LL, *(_QWORD *)(a2 + 32) + 8LL) >= 0;
  return v3;
}
