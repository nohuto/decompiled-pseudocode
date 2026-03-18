/*
 * XREFs of ?QueryForDsfInterface@FxPkgFdo@@AEAAJXZ @ 0x140060E14
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1400436B0 (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_DDd @ 0x140002768 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     ?_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z @ 0x140061C2C (-_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z.c)
 *     ?GetAttachedDeviceReference@FxDeviceBase@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x140061CE0 (-GetAttachedDeviceReference@FxDeviceBase@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

__int64 __fastcall FxPkgFdo::QueryForDsfInterface(FxPkgFdo *this)
{
  FxDeviceBase *m_DeviceBase; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rsi
  signed int _a1; // edi
  unsigned __int8 v5; // dl
  int (__fastcall *IoDisconnectInterruptEx)(_IO_DISCONNECT_INTERRUPT_PARAMETERS *); // r9
  void (__fastcall *IoReportInterruptActive)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *); // r8
  void (__fastcall *IoReportInterruptInactive)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *); // r10
  _WDF_DSF_INTERFACE dsfInterface; // [rsp+40h] [rbp-48h] BYREF

  memset(&dsfInterface, 0, sizeof(dsfInterface));
  m_DeviceBase = this->m_DeviceBase;
  m_DeviceObject = m_DeviceBase->m_AttachedDevice.m_DeviceObject;
  if ( m_DeviceObject )
    ObfReferenceObject(m_DeviceBase->m_AttachedDevice.m_DeviceObject);
  else
    m_DeviceObject = FxDeviceBase::GetAttachedDeviceReference(m_DeviceBase);
  _a1 = FxQueryInterface::_QueryForInterface(
          m_DeviceObject,
          &GUID_WDF_DSF_INTERFACE,
          &dsfInterface.Interface,
          0x40u,
          0x100u,
          0LL);
  ObfDereferenceObject(m_DeviceObject);
  if ( _a1 == -1073741637 )
  {
    WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0xDu, WPP_FxPkgFdoKm_cpp_Traceguids);
    return 0;
  }
  else if ( _a1 >= 0 )
  {
    if ( dsfInterface.Interface.Version == 256 )
    {
      IoDisconnectInterruptEx = dsfInterface.IoDisconnectInterruptEx;
      if ( (dsfInterface.IoConnectInterruptEx != 0LL) == (dsfInterface.IoDisconnectInterruptEx != 0LL)
        && (IoReportInterruptActive = dsfInterface.IoReportInterruptActive,
            IoReportInterruptInactive = dsfInterface.IoReportInterruptInactive,
            (dsfInterface.IoReportInterruptActive != 0LL) == (dsfInterface.IoReportInterruptInactive != 0LL))
        && dsfInterface.IoConnectInterruptEx )
      {
        this->m_IoConnectInterruptEx = dsfInterface.IoConnectInterruptEx;
        this->m_IoDisconnectInterruptEx = IoDisconnectInterruptEx;
        if ( IoReportInterruptActive )
        {
          this->m_IoReportInterruptActive = IoReportInterruptActive;
          this->m_IoReportInterruptInactive = IoReportInterruptInactive;
        }
      }
      else
      {
        _a1 = -1073741762;
        WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x10u, WPP_FxPkgFdoKm_cpp_Traceguids, 0xC000003E);
      }
    }
    else
    {
      _a1 = -1073741735;
      WPP_IFR_SF_DDd(
        this->m_Globals,
        v5,
        0xCu,
        0xFu,
        WPP_FxPkgFdoKm_cpp_Traceguids,
        dsfInterface.Interface.Version,
        0x100u,
        -1073741735);
    }
    dsfInterface.Interface.InterfaceDereference(dsfInterface.Interface.Context);
  }
  else
  {
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0xEu, WPP_FxPkgFdoKm_cpp_Traceguids, _a1);
  }
  return (unsigned int)_a1;
}
