/*
 * XREFs of KiGetTr @ 0x140BDA6C0
 * Callers:
 *     sub_14050A410 @ 0x14050A410 (sub_14050A410.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC1010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetTr()
{
  __int16 result; // ax

  __asm { str     ax }
  return result;
}
