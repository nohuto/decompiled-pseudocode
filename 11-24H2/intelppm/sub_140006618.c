/*
 * XREFs of sub_140006618 @ 0x140006618
 * Callers:
 *     sub_140002014 @ 0x140002014 (sub_140002014.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 * Callees:
 *     sub_140002040 @ 0x140002040 (sub_140002040.c)
 *     sub_140006718 @ 0x140006718 (sub_140006718.c)
 */

unsigned __int64 __fastcall sub_140006618(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  if ( !a2 )
    return 0LL;
  if ( *a2 == 1 || *a2 == 127 )
    return sub_140006718(a1, a2, a3);
  return sub_140002040(a2);
}
