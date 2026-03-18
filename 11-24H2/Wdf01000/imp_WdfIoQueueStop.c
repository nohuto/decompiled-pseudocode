/*
 * XREFs of imp_WdfIoQueueStop @ 0x14003C540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14003C680 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1400A11A0 (-FatalError@FxIoQueue@@QEAAXJ@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfIoQueueStop(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        void (__fastcall *StopComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  __int64 v7; // rcx
  FxIoQueue *flags; // rbx
  int v9; // eax
  FxIoQueue_vtbl *v10; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  const _GUID *v14; // [rsp+20h] [rbp-58h]
  FxIoQueue **p_pQueue; // [rsp+50h] [rbp-28h] BYREF
  __int16 v16; // [rsp+58h] [rbp-20h]
  __int16 v17; // [rsp+5Ah] [rbp-1Eh]
  int v18; // [rsp+5Ch] [rbp-1Ch]
  FxIoQueue *pQueue; // [rsp+88h] [rbp+10h] BYREF

  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(v7) = 0;
  flags = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
  {
    v7 = LOWORD(flags->FxNonPagedObject::FxObject::__vftable);
    flags = (FxIoQueue *)((char *)flags - v7);
  }
  if ( flags->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = flags;
  }
  else
  {
    pQueue = 0LL;
    p_pQueue = &pQueue;
    v17 = v7;
    v18 = 0;
    v10 = flags->FxNonPagedObject::FxObject::__vftable;
    v16 = 4099;
    if ( v10->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pQueue) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v11,
        v12,
        v13,
        v14,
        (const void *)Queue,
        0x1003u,
        flags,
        flags->FxNonPagedObject::FxObject::m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Queue, 0x1003uLL);
    }
    flags = pQueue;
  }
  v9 = FxIoQueue::QueueIdle(flags, 0, StopComplete, Context);
  if ( v9 < 0 )
    FxIoQueue::FatalError(pQueue, v9);
}
