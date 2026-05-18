/*
 * XREFs of sub_1800132F4 @ 0x1800132F4
 * Callers:
 *     sub_180013590 @ 0x180013590 (sub_180013590.c)
 *     sub_180022CB0 @ 0x180022CB0 (sub_180022CB0.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_180030D10 @ 0x180030D10 (sub_180030D10.c)
 *     sub_180039580 @ 0x180039580 (sub_180039580.c)
 *     sub_18003E14C @ 0x18003E14C (sub_18003E14C.c)
 *     sub_18004BDCC @ 0x18004BDCC (sub_18004BDCC.c)
 *     sub_18004BEFC @ 0x18004BEFC (sub_18004BEFC.c)
 *     sub_18004D35C @ 0x18004D35C (sub_18004D35C.c)
 *     sub_1800567F0 @ 0x1800567F0 (sub_1800567F0.c)
 *     sub_1800587E4 @ 0x1800587E4 (sub_1800587E4.c)
 *     sub_18005C16C @ 0x18005C16C (sub_18005C16C.c)
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_1800604D0 @ 0x1800604D0 (sub_1800604D0.c)
 *     sub_180060F00 @ 0x180060F00 (sub_180060F00.c)
 *     sub_180076434 @ 0x180076434 (sub_180076434.c)
 *     sub_180078350 @ 0x180078350 (sub_180078350.c)
 *     sub_18007E344 @ 0x18007E344 (sub_18007E344.c)
 *     sub_180081ED0 @ 0x180081ED0 (sub_180081ED0.c)
 *     sub_180083C90 @ 0x180083C90 (sub_180083C90.c)
 *     sub_180084928 @ 0x180084928 (sub_180084928.c)
 *     sub_18008CBE8 @ 0x18008CBE8 (sub_18008CBE8.c)
 *     sub_180091BF4 @ 0x180091BF4 (sub_180091BF4.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_180013818 @ 0x180013818 (sub_180013818.c)
 */

__int64 __fastcall sub_1800132F4(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( a1 != a2 )
  {
    v3 = sub_1800137F8(a2);
    sub_180013818(a1, v3, *(_QWORD *)(v4 + 16));
  }
  return a1;
}
