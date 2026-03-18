/*
 * XREFs of KiLoadMTRRTarget @ 0x140B57930
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x140B68C20 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(ULONG_PTR Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
