/*
 * XREFs of DbgkpWerStartDeferredLiveDump @ 0x1406FCFF0
 * Callers:
 *     DbgkpWerCaptureLiveFullDump @ 0x140A9519C (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     IoSetDeferredLiveDumpFileHandle @ 0x140594458 (IoSetDeferredLiveDumpFileHandle.c)
 */

__int64 __fastcall DbgkpWerStartDeferredLiveDump(__int64 a1)
{
  int v2; // edi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = WerLiveKernelOpenDumpFile(*(_QWORD *)(a1 + 96), &v4);
  if ( v2 < 0 )
  {
    DbgPrintEx(
      5u,
      0,
      "DBGK: DbgkpWerStartDeferredLiveDump: WerLiveKernelOpenDumpFile failed, status 0x%X\n",
      (unsigned int)v2);
    return (unsigned int)v2;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL) = v4;
  v2 = IoSetDeferredLiveDumpFileHandle(*(_QWORD *)(a1 + 128), v4);
  if ( v2 < 0 )
  {
    DbgPrintEx(
      5u,
      0,
      "DBGK: DbgkpWerStartDeferredLiveDump: IoSetDeferredLiveDumpFileHandle failed, status 0x%X\n",
      (unsigned int)v2);
    return (unsigned int)v2;
  }
  ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(a1 + 112), DelayedWorkQueue);
  return 0LL;
}
