/*
 * XREFs of imp_WdfIoQueueGetDevice @ 0x140058BD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

WDFDEVICE__ *__fastcall imp_WdfIoQueueGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Queue)
{
  __int64 v3; // rcx
  FxIoQueue *flags; // rdi
  FxDeviceBase *m_DeviceBase; // rax
  unsigned __int16 m_ObjectSize; // cx
  WDFDEVICE__ *result; // rax
  FxIoQueue_vtbl *v8; // rax
  unsigned __int8 v9; // dl
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  const _GUID *v12; // [rsp+20h] [rbp-48h]
  FxIoQueue **p_pQueue; // [rsp+50h] [rbp-18h] BYREF
  __int16 v14; // [rsp+58h] [rbp-10h]
  __int16 v15; // [rsp+5Ah] [rbp-Eh]
  int v16; // [rsp+5Ch] [rbp-Ch]
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
    v15 = v3;
    v16 = 0;
    v8 = flags->FxNonPagedObject::FxObject::__vftable;
    v14 = 4099;
    if ( v8->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pQueue) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v9,
        v10,
        v11,
        v12,
        (const void *)Queue,
        0x1003u,
        flags,
        flags->FxNonPagedObject::FxObject::m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Queue, 0x1003uLL);
    }
    flags = pQueue;
  }
  m_DeviceBase = flags->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  result = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    return 0LL;
  return result;
}
