/*
 * XREFs of sub_1400073D4 @ 0x1400073D4
 * Callers:
 *     sub_14002AC30 @ 0x14002AC30 (sub_14002AC30.c)
 * Callees:
 *     sub_14000740C @ 0x14000740C (sub_14000740C.c)
 */

__int64 sub_1400073D4()
{
  if ( (dword_140021DF0 & 0x10) != 0 )
    return dword_140021DF0 & 1;
  else
    return sub_14000740C((unsigned int)dword_140021DF0, 3LL);
}
