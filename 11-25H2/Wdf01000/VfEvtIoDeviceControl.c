/*
 * XREFs of VfEvtIoDeviceControl @ 0x1400E3260
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x140047E80 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     McTemplateK0upp_EtwWriteTransfer @ 0x14008F754 (McTemplateK0upp_EtwWriteTransfer.c)
 *     VerifyCriticalRegionEntry @ 0x14008FC40 (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x14008FC74 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x14008FCDC (VerifyIrqlExit.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     VfWdfObjectGetTypedContext @ 0x1400E22D0 (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtIoDeviceControl(
        WDFQUEUE__ *Queue,
        unsigned __int64 Request,
        unsigned __int64 OutputBufferLength,
        unsigned __int64 InputBufferLength,
        unsigned int IoControlCode)
{
  char *TypedContext; // r15
  void (__fastcall *v10)(WDFQUEUE__ *, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int); // rsi
  unsigned __int16 *v11; // rcx
  _FX_DRIVER_GLOBALS *v12; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbx
  __int64 v14; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  _MCGEN_TRACE_CONTEXT *Context; // rcx
  KIRQL CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+30h] [rbp-38h] BYREF
  void *PPObject; // [rsp+38h] [rbp-30h] BYREF
  _GUID ActivityId; // [rsp+40h] [rbp-28h] BYREF

  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v10 = (void (__fastcall *)(WDFQUEUE__ *, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int))*((_QWORD *)TypedContext + 6);
  if ( v10 )
  {
    PPObject = 0LL;
    v11 = (unsigned __int16 *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    ActivityId = 0LL;
    if ( (Request & 1) != 0 )
      v11 = (unsigned __int16 *)((char *)v11 - *v11);
    v12 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v11 + 2);
    if ( (v12->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = v12->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(v12, Request, 0x1008u, &PPObject);
      if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
      {
        EtwActivityIdControl(3u, &ActivityId);
        IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
      }
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject & 1) != 0 )
      {
        m_DeviceBase = FxRequest::GetCurrentQueue((FxRequest *)PPObject)->m_DeviceBase;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        Context = (_MCGEN_TRACE_CONTEXT *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          Context = 0LL;
        McTemplateK0upp_EtwWriteTransfer(
          Context,
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*(_QWORD *)(v14 + 152) + 184LL),
          _Arg2,
          Context);
      }
      v10(Queue, Request, OutputBufferLength, InputBufferLength, IoControlCode);
    }
    else
    {
      critRegion[0] = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry(critRegion);
      v10(Queue, Request, OutputBufferLength, InputBufferLength, IoControlCode);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (ULONG_PTR)v10);
    }
  }
}
