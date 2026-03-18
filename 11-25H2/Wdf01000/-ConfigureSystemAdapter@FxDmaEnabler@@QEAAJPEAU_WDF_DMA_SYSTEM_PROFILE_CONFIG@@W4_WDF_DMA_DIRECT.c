/*
 * XREFs of ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14008990C
 * Callers:
 *     imp_WdfDmaEnablerConfigureSystemProfile @ 0x1400A18E0 (imp_WdfDmaEnablerConfigureSystemProfile.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14004442C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qLLd @ 0x140089120 (WPP_IFR_SF_qLLd.c)
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1400898C4 (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

__int64 __fastcall FxDmaEnabler::ConfigureSystemAdapter(
        FxDmaEnabler *this,
        _WDF_DMA_SYSTEM_PROFILE_CONFIG *Config,
        _WDF_DMA_DIRECTION ConfigDirection)
{
  unsigned int _a4; // edx
  __int64 v7; // rcx
  _FX_DRIVER_GLOBALS *v8; // rcx
  int v9; // esi
  const void *_a2; // r8
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *DmaDescriptor; // rcx
  unsigned int Vector; // eax
  unsigned __int64 PreallocatedSGListSize; // rdi
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  unsigned __int64 Pool2; // rax
  __int64 m_ObjectSize; // rax
  const void *v17; // rbx
  char v18; // r8
  FxDmaEnabler *v19; // rcx
  char v20; // r8
  _DEVICE_DESCRIPTION deviceDescription; // [rsp+50h] [rbp-48h] BYREF

  if ( FxDmaEnabler::GetDmaDescription(this, ConfigDirection)->m_SimplexAdapterInfo.AdapterObject )
  {
    v8 = *(_FX_DRIVER_GLOBALS **)(v7 + 16);
    v9 = -1073741811;
    if ( v8->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qLLd(
        v8,
        5u,
        (unsigned int)_a2,
        0x13u,
        WPP_FxDmaEnabler_cpp_Traceguids,
        _a2,
        this->m_Profile,
        _a4,
        -1073741811);
    }
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  else
  {
    memset(&deviceDescription, 0, sizeof(deviceDescription));
    DmaDescriptor = Config->DmaDescriptor;
    deviceDescription.MaximumLength = this->m_MaximumLength;
    deviceDescription.DemandMode = Config->DemandMode;
    deviceDescription.AutoInitialize = Config->LoopedTransfer;
    deviceDescription.DmaWidth = Config->DmaWidth;
    deviceDescription.DeviceAddress.QuadPart = Config->DeviceAddress.QuadPart;
    deviceDescription.DmaChannel = DmaDescriptor->u.Generic.Start.LowPart;
    Vector = DmaDescriptor->u.Interrupt.Vector;
    deviceDescription.Version = 3;
    deviceDescription.InterfaceType = Internal;
    deviceDescription.DmaRequestLine = Vector;
    v9 = FxDmaEnabler::ConfigureDmaAdapter(this, &deviceDescription, ConfigDirection);
    if ( v9 >= 0 )
    {
      PreallocatedSGListSize = this->m_SimplexAdapterInfo.PreallocatedSGListSize;
      if ( (*((_BYTE *)this + 380) & 0x10) != 0
        && PreallocatedSGListSize <= this->m_DuplexAdapterInfo[1].PreallocatedSGListSize )
      {
        PreallocatedSGListSize = this->m_DuplexAdapterInfo[1].PreallocatedSGListSize;
      }
      p_m_Globals = &this->m_Globals;
      Pool2 = ExAllocatePool2(64LL, PreallocatedSGListSize, this->m_Globals->Tag);
      this->m_SGList.ScatterGatherProfile.Lookaside.L.ListHead.Alignment = Pool2;
      if ( Pool2 )
      {
        v18 = *((_BYTE *)this + 380) | 0x20;
        this->m_SGListSize = PreallocatedSGListSize;
        *((_BYTE *)this + 380) = v18;
        if ( FxDmaEnabler::GetDmaDescription(this, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.AdapterObject
          && FxDmaEnabler::GetDmaDescription(v19, WdfDmaDirectionWriteToDevice)->m_SimplexAdapterInfo.AdapterObject )
        {
          *((_BYTE *)this + 380) = v20 | 2;
        }
      }
      else
      {
        v9 = -1073741670;
        m_ObjectSize = this->m_ObjectSize;
        v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !(_WORD)m_ObjectSize )
          v17 = 0LL;
        WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xFu, 0x14u, WPP_FxDmaEnabler_cpp_Traceguids, v17, -1073741670);
      }
    }
  }
  return (unsigned int)v9;
}
