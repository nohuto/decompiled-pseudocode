/*
 * XREFs of ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400A4004
 * Callers:
 *     imp_WdfInterruptCreate @ 0x1400A2120 (imp_WdfInterruptCreate.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qqq @ 0x140041538 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1400A3E08 (-ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 */

__int64 __fastcall FxPkgPnp::ValidateInterruptResourceCm(
        FxPkgPnp *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmIntResourceRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmIntResource,
        _WDF_INTERRUPT_CONFIG *Configuration)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int v8; // ebx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v9; // rdx
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v12; // r8
  unsigned __int16 v13; // r9
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v14; // r15
  FxDeviceBase *v15; // rcx
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // rcx
  _LIST_ENTRY *p_m_InterruptListHead; // rax
  int v19; // r12d
  _LIST_ENTRY *i; // rbx
  _LIST_ENTRY **p_Blink; // rcx
  FxDeviceBase *v22; // rcx
  unsigned __int16 v23; // ax
  const void *v24; // rcx
  FxDeviceBase *v25; // rcx
  unsigned __int16 v26; // ax
  const void *v27; // rcx
  FxDeviceBase *v28; // rdx
  unsigned __int16 v29; // ax
  const void *_a3; // rdx
  const void *v31; // rcx
  FxDeviceBase *v32; // rdx
  unsigned __int16 v33; // ax
  const void *v34; // rdx
  const void *v35; // rcx
  unsigned __int16 v36; // r9
  FxDeviceBase *v37; // rdx
  unsigned __int16 v38; // ax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *_a1; // [rsp+28h] [rbp-50h]
  void *_a2; // [rsp+30h] [rbp-48h]
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v42; // [rsp+80h] [rbp+8h] BYREF
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v43; // [rsp+88h] [rbp+10h] BYREF
  _WDF_INTERRUPT_CONFIG *v44; // [rsp+98h] [rbp+20h]

  v44 = Configuration;
  m_Globals = this->m_Globals;
  v42 = CmIntResourceRaw;
  v43 = CmIntResource;
  v8 = FxPkgPnp::ValidateCmResource(this, &v42, &v43);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = v42;
  if ( v42->Type != 2 )
  {
    v8 = -1073741811;
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v12 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v12 = 0LL;
    v13 = 38;
    _a2 = (void *)v12;
    _a1 = CmIntResourceRaw;
LABEL_6:
    WPP_IFR_SF_qqd(m_Globals, 2u, 0xCu, v13, WPP_PnpStateMachine_cpp_Traceguids, _a1, _a2, 0xC000000D);
    goto LABEL_7;
  }
  v14 = v43;
  if ( v43->Type != 2 )
  {
    v8 = -1073741811;
    v15 = this->m_DeviceBase;
    v16 = v15->m_ObjectSize;
    v17 = (unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v16 )
      v17 = 0LL;
    v13 = 39;
    _a2 = (void *)v17;
    _a1 = CmIntResource;
    goto LABEL_6;
  }
  p_m_InterruptListHead = &this->m_InterruptListHead;
  v19 = 0;
  for ( i = this->m_InterruptListHead.Flink; ; i = i->Flink )
  {
    if ( i == p_m_InterruptListHead )
      return 0;
    p_Blink = &i[-28].Blink;
    if ( v14 == (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)i[-2].Blink )
      break;
    if ( v19 )
    {
      v8 = -1073741811;
      v22 = this->m_DeviceBase;
      v23 = v22->m_ObjectSize;
      v24 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v23 )
        v24 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x28u, WPP_PnpStateMachine_cpp_Traceguids, v24, -1073741811);
      goto LABEL_7;
    }
LABEL_35:
    ;
  }
  if ( p_Blink[34] && v44->PassiveHandling )
  {
    v32 = this->m_DeviceBase;
    v33 = v32->m_ObjectSize;
    v34 = (const void *)((unsigned __int64)v32 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v33 )
      v34 = 0LL;
    if ( *((_WORD *)p_Blink + 5) )
      v35 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v35 = 0LL;
    v36 = 41;
    goto LABEL_42;
  }
  if ( *((_BYTE *)p_Blink + 258) && v44->CanWakeDevice )
  {
    v37 = this->m_DeviceBase;
    v38 = v37->m_ObjectSize;
    v34 = (const void *)((unsigned __int64)v37 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v38 )
      v34 = 0LL;
    if ( *((_WORD *)p_Blink + 5) )
      v35 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v35 = 0LL;
    v36 = 42;
LABEL_42:
    WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, v36, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v35, v34);
    return (unsigned int)-1073741811;
  }
  if ( (v14->Flags & 2) == 0 )
  {
    v28 = this->m_DeviceBase;
    v29 = v28->m_ObjectSize;
    _a3 = (const void *)((unsigned __int64)v28 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v29 )
      _a3 = 0LL;
    if ( *((_WORD *)p_Blink + 5) )
      v31 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v31 = 0LL;
    WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x2Bu, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v31, _a3);
    v9 = v42;
    goto LABEL_34;
  }
  if ( ++v19 <= (unsigned int)v9->u.MessageInterrupt.Raw.MessageCount )
  {
LABEL_34:
    p_m_InterruptListHead = &this->m_InterruptListHead;
    goto LABEL_35;
  }
  v8 = -1073741811;
  v25 = this->m_DeviceBase;
  v26 = v25->m_ObjectSize;
  v27 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v26 )
    v27 = 0LL;
  WPP_IFR_SF_qqd(m_Globals, 2u, 0xCu, 0x2Cu, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v27, 0xC000000D);
LABEL_7:
  FxVerifierDbgBreakPoint(m_Globals);
  return (unsigned int)v8;
}
