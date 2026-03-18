/*
 * XREFs of imp_WdfIoQueueStart @ 0x140062AF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?QueueStart@FxIoQueue@@QEAAXXZ @ 0x140062BEC (-QueueStart@FxIoQueue@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfIoQueueStart(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Queue)
{
  __int64 v3; // rcx
  FxIoQueue *flags; // rbx
  FxIoQueue_vtbl *v5; // rax
  unsigned __int8 v6; // dl
  unsigned int v7; // r8d
  unsigned __int16 v8; // r9
  const _GUID *v9; // [rsp+20h] [rbp-48h]
  FxIoQueue **p_pQueue; // [rsp+50h] [rbp-18h] BYREF
  __int16 v11; // [rsp+58h] [rbp-10h]
  __int16 v12; // [rsp+5Ah] [rbp-Eh]
  int v13; // [rsp+5Ch] [rbp-Ch]
  FxIoQueue *pQueue; // [rsp+78h] [rbp+10h] BYREF

  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(v3) = 0;
  flags = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
  {
    v3 = LOWORD(flags->FxNonPagedObject::FxObject::__vftable);
    flags = (FxIoQueue *)((char *)flags - v3);
  }
  if ( flags->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = flags;
  }
  else
  {
    pQueue = 0LL;
    p_pQueue = &pQueue;
    v12 = v3;
    v13 = 0;
    v5 = flags->FxNonPagedObject::FxObject::__vftable;
    v11 = 4099;
    if ( v5->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pQueue) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v6,
        v7,
        v8,
        v9,
        (const void *)Queue,
        0x1003u,
        flags,
        flags->FxNonPagedObject::FxObject::m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Queue, 0x1003uLL);
    }
    flags = pQueue;
  }
  FxIoQueue::QueueStart(flags);
}
