/*
 * XREFs of sub_140002014 @ 0x140002014
 * Callers:
 *     sub_140009304 @ 0x140009304 (sub_140009304.c)
 *     sub_14002D524 @ 0x14002D524 (sub_14002D524.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 *     sub_14004599C @ 0x14004599C (sub_14004599C.c)
 *     sub_140047274 @ 0x140047274 (sub_140047274.c)
 * Callees:
 *     sub_140002040 @ 0x140002040 (sub_140002040.c)
 *     sub_140006618 @ 0x140006618 (sub_140006618.c)
 */

__int64 __fastcall sub_140002014(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 80) )
    return sub_140006618(*(unsigned int *)(a1 + 84));
  else
    return sub_140002040(a2);
}
