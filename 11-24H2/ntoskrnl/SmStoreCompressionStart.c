/*
 * XREFs of SmStoreCompressionStart @ 0x140A4CD20
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A4C914 (MmProcessWorkingSetControl.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x1402457A0 (SmpKeyedStoreEntryGet.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x140405C6C (MmQueryProcessWorkingSetSwapPages.c)
 *     SmpGetProcessPartition @ 0x140498A6C (SmpGetProcessPartition.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404ACF40 (MmStoreFlushOutstandingEvictions.c)
 *     SmSwapStore @ 0x140A4CF64 (SmSwapStore.c)
 */

int SmStoreCompressionStart()
{
  _KPROCESS *Process; // rdi
  __int64 ProcessPartition; // rbx
  __int64 v2; // rax
  __int64 v3; // rsi
  _KPROCESS *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = Process;
  ProcessPartition = SmpGetProcessPartition((__int64)Process);
  v2 = SmpKeyedStoreEntryGet(ProcessPartition + 2232, &v5, 0, 0);
  v3 = v2;
  if ( v2 || *(_DWORD *)(ProcessPartition + 2272) != -1 )
  {
    LODWORD(v2) = MmStoreFlushOutstandingEvictions(*(_QWORD **)(ProcessPartition + 2096));
    if ( v3 )
    {
      LODWORD(v2) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v6);
      if ( (int)v2 >= 0 )
        LODWORD(v2) = SmSwapStore(*(_QWORD *)(ProcessPartition + 2096), 0LL);
    }
  }
  return v2;
}
