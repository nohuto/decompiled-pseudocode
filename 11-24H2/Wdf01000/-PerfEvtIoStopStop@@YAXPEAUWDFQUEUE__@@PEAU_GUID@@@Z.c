/*
 * XREFs of ?PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x14008FB94
 * Callers:
 *     VfEvtIoStop @ 0x1400E3880 (VfEvtIoStop.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14008FC34 (McTemplateK0pp_EtwWriteTransfer.c)
 */

void __fastcall PerfEvtIoStopStop(unsigned __int64 Queue, _GUID *pActivityId)
{
  unsigned __int16 *v2; // r8
  _FX_DRIVER_GLOBALS *v4; // rbx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // dx
  _MCGEN_TRACE_CONTEXT *Context; // rcx
  FxIoQueue *pQueue; // [rsp+40h] [rbp+8h] BYREF

  pQueue = 0LL;
  v2 = (unsigned __int16 *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
    v2 = (unsigned __int16 *)((char *)v2 - *v2);
  v4 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v2 + 2);
  FxObjectHandleGetPtr(v4, Queue, 0x1003u, (void **)&pQueue);
  m_DeviceBase = pQueue->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink & 1) != 0 )
  {
    Context = (_MCGEN_TRACE_CONTEXT *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      Context = 0LL;
    McTemplateK0pp_EtwWriteTransfer(
      Context,
      &FX_EVTIOSTOP_STOP,
      pActivityId,
      v4->Driver->m_DriverDeviceAdd.Method,
      Context);
  }
}
