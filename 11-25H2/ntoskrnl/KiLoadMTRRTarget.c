/*
 * XREFs of KiLoadMTRRTarget @ 0x140B47990
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x140B58DF0 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(ULONG_PTR Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
