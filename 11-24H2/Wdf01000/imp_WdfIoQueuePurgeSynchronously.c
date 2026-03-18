/*
 * XREFs of imp_WdfIoQueuePurgeSynchronously @ 0x14003CCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x14003B9D4 (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1400A11A0 (-FatalError@FxIoQueue@@QEAAXJ@Z.c)
 */

void __fastcall imp_WdfIoQueuePurgeSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  int v2; // eax
  FxIoQueue *pQueue; // [rsp+40h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pQueue = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Queue,
    0x1003u,
    (void **)&pQueue,
    &pFxDriverGlobals);
  if ( (int)FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0) >= 0 )
  {
    v2 = FxIoQueue::QueuePurgeSynchronously(pQueue);
    if ( v2 < 0 )
      FxIoQueue::FatalError(pQueue, v2);
  }
}
