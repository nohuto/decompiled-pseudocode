/*
 * XREFs of sub_18002768C @ 0x18002768C
 * Callers:
 *     sub_1800276BC @ 0x1800276BC (sub_1800276BC.c)
 *     sub_1800278AC @ 0x1800278AC (sub_1800278AC.c)
 *     sub_18003D2CC @ 0x18003D2CC (sub_18003D2CC.c)
 *     sub_18003D534 @ 0x18003D534 (sub_18003D534.c)
 *     sub_180040C1C @ 0x180040C1C (sub_180040C1C.c)
 *     sub_180040DFC @ 0x180040DFC (sub_180040DFC.c)
 *     sub_1800786A8 @ 0x1800786A8 (sub_1800786A8.c)
 *     sub_18007AF54 @ 0x18007AF54 (sub_18007AF54.c)
 *     sub_18007B19C @ 0x18007B19C (sub_18007B19C.c)
 *     sub_18009573C @ 0x18009573C (sub_18009573C.c)
 *     sub_18009577C @ 0x18009577C (sub_18009577C.c)
 *     sub_1800B863C @ 0x1800B863C (sub_1800B863C.c)
 * Callees:
 *     sub_180011AFC @ 0x180011AFC (sub_180011AFC.c)
 */

__int64 __fastcall sub_18002768C(unsigned __int64 a1)
{
  if ( a1 > 0x666666666666666LL )
    sub_180011AFC();
  return 40 * a1;
}
