/*
 * XREFs of VfEvtIoWrite @ 0x1400E3970
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

void __fastcall VfEvtIoWrite(WDFQUEUE__ *Queue, unsigned __int64 Request, unsigned __int64 Length)
{
  char *TypedContext; // r15
  void (__fastcall *v7)(WDFQUEUE__ *, unsigned __int64, unsigned __int64); // rsi
  unsigned __int16 *v8; // rcx
  _FX_DRIVER_GLOBALS *v9; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbx
  _MCGEN_TRACE_CONTEXT *v11; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  unsigned __int16 m_ObjectSize; // ax
  const void *Context; // r10
  KIRQL CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+30h] [rbp-30h] BYREF
  void *PPObject; // [rsp+38h] [rbp-28h] BYREF
  _GUID ActivityId; // [rsp+40h] [rbp-20h] BYREF

  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v7 = (void (__fastcall *)(WDFQUEUE__ *, unsigned __int64, unsigned __int64))*((_QWORD *)TypedContext + 5);
  if ( v7 )
  {
    PPObject = 0LL;
    v8 = (unsigned __int16 *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    ActivityId = 0LL;
    if ( (Request & 1) != 0 )
      v8 = (unsigned __int16 *)((char *)v8 - *v8);
    v9 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v8 + 2);
    if ( (v9->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = v9->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(v9, Request, 0x1008u, &PPObject);
      if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
      {
        EtwActivityIdControl(3u, &ActivityId);
        IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
      }
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject & 1) != 0 )
      {
        m_DeviceBase = FxRequest::GetCurrentQueue((FxRequest *)PPObject)->m_DeviceBase;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        Context = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          Context = 0LL;
        McTemplateK0upp_EtwWriteTransfer(
          v11,
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(v11[2].Logger + 184),
          _Arg2,
          Context);
      }
      v7(Queue, Request, Length);
    }
    else
    {
      critRegion[0] = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry(critRegion);
      v7(Queue, Request, Length);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (ULONG_PTR)v7);
    }
  }
}
