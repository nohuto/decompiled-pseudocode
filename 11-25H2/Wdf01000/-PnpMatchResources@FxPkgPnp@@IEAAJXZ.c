/*
 * XREFs of ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x140040E00
 * Callers:
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x140040C9C (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1400413A4 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x14004161C (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x14007BFE4 (-AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpMatchResources(FxPkgPnp *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v3; // r12d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _CM_RESOURCE_LIST *AllocatedResourcesTranslated; // rdi
  int _a2; // eax
  int _a1; // ebp
  _LIST_ENTRY *p_m_InterruptListHead; // rdi
  _LIST_ENTRY *i; // rax
  FxCmResList *m_Resources; // rax
  _LIST_ENTRY *v11; // rsi
  _LIST_ENTRY *Flink; // r14
  FxCollectionInternal *v13; // rcx
  _LIST_ENTRY *j; // r15
  _LIST_ENTRY **p_Blink; // r14
  _LIST_ENTRY **v16; // r15
  FxDeviceBase *v17; // rdx
  _FX_DRIVER_GLOBALS *v18; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // cx
  const void *v22; // rdx
  FxDeviceBase *v23; // rcx
  unsigned __int16 v24; // ax
  const void *v25; // rcx
  _LIST_ENTRY *v26; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v27; // r13
  _LIST_ENTRY *v28; // rcx
  FxDeviceBase *v29; // rcx
  unsigned __int16 v30; // ax
  const void *v31; // rcx
  unsigned int Blink_high; // [rsp+80h] [rbp+8h]
  FxCollectionInternal *v33; // [rsp+88h] [rbp+10h]
  _LIST_ENTRY *v34; // [rsp+90h] [rbp+18h]

  m_Globals = this->m_Globals;
  v3 = 0;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x1Du, WPP_PnpStateMachine_cpp_Traceguids);
  this->m_PnpState.Value = this->m_PnpState.Value & 0xFFFFF3CF | 0x820;
  CurrentStackLocation = this->m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
  AllocatedResourcesTranslated = CurrentStackLocation->Parameters.StartDevice.AllocatedResourcesTranslated;
  _a2 = FxCmResList::BuildFromWdmList(
          this->m_ResourcesRaw,
          CurrentStackLocation->Parameters.StartDevice.AllocatedResources,
          0);
  _a1 = _a2;
  if ( _a2 < 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v22 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v22 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x1Eu, WPP_PnpStateMachine_cpp_Traceguids, v22, _a2);
  }
  else
  {
    _a1 = FxCmResList::BuildFromWdmList(this->m_Resources, AllocatedResourcesTranslated, 0);
    if ( _a1 < 0 )
    {
      v23 = this->m_DeviceBase;
      v24 = v23->m_ObjectSize;
      v25 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v24 )
        v25 = 0LL;
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x1Fu, WPP_PnpStateMachine_cpp_Traceguids, v25, _a1);
    }
    else
    {
      p_m_InterruptListHead = &this->m_InterruptListHead;
      for ( i = this->m_InterruptListHead.Flink; i != p_m_InterruptListHead; i = i->Flink )
      {
        i[-5].Blink = 0LL;
        LOWORD(i[-2].Flink) = 0;
        BYTE4(i[-4].Blink) = 0;
        BYTE1(i[-3].Blink) = 0;
        LODWORD(i[-3].Flink) = 0;
        LODWORD(i[-4].Blink) = 0;
        BYTE1(i[-19].Blink) = 0;
      }
      m_Resources = this->m_Resources;
      v11 = &this->m_InterruptListHead;
      Flink = m_Resources->m_ListHead.Flink;
      v13 = &m_Resources->FxCollectionInternal;
      v33 = &m_Resources->FxCollectionInternal;
      for ( j = this->m_ResourcesRaw->m_ListHead.Flink; ; j = v16[1] )
      {
        p_Blink = &Flink[-1].Blink;
        v16 = &j[-1].Blink;
        if ( p_Blink == (_LIST_ENTRY **)v13 )
          break;
        v26 = *v16;
        v27 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&(*v16)[6].Blink;
        if ( v27->Type == 2 )
        {
          v11 = v11->Flink;
          if ( v11 == p_m_InterruptListHead )
          {
            v29 = this->m_DeviceBase;
            v30 = v29->m_ObjectSize;
            v31 = (const void *)((unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v30 )
              v31 = 0LL;
            WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, 0x20u, WPP_PnpStateMachine_cpp_Traceguids, v31);
            break;
          }
          v28 = *p_Blink;
          v34 = *p_Blink;
          Blink_high = HIWORD(v26[6].Blink);
          if ( (BYTE2((*p_Blink)[6].Blink) & 2) != 0 && HIWORD(v26[6].Blink) > 1u )
          {
            do
            {
              if ( v11 == p_m_InterruptListHead )
                break;
              FxInterrupt::AssignResources(
                (FxInterrupt *)&v11[-28].Blink,
                v27,
                (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v28[6].Blink);
              v11 = v11->Flink;
              ++v3;
              v28 = v34;
            }
            while ( v3 < Blink_high );
            v3 = 0;
          }
          else
          {
            FxInterrupt::AssignResources(
              (FxInterrupt *)&v11[-28].Blink,
              v27,
              (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v28[6].Blink);
          }
          v13 = v33;
        }
        Flink = p_Blink[1];
      }
      v17 = this->m_DeviceBase;
      if ( BYTE1(v17[1].m_Globals) )
      {
        if ( (v17->m_AttachedDevice.m_DeviceObject->Characteristics & 1) != 0 )
          v17->m_DeviceObject.m_DeviceObject->Characteristics |= 1u;
        FxDevice::SetFilterIoType(this->m_Device);
      }
    }
  }
  v18 = this->m_Globals;
  if ( v18->FxVerboseOn )
    WPP_IFR_SF_D(v18, 5u, 0xCu, 0x21u, WPP_PnpStateMachine_cpp_Traceguids, _a1);
  return (unsigned int)_a1;
}
