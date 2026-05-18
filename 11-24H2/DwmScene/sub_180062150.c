/*
 * XREFs of sub_180062150 @ 0x180062150
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_1800403F0 @ 0x1800403F0 (sub_1800403F0.c)
 *     sub_180063434 @ 0x180063434 (sub_180063434.c)
 *     sub_1800648A8 @ 0x1800648A8 (sub_1800648A8.c)
 *     sub_1800653C4 @ 0x1800653C4 (sub_1800653C4.c)
 *     sub_180065B14 @ 0x180065B14 (sub_180065B14.c)
 *     sub_180067AC4 @ 0x180067AC4 (sub_180067AC4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180062150(__int64 a1, __int64 a2)
{
  sub_1800648A8();
  if ( sub_1800403F0(a1 + 1416) )
  {
    sub_1800653C4(a1, a2);
    sub_180067AC4(a1, a2);
  }
  sub_180011C30(a1 + 1504);
  sub_180063434(a1, a2, a1 + 1440);
  Mtx_unlock((_Mtx_t)(a1 + 1504));
  if ( sub_1800403F0(a1 + 1417) )
    sub_180065B14(a1, a2, 0LL);
  return sub_180065114(a1, a2, a1 + 200);
}
