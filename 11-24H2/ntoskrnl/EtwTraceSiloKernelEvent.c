/*
 * XREFs of EtwTraceSiloKernelEvent @ 0x1403C1FD0
 * Callers:
 *     EtwTracePageFault @ 0x140260AD0 (EtwTracePageFault.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x140280F20 (EtwTraceAutoBoostProcessLockEntry.c)
 *     EtwTraceScheduleThread @ 0x1402A6768 (EtwTraceScheduleThread.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14031FDAC (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x1403C1000 (EtwTraceAutoBoostConvertWaiterToOwner.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1403C10AC (EtwTraceAutoBoostSetFloor.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1403C11EC (EtwTraceAutoBoostClearFloor.c)
 *     EtwTraceReadyQueueInsertion @ 0x1403C1604 (EtwTraceReadyQueueInsertion.c)
 *     EtwpTraceIoInit @ 0x1403C1EF0 (EtwpTraceIoInit.c)
 *     EtwpProfileInterrupt @ 0x14064CBD0 (EtwpProfileInterrupt.c)
 *     EtwpTraceRedirectedIo @ 0x14064D360 (EtwpTraceRedirectedIo.c)
 *     EtwpLogProcessPerfCtrs @ 0x1407A9EE8 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualFree @ 0x1408DA818 (PerfInfoLogVirtualFree.c)
 *     EtwpWriteProcessEvent @ 0x1408F13BC (EtwpWriteProcessEvent.c)
 *     EtwTraceThread @ 0x1408FCF28 (EtwTraceThread.c)
 *     PerfLogImageLoad @ 0x140922600 (PerfLogImageLoad.c)
 *     PerfInfoLogVirtualAlloc @ 0x140A2C1A8 (PerfInfoLogVirtualAlloc.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
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
