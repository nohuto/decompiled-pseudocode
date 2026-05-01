/*
 * XREFs of CrmGlobalsStartWorkers @ 0x180078BA4
 * Callers:
 *     CrmGlobalsStart @ 0x180078A68 (CrmGlobalsStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmGlobalsStartWorkers(__int64 a1)
{
  int v1; // ecx
  int v2; // eax

  v1 = TpAllocWork(a1 + 472, CrmGlobalsPeriodicNotifier, a1, 0LL);
  if ( v1 >= 0 )
  {
    v2 = TpAllocTimer(&xmmword_1800EAA38, CrmIsolatedPollingWorkerNpuUsageTimerCallback, &unk_1800EAA28, 0LL);
    v1 = 0;
    if ( v2 < 0 )
      v1 = v2;
    if ( v1 >= 0 )
      return 0;
  }
  return (unsigned int)v1;
}
