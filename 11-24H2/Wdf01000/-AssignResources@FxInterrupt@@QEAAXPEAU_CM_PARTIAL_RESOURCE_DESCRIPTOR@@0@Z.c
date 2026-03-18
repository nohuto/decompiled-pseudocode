/*
 * XREFs of ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x14007BC84
 * Callers:
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x140061820 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400A9650 (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ddLLdiDD @ 0x14007BE30 (WPP_IFR_SF_ddLLdiDD.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxInterrupt::AssignResources(
        FxInterrupt *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmDescRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmDescTrans)
{
  _KINTERRUPT_MODE v6; // edx
  bool v7; // zf
  __int16 v8; // cx
  unsigned __int8 v9; // al
  unsigned int *p_Vector; // rsi
  $921581151E63D277366488A82A7AB3A8 *v11; // rdi
  FxDeviceBase *m_DeviceBase; // rcx
  __int64 v13; // rdx
  unsigned __int16 v14; // r9
  const _GUID *v15; // [rsp+20h] [rbp-58h]

  this->m_InterruptInfo.Group = CmDescTrans->u.MessageInterrupt.Raw.MessageCount;
  this->m_InterruptInfo.TargetProcessorSet = CmDescTrans->u.Interrupt.Affinity;
  this->m_InterruptInfo.ShareDisposition = CmDescTrans->ShareDisposition;
  v6 = CmDescTrans->Flags & 1;
  v7 = this->m_PassiveHandling == 0;
  this->m_InterruptInfo.Mode = v6;
  this->m_InterruptInfo.Irql = CmDescTrans->u.Connection.Class;
  if ( !v7 )
    this->m_InterruptInfo.Irql = 0;
  v8 = CmDescTrans->Flags & 2;
  this->m_InterruptInfo.MessageSignaled = v8 != 0;
  v9 = v6 == Latched && !v8;
  this->m_IsEdgeTriggeredNonMsiInterrupt = v9;
  if ( v8 && CmDescRaw->u.MessageInterrupt.Raw.MessageCount > 1u )
  {
    p_Vector = &this->m_InterruptInfo.Vector;
    v11 = &this->96;
    m_DeviceBase = this->m_DeviceBase;
    v13 = 8LL;
    this->m_InterruptInfo.Vector = CmDescTrans->u.Generic.Start.HighPart + this->m_InterruptInfo.MessageNumber;
  }
  else
  {
    p_Vector = &this->m_InterruptInfo.Vector;
    v11 = &this->96;
    this->m_InterruptInfo.Vector = CmDescTrans->u.Interrupt.Vector;
    v7 = v8 == 0;
    m_DeviceBase = this->m_DeviceBase;
    if ( v7 )
    {
      v13 = 1LL;
      if ( (CmDescTrans->Flags & 1) != 0 )
        v13 = 2LL;
    }
    else
    {
      v13 = 4LL;
    }
  }
  m_DeviceBase->SetDeviceTelemetryInfoFlags(m_DeviceBase, (FxDeviceInfoFlags)v13);
  if ( this->m_PassiveHandling )
    v11->m_DeviceBase->SetDeviceTelemetryInfoFlags(v11->m_DeviceBase, DeviceInfoPassiveLevelInterrupt);
  this->m_CmTranslatedResource = CmDescTrans;
  WPP_IFR_SF_ddLLdiDD(
    this->m_Globals,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.MessageSignaled,
    v14,
    v15,
    this->m_InterruptInfo.MessageSignaled,
    this->m_InterruptInfo.MessageNumber,
    this->m_Policy,
    this->m_Priority,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.TargetProcessorSet,
    this->m_InterruptInfo.Irql,
    *p_Vector);
}
