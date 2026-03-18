/*
 * XREFs of EtwTraceSiloKernelEvent @ 0x140310730
 * Callers:
 *     EtwTraceAutoBoostProcessLockEntry @ 0x1402E8C88 (EtwTraceAutoBoostProcessLockEntry.c)
 *     EtwpTraceIoInit @ 0x140310650 (EtwpTraceIoInit.c)
 *     EtwTraceReadyQueueInsertion @ 0x140311C24 (EtwTraceReadyQueueInsertion.c)
 *     EtwTraceAutoBoostClearFloor @ 0x140311CF8 (EtwTraceAutoBoostClearFloor.c)
 *     EtwTraceAutoBoostSetFloor @ 0x140311D9C (EtwTraceAutoBoostSetFloor.c)
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x140311EA0 (EtwTraceAutoBoostConvertWaiterToOwner.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140311F4C (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTraceScheduleThread @ 0x140313CB4 (EtwTraceScheduleThread.c)
 *     EtwTracePageFault @ 0x1403BF7D0 (EtwTracePageFault.c)
 *     EtwpProfileInterrupt @ 0x140642600 (EtwpProfileInterrupt.c)
 *     EtwpTraceRedirectedIo @ 0x140642D90 (EtwpTraceRedirectedIo.c)
 *     EtwpLogProcessPerfCtrs @ 0x14079A9D8 (EtwpLogProcessPerfCtrs.c)
 *     EtwTraceThread @ 0x1408F592C (EtwTraceThread.c)
 *     PerfInfoLogVirtualFree @ 0x1408F7478 (PerfInfoLogVirtualFree.c)
 *     PerfLogImageLoad @ 0x14090BDC0 (PerfLogImageLoad.c)
 *     EtwpWriteProcessEvent @ 0x1409211D4 (EtwpWriteProcessEvent.c)
 *     PerfInfoLogVirtualAlloc @ 0x140A31480 (PerfInfoLogVirtualAlloc.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 */

void __fastcall EtwTraceSiloKernelEvent(
        __int64 a1,
        struct _KTHREAD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5,
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
  v10 = *(_DWORD *)(EtwpHostSiloState + 4248);
  for ( i = !_BitScanForward((unsigned int *)&v12, v10); !i; i = !_BitScanForward((unsigned int *)&v12, v10) )
  {
    v10 &= v10 - 1;
    v13 = 32LL * (unsigned int)v12 + EtwpHostSiloState + 4284;
    if ( v13 && ((unsigned int)v9 & *(_DWORD *)(v13 + 4 * (v9 >> 29)) & 0x1FFFFFFF) != 0 )
      EtwpLogKernelEvent(a2, EtwpHostSiloState, *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4232), a3, a5, a6);
  }
  if ( a1 )
  {
    v14 = *(_QWORD *)(PsGetServerSiloGlobals(a1) + 832);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 4248);
      for ( i = !_BitScanForward((unsigned int *)&v16, v15); !i; i = !_BitScanForward((unsigned int *)&v16, v15) )
      {
        v17 = (unsigned int)v16;
        v15 &= v15 - 1;
        v18 = v14 + 32 * v16 + 4284;
        if ( v18 )
        {
          if ( ((unsigned int)v9 & *(_DWORD *)(v18 + 4 * (v9 >> 29)) & 0x1FFFFFFF) != 0 )
            EtwpLogKernelEvent(a2, v14, *(unsigned __int8 *)(v14 + 2 * v17 + 4232), a3, a5, a6);
        }
      }
    }
  }
}
