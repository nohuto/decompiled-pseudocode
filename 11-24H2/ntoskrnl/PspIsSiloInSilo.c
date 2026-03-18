/*
 * XREFs of PspIsSiloInSilo @ 0x140A57A74
 * Callers:
 *     PsIsThreadInSilo @ 0x14040EEDC (PsIsThreadInSilo.c)
 *     PsIsProcessInSilo @ 0x14040EF20 (PsIsProcessInSilo.c)
 *     PsRootSiloInformation @ 0x1407722B0 (PsRootSiloInformation.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall PspIsSiloInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  while ( a1 )
  {
    if ( a1 == a2 )
      return 1;
    a1 = *(_QWORD *)(a1 + 1304);
  }
  return 0;
}
