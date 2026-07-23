/*
 * XREFs of PfSnAsyncContextInitialize @ 0x14094A918
 * Callers:
 *     PfSnPrefetchScenario @ 0x14094A830 (PfSnPrefetchScenario.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     PsGetPagePriorityThread @ 0x1403305B0 (PsGetPagePriorityThread.c)
 *     PfSnReferenceProcessTrace @ 0x14034E6D0 (PfSnReferenceProcessTrace.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PfSnPowerBoostInitialize @ 0x14094AAF8 (PfSnPowerBoostInitialize.c)
 */

__int64 __fastcall PfSnAsyncContextInitialize(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  _KPROCESS *Process; // rcx

  memset_0(a1, 0, 0xF8uLL);
  a1[26] = a2;
  a1[4] = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  a1[27] = Process;
  PsReferenceSiloContext(Process);
  a1[28] = PfSnReferenceProcessTrace(a1[27]);
  *(_QWORD *)a1[4] = 0LL;
  *((_DWORD *)a1 + 59) = PsGetPagePriorityThread((__int64)KeGetCurrentThread());
  *a1 = 0LL;
  a1[2] = PfSnAsyncPrefetchWorker;
  a1[3] = a1;
  if ( a4 )
    *((_DWORD *)a1 + 60) |= 1u;
  return PfSnPowerBoostInitialize(a1 + 5);
}
