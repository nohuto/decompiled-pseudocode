/*
 * XREFs of KiLoadMTRRTarget @ 0x140B599B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x140B6F790 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(ULONG_PTR Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
