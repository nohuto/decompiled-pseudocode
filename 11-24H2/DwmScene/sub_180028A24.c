/*
 * XREFs of sub_180028A24 @ 0x180028A24
 * Callers:
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800281EC @ 0x1800281EC (sub_1800281EC.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_18002838C @ 0x18002838C (sub_18002838C.c)
 * Callees:
 *     sub_180028A64 @ 0x180028A64 (sub_180028A64.c)
 */

char __fastcall sub_180028A24(__int64 a1, __int64 a2)
{
  char v3; // bl

  LOBYTE(a2) = 1;
  v3 = 0;
  if ( (unsigned __int8)sub_180028A64(a1, a2) || (unsigned __int8)sub_180028A64(a1, 0LL) )
    return 1;
  return v3;
}
