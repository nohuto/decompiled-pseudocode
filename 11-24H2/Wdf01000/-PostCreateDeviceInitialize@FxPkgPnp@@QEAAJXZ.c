/*
 * XREFs of ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x140043B58
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1400436B0 (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1400488D4 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x140043F60 (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1400455FC (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140049F80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     RtlStringCchPrintfW @ 0x140085DE8 (RtlStringCchPrintfW.c)
 *     LibraryLogEvent @ 0x14008E974 (LibraryLogEvent.c)
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x140094B64 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 */

__int64 __fastcall FxPkgPnp::PostCreateDeviceInitialize(FxPkgPnp *this, __int64 a2, void *a3)
{
  signed int v4; // edi
  void *v5; // r8
  unsigned __int16 v6; // r9
  int v8; // eax
  void *v9; // r8
  FxCompanionLibrary *v10; // rcx
  FxDevice *m_Device; // rdx
  unsigned __int8 IsCompanionRequiredForDevice; // al
  wchar_t *v13; // rsi
  int CompanionTarget; // eax
  int v15; // edi
  unsigned int _a1; // [rsp+28h] [rbp-110h]
  const wchar_t *companionName; // [rsp+30h] [rbp-108h] BYREF
  wchar_t insertString[104]; // [rsp+40h] [rbp-F8h] BYREF

  this->m_PnpMachine.m_PkgPnp = this;
  this->m_PnpMachine.m_EventWorker = (void (__fastcall *)(FxPkgPnp *, FxPostProcessInfo *, void *))FxPkgPnp::_PnpProcessEventInner;
  this->m_PnpMachine.m_EventWorkerContext = 0LL;
  v4 = MxWorkItem::Allocate(&this->m_PnpMachine.m_WorkItem, (_DEVICE_OBJECT *)WPP_GLOBAL_WDF_Control.Reserved, a3);
  if ( v4 < 0 )
  {
    v6 = 32;
LABEL_3:
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, v6, WPP_FxPkgPnp_cpp_Traceguids, v4);
    return (unsigned int)v4;
  }
  this->m_PowerMachine.m_PkgPnp = this;
  this->m_PowerMachine.m_EventWorker = FxPkgPnp::_PowerProcessEventInner;
  this->m_PowerMachine.m_EventWorkerContext = 0LL;
  v8 = MxWorkItem::Allocate(&this->m_PowerMachine.m_WorkItem, this->m_DeviceBase->m_DeviceObject.m_DeviceObject, v5);
  v4 = 0;
  if ( v8 < 0 )
    v4 = v8;
  if ( v4 >= 0 )
    v4 = 0;
  if ( v4 < 0 )
  {
    v6 = 33;
    goto LABEL_3;
  }
  this->m_PowerPolicyMachine.m_PkgPnp = this;
  this->m_PowerPolicyMachine.m_EventWorker = FxPkgPnp::_PowerPolicyProcessEventInner;
  this->m_PowerPolicyMachine.m_EventWorkerContext = 0LL;
  v4 = MxWorkItem::Allocate(
         &this->m_PowerPolicyMachine.m_WorkItem,
         this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
         v9);
  if ( v4 < 0 )
  {
    v6 = 34;
    goto LABEL_3;
  }
  m_Device = this->m_Device;
  companionName = 0LL;
  IsCompanionRequiredForDevice = FxCompanionLibrary::IsCompanionRequiredForDevice(v10, m_Device, &companionName);
  v13 = (wchar_t *)companionName;
  if ( IsCompanionRequiredForDevice )
  {
    CompanionTarget = FxDevice::AllocateCompanionTarget(this->m_Device, &this->m_CompanionTarget);
    v15 = CompanionTarget;
    if ( CompanionTarget < 0 )
    {
      _a1 = CompanionTarget;
      if ( RtlStringCchPrintfW(
             insertString,
             0x64uLL,
             L"Service:%S, Companion:%s, Status:0x%x",
             this->m_Globals->Public.DriverName,
             v13,
             _a1) >= 0 )
        LibraryLogEvent((_DRIVER_OBJECT *)WPP_GLOBAL_WDF_Control.Reserved, -2147024893, v15, insertString, 0LL, 0);
    }
    else
    {
      FxObject::AddRef(
        this->m_CompanionTarget,
        this,
        1404,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
    }
    this->m_CompanionTargetStatus = v15;
  }
  if ( v13 )
    FxPoolFree(v13);
  return 0LL;
}
