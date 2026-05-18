/*
 * XREFs of sub_18005AFC0 @ 0x18005AFC0
 * Callers:
 *     sub_18005A4C0 @ 0x18005A4C0 (sub_18005A4C0.c)
 *     sub_18005ADB4 @ 0x18005ADB4 (sub_18005ADB4.c)
 * Callees:
 *     sub_18003D988 @ 0x18003D988 (sub_18003D988.c)
 *     sub_18005A58C @ 0x18005A58C (sub_18005A58C.c)
 */

__int64 __fastcall sub_18005AFC0(__int64 a1)
{
  __int64 v2; // rcx

  sub_18003D988((void **)(a1 + 16));
  sub_18005A58C(v2, *(_QWORD *)a1);
  return sub_180010234(*(void **)a1, 0x20uLL);
}
