/*
 * XREFs of sub_140008ECC @ 0x140008ECC
 * Callers:
 *     sub_140009190 @ 0x140009190 (sub_140009190.c)
 *     sub_140009210 @ 0x140009210 (sub_140009210.c)
 *     sub_140009260 @ 0x140009260 (sub_140009260.c)
 *     sub_140009290 @ 0x140009290 (sub_140009290.c)
 *     sub_140009304 @ 0x140009304 (sub_140009304.c)
 *     sub_14002D524 @ 0x14002D524 (sub_14002D524.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 * Callees:
 *     sub_14000170C @ 0x14000170C (sub_14000170C.c)
 *     sub_140008E98 @ 0x140008E98 (sub_140008E98.c)
 */

__int64 __fastcall sub_140008ECC(__int64 a1, char *a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 80) )
    return sub_140008E98(*(_DWORD *)(a1 + 84), a2, a3);
  else
    return sub_14000170C(a2, a3);
}
