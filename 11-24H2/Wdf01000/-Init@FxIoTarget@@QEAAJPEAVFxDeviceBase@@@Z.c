/*
 * XREFs of ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x140043448
 * Callers:
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x140043258 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x14004F8DC (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14004FC24 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     FxUsbTargetDeviceCreate @ 0x1400508FC (FxUsbTargetDeviceCreate.c)
 * Callees:
 *     ?GetTargetIoType@FxIoTarget@@IEAAEXZ @ 0x14002B560 (-GetTargetIoType@FxIoTarget@@IEAAEXZ.c)
 *     WPP_IFR_SF_qqqqq @ 0x14007F74C (WPP_IFR_SF_qqqqq.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxIoTarget::Init(FxIoTarget *this, FxDeviceBase *Device)
{
  _DEVICE_OBJECT *v4; // rax
  _DEVICE_OBJECT *_a3; // r11
  _DEVICE_OBJECT *_a4; // rcx
  _DEVICE_OBJECT *_a5; // r8
  FxDriver *globals; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rdi

  this->m_DeviceBase = Device;
  this->m_InStackDevice = Device->m_DeviceObject.m_DeviceObject;
  v4 = (_DEVICE_OBJECT *)((__int64 (__fastcall *)(FxIoTarget *))this->GetTargetDeviceObject)(this);
  _a3 = this->m_InStackDevice;
  this->m_TargetDevice = v4;
  _a4 = v4;
  _a5 = Device->m_PhysicalDevice.m_DeviceObject;
  this->m_TargetPdo = _a5;
  globals = Device->m_Driver;
  this->m_Driver = globals;
  if ( _a3 && globals && v4 && _a5 )
  {
    this->m_TargetStackSize = v4->StackSize;
    this->m_TargetIoType = FxIoTarget::GetTargetIoType(this);
    return 0LL;
  }
  else
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      m_ObjectSize = this->m_ObjectSize;
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqqqq(
        m_Globals,
        (unsigned __int8)m_Globals,
        0xEu,
        0x18u,
        WPP_FxIoTarget_cpp_Traceguids,
        _a2,
        _a3,
        _a4,
        _a5,
        globals);
    }
    return 3221225473LL;
  }
}
