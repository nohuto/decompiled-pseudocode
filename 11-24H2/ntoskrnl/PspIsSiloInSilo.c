/*
 * XREFs of PspIsSiloInSilo @ 0x140A4F21C
 * Callers:
 *     PsIsThreadInSilo @ 0x1404070DC (PsIsThreadInSilo.c)
 *     PsIsProcessInSilo @ 0x140407120 (PsIsProcessInSilo.c)
 *     PsRootSiloInformation @ 0x1407724D0 (PsRootSiloInformation.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
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
