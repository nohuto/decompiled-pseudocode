/*
 * XREFs of imp_WdfDeviceEnqueueRequest @ 0x1400090D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x140009330 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

int __fastcall imp_WdfDeviceEnqueueRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned __int64 Request)
{
  __int64 v5; // rcx
  FxDevice *v6; // rbx
  FxDevice *flags; // rdi
  unsigned __int64 v8; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  FxRequest *v12; // rdi
  FxDevice_vtbl *v14; // rax
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  unsigned __int16 v17; // r9
  FxDevice_vtbl *v18; // rax
  unsigned __int8 v19; // dl
  unsigned int v20; // r8d
  unsigned __int16 v21; // r9
  FxRequest_vtbl *v22; // rax
  unsigned __int8 v23; // dl
  unsigned int v24; // r8d
  unsigned __int16 v25; // r9
  const _GUID *v26; // [rsp+20h] [rbp-40h]
  void *p_pDevice; // [rsp+50h] [rbp-10h] BYREF
  __int16 v28; // [rsp+58h] [rbp-8h]
  __int16 v29; // [rsp+5Ah] [rbp-6h]
  int v30; // [rsp+5Ch] [rbp-4h]
  FxDevice *pDevice; // [rsp+A8h] [rbp+48h] BYREF
  FxRequest *pRequest; // [rsp+B8h] [rbp+58h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v5) = 0;
  v6 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  flags = v6;
  v8 = Device & 1;
  if ( (Device & 1) != 0 )
  {
    v5 = LOWORD(v6->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    flags = (FxDevice *)((char *)v6 - v5);
  }
  if ( flags->m_Type == 4098 )
  {
    pDevice = flags;
  }
  else
  {
    pDevice = 0LL;
    p_pDevice = &pDevice;
    v29 = v5;
    v30 = 0;
    v14 = flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
    v28 = 4098;
    if ( v14->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v15, v16, v17, v26, (const void *)Device, 0x1002u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Device, 0x1002uLL);
    }
    flags = pDevice;
  }
  m_Globals = flags->m_Globals;
  LOWORD(v10) = 0;
  if ( v8 )
  {
    v10 = LOWORD(v6->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v6 = (FxDevice *)((char *)v6 - v10);
  }
  if ( v6->m_Type == 4098 )
  {
    pDevice = v6;
  }
  else
  {
    pDevice = 0LL;
    p_pDevice = &pDevice;
    v29 = v10;
    v30 = 0;
    v18 = v6->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
    v28 = 4098;
    if ( v18->QueryInterface(v6, (FxQueryInterfaceParams *)&p_pDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(v6->m_Globals, v19, v20, v21, v26, (const void *)Device, 0x1002u, v6, v6->m_Type);
      FxVerifierBugCheckWorker(v6->m_Globals, WDF_INVALID_HANDLE, Device, 0x1002uLL);
    }
    v6 = pDevice;
  }
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v11) = 0;
  v12 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v11 = LOWORD(v12->__vftable);
    v12 = (FxRequest *)((char *)v12 - v11);
  }
  if ( v12->m_Type == 4104 )
  {
    pRequest = v12;
  }
  else
  {
    pRequest = 0LL;
    p_pDevice = &pRequest;
    v29 = v11;
    v30 = 0;
    v22 = v12->__vftable;
    v28 = 4104;
    if ( v22->QueryInterface(v12, (FxQueryInterfaceParams *)&p_pDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(v12->m_Globals, v23, v24, v25, v26, (const void *)Request, 0x1008u, v12, v12->m_Type);
      FxVerifierBugCheckWorker(v12->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    v6 = pDevice;
    v12 = pRequest;
  }
  return FxPkgIo::EnqueueRequest(v6->m_PkgIo, v6, v12);
}
