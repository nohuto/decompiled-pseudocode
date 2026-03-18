/*
 * XREFs of PfSnAsyncContextInitialize @ 0x140962E58
 * Callers:
 *     PfSnPrefetchScenario @ 0x140962D70 (PfSnPrefetchScenario.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x140208FD0 (PsGetPagePriorityThread.c)
 *     PfSnReferenceProcessTrace @ 0x1402ED090 (PfSnReferenceProcessTrace.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PfSnPowerBoostInitialize @ 0x140963038 (PfSnPowerBoostInitialize.c)
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
