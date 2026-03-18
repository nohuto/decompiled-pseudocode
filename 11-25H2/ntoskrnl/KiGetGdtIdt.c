/*
 * XREFs of KiGetGdtIdt @ 0x140BC9690
 * Callers:
 *     sub_140507C90 @ 0x140507C90 (sub_140507C90.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BB0010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     <none>
 */

void __fastcall KiGetGdtIdt(void *a1, void *a2)
{
  __sgdt(a1);
  __sidt(a2);
}
