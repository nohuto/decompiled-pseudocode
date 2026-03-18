/*
 * XREFs of ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x14002C120
 * Callers:
 *     imp_WdfRequestRetrieveOutputWdmMdl @ 0x14002BF90 (imp_WdfRequestRetrieveOutputWdmMdl.c)
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x140086C80 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 * Callees:
 *     WPP_IFR_SF_qDd @ 0x1400017F0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_Dqqd @ 0x14005224C (WPP_IFR_SF_Dqqd.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140056F48 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqdd @ 0x140086778 (WPP_IFR_SF_qqdd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1400980C4 (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 */

__int64 __fastcall FxRequest::GetDeviceControlOutputMdl(FxRequest *this, _MDL **pMdl, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int Length; // ebp
  void *_a2; // r15
  unsigned __int8 v8; // r12
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int MajorFunction; // r8d
  unsigned int LowPart; // r8d
  _MDL *v13; // rax
  unsigned int IsNotCompleted; // edi
  _MDL *MdlAddress; // rax
  unsigned __int16 v17; // r9
  const void *_a1; // rcx
  _LIST_ENTRY *Flink; // rcx
  const void *v20; // rdx
  FxDeviceBase *m_DeviceBase; // rdx
  const void *v22; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v24; // rdx
  _MDL *m_AllocatedMdl; // rax
  _MDL *Debug; // rax
  _MDL *v27; // rdi
  const void *v28; // rcx
  unsigned __int16 v29; // r9
  unsigned __int16 v30; // ax
  const void *v31; // rbx
  unsigned __int8 traceGuid; // [rsp+20h] [rbp-58h]
  int _a4; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  Length = 0;
  _a2 = 0LL;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Flink = this[-1].m_ForwardProgressList.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, a3);
    v8 = irql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( m_Globals->FxVerifierIO )
  {
    IsNotCompleted = FxRequest::VerifyRequestIsNotCompleted(this, m_Globals);
    if ( (IsNotCompleted & 0x80000000) != 0 )
      goto LABEL_10;
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( (unsigned __int8)(MajorFunction - 14) > 1u )
  {
    v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    IsNotCompleted = -1073741808;
    if ( !this->m_ObjectSize )
      v20 = 0LL;
    WPP_IFR_SF_qDd(
      m_Globals,
      (unsigned __int8)v20,
      0x10u,
      0x14u,
      WPP_FxRequestKm_cpp_Traceguids,
      v20,
      MajorFunction,
      0xC0000010);
    goto LABEL_42;
  }
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( (LowPart & 3) != 0 )
  {
    switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3 )
    {
      case 1u:
        MdlAddress = m_Irp->MdlAddress;
        *pMdl = MdlAddress;
        if ( MdlAddress )
          goto LABEL_9;
        v17 = 21;
        goto LABEL_14;
      case 2u:
        v13 = m_Irp->MdlAddress;
        *pMdl = v13;
        if ( v13 )
        {
LABEL_9:
          IsNotCompleted = 0;
LABEL_10:
          FxNonPagedObject::Unlock(this, v8);
          return IsNotCompleted;
        }
        v17 = 22;
LABEL_14:
        IsNotCompleted = -1073741789;
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v17, WPP_FxRequestKm_cpp_Traceguids, _a1, -1073741789);
        goto LABEL_10;
      case 3u:
        m_DeviceBase = this->m_DeviceBase;
        v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        if ( !this->m_ObjectSize )
          v22 = 0LL;
        v24 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v24 = 0LL;
        WPP_IFR_SF_Dqqd(
          m_Globals,
          (unsigned __int8)v24,
          LowPart,
          0x17u,
          WPP_FxRequestKm_cpp_Traceguids,
          LowPart,
          v24,
          v22,
          _a4);
        WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0x18u, WPP_FxRequestKm_cpp_Traceguids);
        IsNotCompleted = -1073741808;
LABEL_42:
        *pMdl = 0LL;
        goto LABEL_10;
    }
LABEL_44:
    *pMdl = 0LL;
    FxNonPagedObject::Unlock(this, v8);
    IsNotCompleted = -1073741789;
    if ( _a2 )
    {
      if ( Length )
        return IsNotCompleted;
      v29 = 26;
    }
    else
    {
      v29 = 25;
    }
    v30 = this->m_ObjectSize;
    v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v30 )
      v31 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v29, WPP_FxRequestKm_cpp_Traceguids, v31, -1073741789);
    return IsNotCompleted;
  }
  _a2 = m_Irp->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !_a2 || !Length )
    goto LABEL_44;
  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    *pMdl = m_AllocatedMdl;
    goto LABEL_9;
  }
  if ( m_Globals->FxVerifierOn )
    Debug = FxMdlAllocateDebug(m_Globals, this, _a2, Length, traceGuid, 0, retaddr);
  else
    Debug = IoAllocateMdl(_a2, Length, 0, 0, 0LL);
  v27 = Debug;
  if ( !Debug )
  {
    v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    IsNotCompleted = -1073741670;
    if ( !this->m_ObjectSize )
      v28 = 0LL;
    WPP_IFR_SF_qqdd(m_Globals, 2u, 0x10u, 0x1Bu, WPP_FxRequestKm_cpp_Traceguids, v28, _a2, Length, -1073741670);
    goto LABEL_42;
  }
  MmBuildMdlForNonPagedPool(Debug);
  this->m_AllocatedMdl = v27;
  *pMdl = v27;
  FxNonPagedObject::Unlock(this, v8);
  return 0LL;
}
