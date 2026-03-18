/*
 * XREFs of KiGetGdtIdt @ 0x140BDA690
 * Callers:
 *     sub_14050A410 @ 0x14050A410 (sub_14050A410.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC1010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     <none>
 */

void __fastcall KiGetGdtIdt(void *a1, void *a2)
{
  __sgdt(a1);
  __sidt(a2);
}
