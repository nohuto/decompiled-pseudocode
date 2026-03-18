/*
 * XREFs of KiGetSs @ 0x140BC96B0
 * Callers:
 *     sub_140507C90 @ 0x140507C90 (sub_140507C90.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BB0010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetSs()
{
  return __SS__;
}
