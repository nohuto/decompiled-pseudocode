/*
 * XREFs of ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1400698B8
 * Callers:
 *     imp_WdfRequestRetrieveOutputWdmMdl @ 0x1400130D0 (imp_WdfRequestRetrieveOutputWdmMdl.c)
 *     imp_WdfRequestRetrieveInputWdmMdl @ 0x1400697F0 (imp_WdfRequestRetrieveInputWdmMdl.c)
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x140086C90 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_Dqqd @ 0x140049AEC (WPP_IFR_SF_Dqqd.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140059E28 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qDqd @ 0x140069D24 (WPP_IFR_SF_qDqd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dqqd @ 0x1400943B4 (WPP_IFR_SF_dqqd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x140098084 (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 */

__int64 __fastcall FxRequest::GetMdl(FxRequest *this, _MDL **pMdl, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v6; // r12
  _IRP *m_Irp; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int flags; // r9d
  FxDeviceBase *v10; // rcx
  unsigned int LowPart; // r8d
  void *MasterIrp; // rsi
  unsigned int *p_Options; // r15
  unsigned int v14; // r15d
  _MDL *m_AllocatedMdl; // rax
  _MDL *Debug; // rax
  _MDL *v17; // rbp
  unsigned __int8 v18; // r8
  unsigned __int16 v20; // ax
  const void *id; // rcx
  const void *level; // rdx
  int IsNotCompleted; // esi
  _LIST_ENTRY *Flink; // rcx
  _MDL *MdlAddress; // rax
  int v26; // ebp
  const void *v27; // rcx
  unsigned __int16 v28; // ax
  const void *v29; // rdx
  bool v30; // zf
  unsigned __int16 v31; // ax
  const void *v32; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  const void *v34; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v36; // rdx
  unsigned __int16 v37; // ax
  int v38; // ebp
  const void *v39; // rcx
  unsigned __int16 v40; // r9
  unsigned __int16 v41; // ax
  const void *v42; // rbx
  const _GUID *Irp; // [rsp+20h] [rbp-58h]
  int globals; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Flink = this[-1].m_ForwardProgressList.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( m_Globals->FxVerifierIO )
  {
    IsNotCompleted = FxRequest::VerifyRequestIsNotCompleted(this, m_Globals);
    if ( IsNotCompleted < 0 )
      goto LABEL_21;
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  flags = CurrentStackLocation->MajorFunction;
  if ( (unsigned __int8)(flags - 14) <= 1u )
  {
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (LowPart & 3) == 0 || (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) - 1 < 2 )
    {
      MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
      p_Options = &CurrentStackLocation->Parameters.Create.Options;
      goto LABEL_8;
    }
    m_DeviceBase = this->m_DeviceBase;
    v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    if ( !this->m_ObjectSize )
      v34 = 0LL;
    v36 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v36 = 0LL;
    WPP_IFR_SF_Dqqd(m_Globals, (unsigned __int8)v36, LowPart, 0xAu, WPP_FxRequestKm_cpp_Traceguids, LowPart, v36, v34);
    WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequestKm_cpp_Traceguids);
LABEL_47:
    IsNotCompleted = -1073741808;
LABEL_20:
    *pMdl = 0LL;
LABEL_21:
    FxNonPagedObject::Unlock(this, v6, LowPart);
    return (unsigned int)IsNotCompleted;
  }
  v10 = this->m_DeviceBase;
  LowPart = v10[1].m_Refcnt;
  if ( LowPart != 2 )
  {
    if ( LowPart == 3 )
    {
      MdlAddress = m_Irp->MdlAddress;
      *pMdl = MdlAddress;
      if ( MdlAddress )
      {
        v26 = 0;
      }
      else
      {
        v26 = -1073741789;
        v27 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v27 = 0LL;
        WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0xDu, WPP_FxRequestKm_cpp_Traceguids, v27, -1073741789);
      }
      IsNotCompleted = v26;
      goto LABEL_21;
    }
    v28 = this->m_ObjectSize;
    v29 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( LowPart != 1 )
    {
      v30 = v28 == 0;
      v37 = v10->m_ObjectSize;
      if ( v30 )
        v29 = 0LL;
      v38 = -1073741595;
      v39 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v37 )
        v39 = 0LL;
      WPP_IFR_SF_dqqd(
        m_Globals,
        (unsigned __int8)v29,
        0x10u,
        0x10u,
        WPP_FxRequestKm_cpp_Traceguids,
        LowPart,
        v39,
        v29,
        -1073741595);
      FxVerifierDbgBreakPoint(m_Globals);
LABEL_57:
      IsNotCompleted = v38;
      goto LABEL_20;
    }
    v30 = v28 == 0;
    v31 = v10->m_ObjectSize;
    if ( v30 )
      v29 = 0LL;
    v32 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v31 )
      v32 = 0LL;
    WPP_IFR_SF_qqd(m_Globals, 2u, 0x10u, 0xEu, WPP_FxRequestKm_cpp_Traceguids, v32, v29, 0xC0000010);
    WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xFu, WPP_FxRequestKm_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_Globals);
    goto LABEL_47;
  }
  MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
  if ( (unsigned __int8)(flags - 3) > 1u )
  {
    v20 = v10->m_ObjectSize;
    id = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v20 )
      id = 0LL;
    level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      level = 0LL;
    WPP_IFR_SF_qDqd(m_Globals, (unsigned __int8)level, 2u, flags, Irp, level, flags, id, globals);
    IsNotCompleted = -1073741811;
    goto LABEL_20;
  }
  p_Options = (unsigned int *)&CurrentStackLocation->Parameters;
LABEL_8:
  v14 = *p_Options;
  if ( MasterIrp && v14 )
  {
    m_AllocatedMdl = this->m_AllocatedMdl;
    if ( m_AllocatedMdl )
    {
      *pMdl = m_AllocatedMdl;
      IsNotCompleted = 0;
      goto LABEL_21;
    }
    if ( m_Globals->FxVerifierOn )
      Debug = FxMdlAllocateDebug(m_Globals, this, MasterIrp, v14, (unsigned __int8)Irp, 0, retaddr);
    else
      Debug = IoAllocateMdl(MasterIrp, v14, 0, 0, 0LL);
    v17 = Debug;
    if ( Debug )
    {
      MmBuildMdlForNonPagedPool(Debug);
      this->m_AllocatedMdl = v17;
      *pMdl = v17;
      FxNonPagedObject::Unlock(this, v6, v18);
      return 0LL;
    }
    v38 = -1073741670;
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequestKm_cpp_Traceguids, MasterIrp, v14, -1073741670);
    goto LABEL_57;
  }
  *pMdl = 0LL;
  FxNonPagedObject::Unlock(this, v6, LowPart);
  if ( !MasterIrp )
  {
    v40 = 17;
LABEL_62:
    v41 = this->m_ObjectSize;
    v42 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v41 )
      v42 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v40, WPP_FxRequestKm_cpp_Traceguids, v42, -1073741789);
    return 3221225507LL;
  }
  if ( !v14 )
  {
    v40 = 18;
    goto LABEL_62;
  }
  return 3221225507LL;
}
