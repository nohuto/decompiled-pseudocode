/*
 * XREFs of ?PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1400A2A50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140013E20 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x14007F1FC (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPdo::PnpEventEjectHardwareOverload(FxPkgPdo *this)
{
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v5; // rcx
  signed int _a1; // eax
  unsigned int v7; // esi
  unsigned int v8; // r14d
  unsigned int _a3; // edi
  unsigned int v10; // edx
  FxVerifierDownlevelOption v11; // r9d
  _FX_DRIVER_GLOBALS *v12; // rcx
  FxDeviceDescriptionEntry *m_Description; // rdx
  FxChildList *m_DeviceList; // rsi
  int updated; // eax
  FxDeviceBase *v16; // rdx
  const void **p_m_DeviceObject; // r8
  unsigned __int16 v18; // cx
  const void *v19; // rdx
  unsigned __int16 v20; // ax
  const void *v21; // rdx
  MxEvent *p_m_ScanEvent; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  MxEvent *event; // [rsp+60h] [rbp+8h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  m_Method = this->m_DeviceEject.m_Method;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( !m_Method )
    goto LABEL_8;
  v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    v5 = 0LL;
  _a1 = m_Method((WDFDEVICE__ *)v5);
  v7 = _a1;
  if ( _a1 < 0 )
  {
    v8 = 258;
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x11u, WPP_FxPkgPdo_cpp_Traceguids, _a1);
    _a3 = v7;
    if ( v7 == -1073741637 )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0x12u, 0x12u, WPP_FxPkgPdo_cpp_Traceguids);
      if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(this->m_Globals, v10, 0xBu, v11) )
        FxVerifierDbgBreakPoint(v12);
    }
  }
  else
  {
LABEL_8:
    m_Description = this->m_Description;
    m_DeviceList = m_Description->m_DeviceList;
    updated = FxChildList::UpdateAsMissing(m_DeviceList, m_Description->m_IdentificationDescription);
    v16 = this->m_DeviceBase;
    _a3 = updated;
    p_m_DeviceObject = (const void **)&v16->m_DeviceObject.m_DeviceObject;
    if ( updated < 0 )
    {
      v20 = v16->m_ObjectSize;
      v21 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v20 )
        v21 = 0LL;
      WPP_IFR_SF_qqd(this->m_Globals, 2u, 0xCu, 0xFu, WPP_FxPkgPdo_cpp_Traceguids, v21, *p_m_DeviceObject, _a3);
    }
    else
    {
      v18 = v16->m_ObjectSize;
      v19 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v18 )
        v19 = 0LL;
      WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0xEu, WPP_FxPkgPdo_cpp_Traceguids, v19, *p_m_DeviceObject);
    }
    p_m_ScanEvent = &m_DeviceList->m_ScanEvent;
    event = &m_DeviceList->m_ScanEvent;
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x10u, WPP_FxPkgPdo_cpp_Traceguids, &event);
      p_m_ScanEvent = event;
    }
    KeWaitForSingleObject(p_m_ScanEvent, Executive, 0, 0, 0LL);
    v8 = 260;
  }
  this->m_PendingPnPIrp->IoStatus.Status = _a3;
  KeSetEvent(&this->m_DeviceEjectProcessed->m_Event, 0, 0);
  return v8;
}
