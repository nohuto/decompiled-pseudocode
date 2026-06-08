/*
 * XREFs of sub_140001008 @ 0x140001008
 * Callers:
 *     sub_140008C34 @ 0x140008C34 (sub_140008C34.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 *     sub_1400494D4 @ 0x1400494D4 (sub_1400494D4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140001008(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
