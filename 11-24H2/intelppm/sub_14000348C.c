/*
 * XREFs of sub_14000348C @ 0x14000348C
 * Callers:
 *     sub_140007998 @ 0x140007998 (sub_140007998.c)
 *     sub_1400082E8 @ 0x1400082E8 (sub_1400082E8.c)
 * Callees:
 *     sub_140007F5C @ 0x140007F5C (sub_140007F5C.c)
 */

__int64 __fastcall sub_14000348C(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 2) != 0 )
    return *a1;
  else
    return sub_140007F5C(a1, *a1, a2);
}
