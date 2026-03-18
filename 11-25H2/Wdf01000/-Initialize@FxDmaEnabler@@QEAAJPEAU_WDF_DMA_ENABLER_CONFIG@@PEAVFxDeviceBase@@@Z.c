/*
 * XREFs of ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x140089C00
 * Callers:
 *     imp_WdfDmaEnablerCreate @ 0x1400A1A40 (imp_WdfDmaEnablerCreate.c)
 * Callees:
 *     WPP_IFR_SF_dd @ 0x140005770 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14003CB50 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_DDd @ 0x140055CD8 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x140089724 (-ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CON.c)
 *     ?FxQueryDmaFeatureSupport@@YAJW4_DMA_FEATURE_TYPE@UndockedKernel@@@Z @ 0x140089B80 (-FxQueryDmaFeatureSupport@@YAJW4_DMA_FEATURE_TYPE@UndockedKernel@@@Z.c)
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x14008A2F0 (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 *     Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline @ 0x14008A338 (Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_IFR_SF_dLd @ 0x14008A38C (WPP_IFR_SF_dLd.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

__int64 __fastcall FxDmaEnabler::Initialize(FxDmaEnabler *this, _WDF_DMA_ENABLER_CONFIG *Config, FxDeviceBase *Device)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // rsi
  FxDeviceBase_vtbl *v7; // rax
  unsigned int v8; // r13d
  int _a2; // eax
  unsigned int v10; // edx
  unsigned int v11; // r8d
  int v12; // edi
  unsigned __int16 v13; // r8
  const void *_a1; // r14
  _WDF_DMA_PROFILE Profile; // ecx
  char v16; // r9
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int32 v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int64 v25; // rdx
  FxDeviceBase_vtbl *v26; // rax
  unsigned __int8 v27; // di
  unsigned int AddressWidthOverride; // ecx
  unsigned __int16 v29; // r9
  unsigned int WdmDmaVersionOverride; // eax
  _FX_DRIVER_GLOBALS *v31; // rcx
  __int16 v32; // r8
  const void *v33; // r10
  unsigned __int16 v34; // r9
  unsigned __int16 m_ObjectSize; // ax
  const void *v36; // rbx
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  bool v38; // zf
  FxDeviceBase *m_DeviceBase; // rcx
  FxDeviceBase *v40; // rcx
  char v41; // al
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  int v43; // [rsp+38h] [rbp-48h]
  _DEVICE_DESCRIPTION deviceDescription; // [rsp+40h] [rbp-40h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+B0h] [rbp+30h]
  unsigned int globalsa; // [rsp+B0h] [rbp+30h]

  p_m_Globals = &this->m_Globals;
  globals = this->m_Globals;
  memset(&deviceDescription, 0, sizeof(deviceDescription));
  v7 = Device->FxNonPagedObject::FxObject::__vftable;
  v8 = 2;
  deviceDescription.Version = 2;
  _a2 = v7->AllocateDmaEnablerList(Device);
  v12 = _a2;
  if ( _a2 >= 0 )
  {
    LOBYTE(v10) = *((_BYTE *)this + 380);
    LOBYTE(v11) = 1;
    this->m_DeviceBase = Device;
    Profile = Config->Profile;
    v16 = v10 | 4;
    this->m_Profile = Profile;
    deviceDescription.Master = 1;
    LOBYTE(globalsa) = 1;
    deviceDescription.Dma32BitAddresses = 1;
    deviceDescription.InterfaceType = PCIBus;
    *((_BYTE *)this + 380) = v10 | 4;
    v17 = Profile - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( !v19 )
        {
          v27 = 1;
          deviceDescription.ScatterGather = 0;
          deviceDescription.Dma64BitAddresses = 1;
          goto LABEL_26;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          LOBYTE(v10) = v10 | 0xC;
          goto LABEL_21;
        }
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( v23 != 1 )
                return 3221225485LL;
              v25 = 128LL;
              *((_BYTE *)this + 380) = v16 & 0xEB | 0x10;
            }
            else
            {
              *((_BYTE *)this + 380) = v10 & 0xFB;
              v25 = 64LL;
            }
            LOBYTE(_a2) = 0;
            deviceDescription.Dma64BitAddresses = 0;
            globalsa = _a2;
            v8 = 3;
            deviceDescription.Dma32BitAddresses = 0;
            v26 = Device->FxNonPagedObject::FxObject::__vftable;
            v27 = 0;
            deviceDescription.Version = 3;
            *(_WORD *)&deviceDescription.Master = 0;
            v26->SetDeviceTelemetryInfoFlags(Device, (FxDeviceInfoFlags)v25);
            v11 = globalsa;
LABEL_26:
            this->m_MaximumLength = Config->MaximumLength;
            AddressWidthOverride = Config->AddressWidthOverride;
            if ( AddressWidthOverride )
            {
              if ( (*((_BYTE *)this + 380) & 4) == 0 )
              {
                v29 = 11;
LABEL_29:
                WPP_IFR_SF_dLd(*p_m_Globals, v10, v11, v29, traceGuid, AddressWidthOverride, Config->Profile, v43);
LABEL_30:
                FxVerifierDbgBreakPoint(*p_m_Globals);
                return 3221225485LL;
              }
              if ( !v27 && AddressWidthOverride > 0x20 )
              {
                v29 = 12;
                goto LABEL_29;
              }
              if ( FxLibraryGlobals.OsVersionInfo.dwMajorVersion > 6
                || FxLibraryGlobals.OsVersionInfo.dwMajorVersion == 6
                && FxLibraryGlobals.OsVersionInfo.dwMinorVersion >= 2 )
              {
                v8 = 3;
                deviceDescription.DmaAddressWidth = Config->AddressWidthOverride;
                deviceDescription.Version = 3;
              }
              else
              {
                if ( AddressWidthOverride < 0x40 )
                  v27 = 0;
                deviceDescription.Dma64BitAddresses = v27;
                if ( AddressWidthOverride < 0x20 )
                  LOBYTE(v11) = 0;
                LOBYTE(globalsa) = v11;
                deviceDescription.Dma32BitAddresses = v11;
                if ( AddressWidthOverride < 0x18 )
                {
                  WPP_IFR_SF_(*p_m_Globals, 2u, 0xFu, 0xDu, WPP_FxDmaEnabler_cpp_Traceguids);
                  return 3221225473LL;
                }
                if ( ((AddressWidthOverride - 32) & 0xFFFFFFDF) != 0 )
                  WPP_IFR_SF_dd(
                    *p_m_Globals,
                    3u,
                    0xFu,
                    0xEu,
                    WPP_FxDmaEnabler_cpp_Traceguids,
                    AddressWidthOverride,
                    8 * (unsigned __int8)v11 + 24);
              }
            }
            WdmDmaVersionOverride = Config->WdmDmaVersionOverride;
            if ( WdmDmaVersionOverride )
            {
              if ( WdmDmaVersionOverride < v8 )
              {
                WPP_IFR_SF_DDd(
                  *p_m_Globals,
                  v10,
                  0xFu,
                  0xFu,
                  WPP_FxDmaEnabler_cpp_Traceguids,
                  WdmDmaVersionOverride,
                  v8,
                  -1073741811);
                goto LABEL_30;
              }
              v8 = Config->WdmDmaVersionOverride;
              deviceDescription.Version = v8;
            }
            if ( v8 >= 3 && !deviceDescription.DmaAddressWidth )
            {
              if ( v27 )
                deviceDescription.DmaAddressWidth = 64;
              else
                deviceDescription.DmaAddressWidth = (_BYTE)globalsa != 0 ? 32 : 24;
            }
            if ( (Config->Flags & 2) != 0 )
            {
              if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(*p_m_Globals, v10, 0x13u) )
              {
                v34 = 17;
                goto LABEL_59;
              }
              if ( v8 != 3 )
              {
                v34 = v32 - 3;
LABEL_59:
                m_ObjectSize = this->m_ObjectSize;
                v36 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !m_ObjectSize )
                  v36 = v33;
                WPP_IFR_SF_qd(v31, 2u, 0xFu, v34, WPP_FxDmaEnabler_cpp_Traceguids, v36, -1073741811);
                goto LABEL_30;
              }
              *((_BYTE *)this + 380) |= 0x40u;
            }
            if ( Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline() )
            {
              if ( (Config->Flags & 4) != 0 )
              {
                WdfBindInfo = (*p_m_Globals)->WdfBindInfo;
                if ( WdfBindInfo->Version.Minor >= 0x23 )
                {
                  if ( FxQueryDmaFeatureSupport((UndockedKernel::_DMA_FEATURE_TYPE)WdfBindInfo) < 0 )
                    WPP_IFR_SF_(this->m_Globals, 2u, 0xFu, 0x12u, WPP_FxDmaEnabler_cpp_Traceguids);
                  else
                    deviceDescription.Reserved1 |= 4u;
                }
              }
            }
            v38 = (*((_BYTE *)this + 380) & 4) == 0;
            m_DeviceBase = this->m_DeviceBase;
            this->m_FDO = m_DeviceBase->m_DeviceObject.m_DeviceObject;
            this->m_PDO = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
            if ( v38 || (v12 = FxDmaEnabler::ConfigureBusMasterAdapters(this, &deviceDescription, Config), v12 >= 0) )
            {
              v40 = this->m_DeviceBase;
              this->m_EvtDmaEnablerFill.m_Method = Config->EvtDmaEnablerFill;
              this->m_EvtDmaEnablerFlush.m_Method = Config->EvtDmaEnablerFlush;
              this->m_EvtDmaEnablerEnable.m_Method = Config->EvtDmaEnablerEnable;
              this->m_EvtDmaEnablerDisable.m_Method = Config->EvtDmaEnablerDisable;
              this->m_EvtDmaEnablerSelfManagedIoStart.m_Method = Config->EvtDmaEnablerSelfManagedIoStart;
              this->m_EvtDmaEnablerSelfManagedIoStop.m_Method = Config->EvtDmaEnablerSelfManagedIoStop;
              v40->AddDmaEnabler(v40, this);
              v41 = *((_BYTE *)this + 380) | 1;
              *((_BYTE *)this + 380) = v41;
              if ( (v41 & 4) != 0 )
                this->m_DeviceBase->SetDeviceTelemetryInfoFlags(this->m_DeviceBase, DeviceInfoDmaBusMaster);
              return 0;
            }
            else
            {
              FxDmaEnabler::ReleaseResources(this);
            }
            return (unsigned int)v12;
          }
          LOBYTE(v10) = v10 | 0x1C;
LABEL_21:
          v27 = 1;
          *((_BYTE *)this + 380) = v10;
          deviceDescription.Dma64BitAddresses = 1;
          deviceDescription.ScatterGather = 1;
          goto LABEL_26;
        }
        LOBYTE(v10) = v10 | 0x1C;
      }
      else
      {
        LOBYTE(v10) = v10 | 0xC;
      }
      deviceDescription.ScatterGather = 1;
      *((_BYTE *)this + 380) = v10;
    }
    else
    {
      deviceDescription.ScatterGather = 0;
    }
    v27 = 0;
    deviceDescription.Dma64BitAddresses = 0;
    goto LABEL_26;
  }
  v13 = Device->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v13 )
    _a1 = 0LL;
  WPP_IFR_SF_qd(globals, 2u, 0xFu, 0xAu, WPP_FxDmaEnabler_cpp_Traceguids, _a1, _a2);
  return (unsigned int)v12;
}
