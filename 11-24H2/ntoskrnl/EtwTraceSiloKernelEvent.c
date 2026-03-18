/*
 * XREFs of EtwTraceSiloKernelEvent @ 0x140348590
 * Callers:
 *     EtwTracePageFault @ 0x140216580 (EtwTracePageFault.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x140250910 (EtwTraceAutoBoostProcessLockEntry.c)
 *     EtwTraceScheduleThread @ 0x140297C7C (EtwTraceScheduleThread.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403408CC (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwpTraceIoInit @ 0x1403484B0 (EtwpTraceIoInit.c)
 *     EtwTraceReadyQueueInsertion @ 0x14034A55C (EtwTraceReadyQueueInsertion.c)
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x140478F1C (EtwTraceAutoBoostConvertWaiterToOwner.c)
 *     EtwTraceAutoBoostSetFloor @ 0x140478FC8 (EtwTraceAutoBoostSetFloor.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1404CB770 (EtwTraceAutoBoostClearFloor.c)
 *     EtwpProfileInterrupt @ 0x14064E5C0 (EtwpProfileInterrupt.c)
 *     EtwpTraceRedirectedIo @ 0x14064ED50 (EtwpTraceRedirectedIo.c)
 *     EtwpLogProcessPerfCtrs @ 0x1407A9DA8 (EtwpLogProcessPerfCtrs.c)
 *     EtwTraceThread @ 0x1408A6918 (EtwTraceThread.c)
 *     PerfInfoLogVirtualFree @ 0x1408DC5E8 (PerfInfoLogVirtualFree.c)
 *     PerfLogImageLoad @ 0x1408FFD20 (PerfLogImageLoad.c)
 *     EtwpWriteProcessEvent @ 0x14094CE4C (EtwpWriteProcessEvent.c)
 *     PerfInfoLogVirtualAlloc @ 0x140A37358 (PerfInfoLogVirtualAlloc.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 */

void __fastcall EtwTraceSiloKernelEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int16 a5,
        unsigned int a6)
{
  unsigned __int64 v9; // rdi
  unsigned int v10; // ebx
  bool i; // zf
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // r13
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx

  v9 = a4;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4520);
  for ( i = !_BitScanForward((unsigned int *)&v12, v10); !i; i = !_BitScanForward((unsigned int *)&v12, v10) )
  {
    v10 &= v10 - 1;
    v13 = 32LL * (unsigned int)v12 + EtwpHostSiloState + 4556;
    if ( v13 && ((unsigned int)v9 & *(_DWORD *)(v13 + 4 * (v9 >> 29)) & 0x1FFFFFFF) != 0 )
      EtwpLogKernelEvent(a2, EtwpHostSiloState, *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4504), a3, a5, a6);
  }
  if ( a1 )
  {
    v14 = *(_QWORD *)(PsGetServerSiloGlobals(a1) + 832);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 4520);
      for ( i = !_BitScanForward((unsigned int *)&v16, v15); !i; i = !_BitScanForward((unsigned int *)&v16, v15) )
      {
        v17 = (unsigned int)v16;
        v15 &= v15 - 1;
        v18 = v14 + 32 * v16 + 4556;
        if ( v18 )
        {
          if ( ((unsigned int)v9 & *(_DWORD *)(v18 + 4 * (v9 >> 29)) & 0x1FFFFFFF) != 0 )
            EtwpLogKernelEvent(a2, v14, *(unsigned __int8 *)(v14 + 2 * v17 + 4504), a3, a5, a6);
        }
      }
    }
  }
}
