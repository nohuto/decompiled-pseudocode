/*
 * XREFs of DbgkpWerStartDeferredLiveDump @ 0x140706A90
 * Callers:
 *     DbgkpWerCaptureLiveFullDump @ 0x140A9642C (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     IoSetDeferredLiveDumpFileHandle @ 0x140594AE4 (IoSetDeferredLiveDumpFileHandle.c)
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
