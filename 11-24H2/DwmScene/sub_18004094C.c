/*
 * XREFs of sub_18004094C @ 0x18004094C
 * Callers:
 *     sub_18004C380 @ 0x18004C380 (sub_18004C380.c)
 *     sub_18004C3C8 @ 0x18004C3C8 (sub_18004C3C8.c)
 *     sub_180058DAC @ 0x180058DAC (sub_180058DAC.c)
 *     sub_18005B2DC @ 0x18005B2DC (sub_18005B2DC.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_180076630 @ 0x180076630 (sub_180076630.c)
 *     sub_1800769C0 @ 0x1800769C0 (sub_1800769C0.c)
 *     sub_180077A60 @ 0x180077A60 (sub_180077A60.c)
 *     sub_180079CB0 @ 0x180079CB0 (sub_180079CB0.c)
 *     sub_18007D8CC @ 0x18007D8CC (sub_18007D8CC.c)
 *     sub_18007FA90 @ 0x18007FA90 (sub_18007FA90.c)
 *     sub_180087ACC @ 0x180087ACC (sub_180087ACC.c)
 *     sub_180088870 @ 0x180088870 (sub_180088870.c)
 *     sub_18008CEA0 @ 0x18008CEA0 (sub_18008CEA0.c)
 *     sub_18008FD70 @ 0x18008FD70 (sub_18008FD70.c)
 * Callees:
 *     sub_180011A7C @ 0x180011A7C (sub_180011A7C.c)
 *     sub_180011B2C @ 0x180011B2C (sub_180011B2C.c)
 */

_QWORD *__fastcall sub_18004094C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // r9

  v2 = *(_QWORD *)(a1 + 8);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( !v2 || !sub_180011A7C(v2) )
    sub_180011B2C();
  *v3 = *v4;
  v3[1] = v4[1];
  return v3;
}
