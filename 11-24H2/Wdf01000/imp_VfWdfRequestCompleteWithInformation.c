/*
 * XREFs of imp_VfWdfRequestCompleteWithInformation @ 0x1400E0700
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x14003DD00 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     McTemplateK0upp_EtwWriteTransfer @ 0x14008F7B4 (McTemplateK0upp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfRequestCompleteWithInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        int Status,
        unsigned __int64 Information)
{
  unsigned __int16 *v5; // rcx
  _FX_DRIVER_GLOBALS *v9; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // r14
  _MCGEN_TRACE_CONTEXT *v11; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  unsigned __int16 m_ObjectSize; // ax
  const void *Context; // r10
  void *PPObject; // [rsp+30h] [rbp-58h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-50h] BYREF

  PPObject = 0LL;
  v5 = (unsigned __int16 *)(~(unsigned __int64)Request & 0xFFFFFFFFFFFFFFF8uLL);
  ActivityId = 0LL;
  if ( ((unsigned __int8)Request & 1) != 0 )
    v5 = (unsigned __int16 *)((char *)v5 - *v5);
  v9 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v5 + 2);
  if ( (v9->FxEnhancedVerifierOptions & 0xF00000) != 0 )
  {
    _Arg2 = v9->Driver->m_DriverDeviceAdd.Method;
    FxObjectHandleGetPtr(v9, (unsigned __int64)Request, 0x1008u, &PPObject);
    if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
    {
      EtwActivityIdControl(3u, &ActivityId);
      IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
    }
    if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink & 1) != 0 )
    {
      m_DeviceBase = FxRequest::GetCurrentQueue((FxRequest *)PPObject)->m_DeviceBase;
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      Context = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        Context = 0LL;
      McTemplateK0upp_EtwWriteTransfer(
        v11,
        &FX_REQUEST_COMPLETE,
        &ActivityId,
        **(_BYTE **)(v11[2].Logger + 184),
        _Arg2,
        Context);
    }
  }
  WdfVersion.Functions.pfnWdfRequestCompleteWithInformation(DriverGlobals, Request, Status, Information);
}
