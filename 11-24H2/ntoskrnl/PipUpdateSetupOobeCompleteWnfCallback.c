/*
 * XREFs of PipUpdateSetupOobeCompleteWnfCallback @ 0x1407180D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExQueryWnfStateData @ 0x140A31340 (ExQueryWnfStateData.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PipUpdateSetupOobeCompleteWnfCallback(__int64 a1)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  int v3; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v4[5]; // [rsp+24h] [rbp-14h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v4[0] = 0;
  v3 = 4;
  if ( (int)ExQueryWnfStateData(a1, &v5, v4, &v3) >= 0 && v3 == 4 )
  {
    if ( v4[0] )
    {
      PnpSetupOOBEInProgress = 0;
      Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x6E697050u);
      if ( Pool2 )
      {
        Pool2->List.Flink = 0LL;
        Pool2->WorkerRoutine = PipOobeCompleteAsyncCallback;
        Pool2->Parameter = Pool2;
        ExQueueWorkItem(Pool2, NormalWorkQueue);
      }
    }
  }
  return 0LL;
}
