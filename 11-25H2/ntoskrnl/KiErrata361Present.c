/*
 * XREFs of KiErrata361Present @ 0x140BC96D0
 * Callers:
 *     sub_140507C90 @ 0x140507C90 (sub_140507C90.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BB0010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int64 KiErrata361Present()
{
  __int64 result; // rax
  unsigned __int64 v1; // kr00_8
  unsigned __int64 v2; // kr08_8

  result = (unsigned int)__SS__;
  v1 = __readeflags();
  __writeeflags(v1 | 0x100);
  __asm { icebp }
  v2 = __readeflags();
  __writeeflags(v2 & 0xFFFFFFFFFFFFFEFFuLL);
  return result;
}
