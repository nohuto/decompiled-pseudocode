/*
 * XREFs of DC_vAccumulateTight_clip_rect @ 0x1402FEC00
 * Callers:
 *     <none>
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1401542B0 (--0XDCOBJ@@QEAA@XZ.c)
 */

void __fastcall DC_vAccumulateTight_clip_rect(__int64 a1, __int64 a2, __m128i *a3)
{
  struct ECLIPOBJ *v5; // rdx
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  XDCOBJ::XDCOBJ((XDCOBJ *)v6);
  v6[0] = a1;
  XDCOBJ::vAccumulateTight((XDCOBJ *)v6, v5, a3);
}
