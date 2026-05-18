/*
 * XREFs of sub_180025DD8 @ 0x180025DD8
 * Callers:
 *     sub_180023ADC @ 0x180023ADC (sub_180023ADC.c)
 *     sub_18004A230 @ 0x18004A230 (sub_18004A230.c)
 *     sub_18004A2F8 @ 0x18004A2F8 (sub_18004A2F8.c)
 *     sub_18005DB3C @ 0x18005DB3C (sub_18005DB3C.c)
 * Callees:
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 */

__int64 __fastcall sub_180025DD8(__int64 a1)
{
  __int64 result; // rax

  result = 0x3FFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFLL )
    sub_18001CC04();
  return result;
}
