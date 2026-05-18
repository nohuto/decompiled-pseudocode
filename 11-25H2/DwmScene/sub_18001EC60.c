/*
 * XREFs of sub_18001EC60 @ 0x18001EC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

_QWORD *__fastcall sub_18001EC60(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Utils::IMemoryStatsProvider::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B77C(a1);
  return a1;
}
