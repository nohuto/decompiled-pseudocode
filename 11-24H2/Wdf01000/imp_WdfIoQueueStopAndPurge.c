/*
 * XREFs of imp_WdfIoQueueStopAndPurge @ 0x14003CD40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14003C680 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1400A11A0 (-FatalError@FxIoQueue@@QEAAXJ@Z.c)
 */

void __fastcall imp_WdfIoQueueStopAndPurge(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        void (__fastcall *StopAndPurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  int v6; // eax
  void *PPObject; // [rsp+30h] [rbp+8h] BYREF

  PPObject = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Queue, 0x1003u, &PPObject);
  v6 = FxIoQueue::QueueIdle((FxIoQueue *)PPObject, 1u, StopAndPurgeComplete, Context);
  if ( v6 < 0 )
    FxIoQueue::FatalError((FxIoQueue *)PPObject, v6);
}
