/*
 * XREFs of ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1400A3E08
 * Callers:
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400A4004 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::ValidateCmResource(
        FxPkgPnp *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR **CmResourceRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR **CmResource)
{
  FxCmResList *m_Resources; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _LIST_ENTRY *Flink; // r10
  FxCollectionInternal *v9; // r9
  _LIST_ENTRY **p_Blink; // r10
  _LIST_ENTRY **v11; // r11
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *v13; // rbp
  unsigned int v14; // ebx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rcx
  const void *v19; // rbx
  FxDeviceBase *v20; // rdx
  unsigned __int16 v21; // ax
  const void *v22; // rdx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v23; // r15
  FxDeviceBase *v24; // rcx
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // r9
  const void *v27; // rcx
  bool v28; // zf
  const void *_a1; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v30; // rbp
  FxDeviceBase *v31; // rcx
  unsigned __int16 v32; // ax

  m_Resources = this->m_Resources;
  m_Globals = this->m_Globals;
  Flink = m_Resources->m_ListHead.Flink;
  v9 = &m_Resources->FxCollectionInternal;
  p_Blink = &Flink[-1].Blink;
  v11 = &this->m_ResourcesRaw->m_ListHead.Flink[-1].Blink;
  if ( p_Blink == (_LIST_ENTRY **)v9 )
  {
LABEL_4:
    v14 = -1073741811;
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qqd(m_Globals, 2u, 0xCu, 0x22u, WPP_PnpStateMachine_cpp_Traceguids, *CmResource, _a2, 0xC000000D);
  }
  else
  {
    while ( 1 )
    {
      v12 = *p_Blink;
      v13 = *v11;
      if ( (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)&(*p_Blink)[7].Blink + 4) == *CmResource )
        break;
      p_Blink = &p_Blink[1][-1].Blink;
      v11 = &v11[1][-1].Blink;
      if ( p_Blink == (_LIST_ENTRY **)v9 )
        goto LABEL_4;
    }
    v19 = (char *)&v13[7].Blink + 4;
    if ( (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)&v13[7].Blink + 4) == *CmResourceRaw )
    {
      v23 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v12[6].Blink;
      if ( RtlCompareMemory((char *)&v12[7].Blink + 4, &v12[6].Blink, 0x14uLL) == 20 )
      {
        v30 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v13[6].Blink;
        if ( RtlCompareMemory(v19, v30, 0x14uLL) == 20 )
        {
          *CmResource = v23;
          v14 = 0;
          *CmResourceRaw = v30;
          return v14;
        }
        v14 = -1073741811;
        v31 = this->m_DeviceBase;
        v32 = v31->m_ObjectSize;
        v26 = 37;
        v27 = (const void *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
        v28 = v32 == 0;
        _a1 = *CmResourceRaw;
      }
      else
      {
        v14 = -1073741811;
        v24 = this->m_DeviceBase;
        v25 = v24->m_ObjectSize;
        v26 = 36;
        v27 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
        v28 = v25 == 0;
        _a1 = *CmResource;
      }
      if ( v28 )
        v27 = 0LL;
      WPP_IFR_SF_qqd(m_Globals, 2u, 0xCu, v26, WPP_PnpStateMachine_cpp_Traceguids, _a1, v27, 0xC000000D);
    }
    else
    {
      v14 = -1073741811;
      v20 = this->m_DeviceBase;
      v21 = v20->m_ObjectSize;
      v22 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v21 )
        v22 = 0LL;
      WPP_IFR_SF_qqd(m_Globals, 2u, 0xCu, 0x23u, WPP_PnpStateMachine_cpp_Traceguids, *CmResourceRaw, v22, 0xC000000D);
    }
  }
  FxVerifierDbgBreakPoint(m_Globals);
  return v14;
}
