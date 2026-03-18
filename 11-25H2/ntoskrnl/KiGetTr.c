/*
 * XREFs of KiGetTr @ 0x140BC96C0
 * Callers:
 *     sub_140507C90 @ 0x140507C90 (sub_140507C90.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BB0010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetTr()
{
  __int16 result; // ax

  __asm { str     ax }
  return result;
}
