/*
 * XREFs of imp_VfWdfIoQueueRetrieveNextRequest @ 0x1400DF1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x14003DD00 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     McTemplateK0upp_EtwWriteTransfer @ 0x14008F7B4 (McTemplateK0upp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfIoQueueRetrieveNextRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ **OutRequest)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int16 *v7; // rcx
  _FX_DRIVER_GLOBALS *v8; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbx
  __int64 v10; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  _MCGEN_TRACE_CONTEXT *Context; // rcx
  void *PPObject; // [rsp+30h] [rbp-38h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-30h] BYREF

  v4 = ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFQUEUE__ *))WdfVersion.Functions.pfnWdfIoQueueRetrieveNextRequest)(
         DriverGlobals,
         Queue);
  if ( !v4 )
  {
    v5 = (unsigned __int64)*OutRequest;
    v6 = (unsigned __int64)*OutRequest;
    PPObject = 0LL;
    v7 = (unsigned __int16 *)(~v6 & 0xFFFFFFFFFFFFFFF8uLL);
    ActivityId = 0LL;
    if ( (v5 & 1) != 0 )
      v7 = (unsigned __int16 *)((char *)v7 - *v7);
    v8 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v7 + 2);
    if ( (v8->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = v8->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(v8, v5, 0x1008u, &PPObject);
      if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
      {
        EtwActivityIdControl(3u, &ActivityId);
        IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
      }
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink & 1) != 0 )
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
          **(_BYTE **)(*(_QWORD *)(v10 + 152) + 184LL),
          _Arg2,
          Context);
      }
    }
  }
  return v4;
}
