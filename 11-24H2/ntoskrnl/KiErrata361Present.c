/*
 * XREFs of KiErrata361Present @ 0x140BDC6D0
 * Callers:
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC3010 (FsRtlMdlReadCompleteDevEx.c)
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
