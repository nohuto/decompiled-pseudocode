/*
 * XREFs of PspValidateJobAssignmentSiloPolicy @ 0x140A5B354
 * Callers:
 *     PspAssignProcessToJob @ 0x140A173D0 (PspAssignProcessToJob.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140349B30 (PsGetEffectiveServerSilo.c)
 *     PsIsServerSilo @ 0x140349B68 (PsIsServerSilo.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 */

char __fastcall PspValidateJobAssignmentSiloPolicy(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 EffectiveServerSilo; // rbx

  if ( ((a4 - 1) & 0xFFFFFFF9) != 0 || a4 == 7 )
  {
    return a4 != 4 || !PsIsServerSilo(a1);
  }
  else
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
    if ( PsGetEffectiveServerSilo(a2) == EffectiveServerSilo )
      return 1;
    return EffectiveServerSilo == PsGetProcessServerSilo(a3);
  }
}
