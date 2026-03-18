/*
 * XREFs of imp_VfWdfRequestComplete @ 0x1400E05A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x140047E80 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     McTemplateK0upp_EtwWriteTransfer @ 0x14008F754 (McTemplateK0upp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfRequestComplete(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request, int Status)
{
  unsigned __int16 *v4; // rcx
  _FX_DRIVER_GLOBALS *v7; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbp
  _MCGEN_TRACE_CONTEXT *v9; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  unsigned __int16 m_ObjectSize; // ax
  const void *Context; // r10
  void *PPObject; // [rsp+30h] [rbp-48h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-40h] BYREF

  PPObject = 0LL;
  v4 = (unsigned __int16 *)(~(unsigned __int64)Request & 0xFFFFFFFFFFFFFFF8uLL);
  ActivityId = 0LL;
  if ( ((unsigned __int8)Request & 1) != 0 )
    v4 = (unsigned __int16 *)((char *)v4 - *v4);
  v7 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v4 + 2);
  if ( (v7->FxEnhancedVerifierOptions & 0xF00000) != 0 )
  {
    _Arg2 = v7->Driver->m_DriverDeviceAdd.Method;
    FxObjectHandleGetPtr(v7, (unsigned __int64)Request, 0x1008u, &PPObject);
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
        v9,
        &FX_REQUEST_COMPLETE,
        &ActivityId,
        **(_BYTE **)(v9[2].Logger + 184),
        _Arg2,
        Context);
    }
  }
  WdfVersion.Functions.pfnWdfRequestComplete(DriverGlobals, Request, Status);
}
