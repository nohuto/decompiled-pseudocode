/*
 * XREFs of SmStoreCompressionStop @ 0x140A4CBCC
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A4C914 (MmProcessWorkingSetControl.c)
 * Callees:
 *     SmKmStoreGet @ 0x140245714 (SmKmStoreGet.c)
 *     SmpKeyedStoreEntryGet @ 0x1402457A0 (SmpKeyedStoreEntryGet.c)
 *     ExQueueWorkItemToPartition @ 0x1402A7F70 (ExQueueWorkItemToPartition.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x140405C6C (MmQueryProcessWorkingSetSwapPages.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     SmpGetProcessPartition @ 0x140498A6C (SmpGetProcessPartition.c)
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x1404B43DC (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 *     SmSwapStore @ 0x140A4CF64 (SmSwapStore.c)
 */

int __fastcall SmStoreCompressionStop(int a1)
{
  __int64 ProcessPartition; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  int v5; // edi
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2[4]; // [rsp+50h] [rbp-20h] BYREF
  _KPROCESS *Process; // [rsp+98h] [rbp+28h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+30h] BYREF

  BugCheckParameter2[1] = 0LL;
  memset(&Event, 0, sizeof(Event));
  Process = KeGetCurrentThread()->ApcState.Process;
  ProcessPartition = SmpGetProcessPartition((__int64)Process);
  v3 = SmpKeyedStoreEntryGet(ProcessPartition + 2232, &Process, 0, 0);
  v4 = v3;
  if ( v3 )
    v5 = *(unsigned __int16 *)(v3 + 16);
  else
    v5 = *(_DWORD *)(ProcessPartition + 2272);
  if ( v5 != -1 )
  {
    v9 = ProcessPartition;
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    BugCheckParameter2[0] = 0LL;
    BugCheckParameter2[2] = (ULONG_PTR)SmpFlushStorePages;
    BugCheckParameter2[3] = (ULONG_PTR)&v9;
    ExQueueWorkItemToPartition((ULONG_PTR)BugCheckParameter2, 0, 0xFFFFFFFF, *(_QWORD *)(ProcessPartition + 2096));
    LODWORD(v3) = KeWaitForSingleObject(&Event, WrKernel, 0, 0, 0LL);
    if ( v4 )
    {
      SmSwapStore(*(_QWORD *)(ProcessPartition + 2096), 1LL);
      if ( a1 )
      {
        v6 = (_DWORD *)SmKmStoreGet(ProcessPartition, v5);
        SMKM_STORE_MGR<SM_TRAITS>::SmTrimWsStore(v7, v6, 0LL);
      }
      LODWORD(v3) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v13);
      if ( (int)v3 < 0 )
        LODWORD(v3) = SmSwapStore(*(_QWORD *)(ProcessPartition + 2096), 2LL);
    }
  }
  return v3;
}
