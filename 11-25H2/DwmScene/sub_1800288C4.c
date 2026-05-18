/*
 * XREFs of sub_1800288C4 @ 0x1800288C4
 * Callers:
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002808C @ 0x18002808C (sub_18002808C.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_18002822C @ 0x18002822C (sub_18002822C.c)
 * Callees:
 *     sub_180028904 @ 0x180028904 (sub_180028904.c)
 */

char __fastcall sub_1800288C4(__int64 a1, __int64 a2)
{
  char v3; // bl

  LOBYTE(a2) = 1;
  v3 = 0;
  if ( (unsigned __int8)sub_180028904(a1, a2) || (unsigned __int8)sub_180028904(a1, 0LL) )
    return 1;
  return v3;
}
