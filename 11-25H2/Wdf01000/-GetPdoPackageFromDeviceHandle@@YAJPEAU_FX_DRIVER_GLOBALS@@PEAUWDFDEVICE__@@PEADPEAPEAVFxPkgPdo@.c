/*
 * XREFs of ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x140037240
 * Callers:
 *     imp_WdfPdoMarkMissing @ 0x14007AED0 (imp_WdfPdoMarkMissing.c)
 *     imp_WdfPdoAddEjectionRelationsPhysicalDevice @ 0x14008B730 (imp_WdfPdoAddEjectionRelationsPhysicalDevice.c)
 *     imp_WdfPdoClearEjectionRelationsDevices @ 0x14008B7A0 (imp_WdfPdoClearEjectionRelationsDevices.c)
 *     imp_WdfPdoRemoveEjectionRelationsPhysicalDevice @ 0x14008B840 (imp_WdfPdoRemoveEjectionRelationsPhysicalDevice.c)
 *     imp_WdfPdoRequestEject @ 0x14008B8C0 (imp_WdfPdoRequestEject.c)
 *     imp_WdfPdoRetrieveAddressDescription @ 0x14008B990 (imp_WdfPdoRetrieveAddressDescription.c)
 *     imp_WdfPdoUpdateAddressDescription @ 0x14008BA70 (imp_WdfPdoUpdateAddressDescription.c)
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_sq @ 0x1400373C0 (WPP_IFR_SF_sq.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetPdoPackageFromDeviceHandle(
        _FX_DRIVER_GLOBALS *CallersGlobals,
        unsigned __int64 Device,
        char *FunctionName,
        FxPkgPdo **Package,
        _FX_DRIVER_GLOBALS **ObjectGlobals,
        FxDevice **OutDevice)
{
  unsigned int v9; // esi
  __int64 v10; // rcx
  FxDevice *flags; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxPkgPdo *m_PkgPnp; // rax
  FxDevice_vtbl *v15; // rax
  unsigned __int8 v16; // dl
  unsigned int v17; // r8d
  unsigned __int16 v18; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  FxDevice **p_pDevice; // [rsp+50h] [rbp-28h] BYREF
  __int16 v21; // [rsp+58h] [rbp-20h]
  __int16 v22; // [rsp+5Ah] [rbp-1Eh]
  int v23; // [rsp+5Ch] [rbp-1Ch]
  FxDevice *pDevice; // [rsp+88h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker(CallersGlobals, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  v9 = 0;
  LOWORD(v10) = 0;
  flags = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v10 = LOWORD(flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    flags = (FxDevice *)((char *)flags - v10);
  }
  if ( flags->m_Type == 4098 )
  {
    pDevice = flags;
  }
  else
  {
    pDevice = 0LL;
    p_pDevice = &pDevice;
    v22 = v10;
    v23 = 0;
    v15 = flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
    v21 = 4098;
    if ( v15->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v16, v17, v18, traceGuid, (const void *)Device, 0x1002u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Device, 0x1002uLL);
    }
    flags = pDevice;
  }
  m_Globals = flags->m_Globals;
  *ObjectGlobals = m_Globals;
  if ( OutDevice )
    *OutDevice = flags;
  m_PkgPnp = (FxPkgPdo *)flags->m_PkgPnp;
  if ( m_PkgPnp && m_PkgPnp->m_Type == 4354 )
  {
    *Package = m_PkgPnp;
  }
  else
  {
    WPP_IFR_SF_sq(m_Globals, 2u, 0x12u, 0xAu, WPP_FxDevicePdoAPI_cpp_Traceguids, FunctionName, (const void *)Device);
    return (unsigned int)-1073741811;
  }
  return v9;
}
