/*
 * XREFs of ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x140043C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14004442C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z @ 0x14004445C (-InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVI.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qqq @ 0x14004D358 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_dqd @ 0x140061E2C (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qqiDq @ 0x140087D50 (WPP_IFR_SF_qqiDq.c)
 *     WPP_IFR_SF_qqqD @ 0x1400880B8 (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_sqqii @ 0x1400882FC (WPP_IFR_SF_sqqii.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaPacketTransaction::StageTransfer(FxDmaPacketTransaction *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v5; // r12
  int v6; // r14d
  unsigned __int8 v7; // r8
  char v8; // di
  unsigned int v9; // ecx
  FxTagTracker *m_MapRegisterBase; // rax
  _FX_DRIVER_GLOBALS *v11; // r12
  unsigned __int64 m_Remaining; // r10
  unsigned __int64 flags; // rdi
  unsigned __int64 m_MaxFragmentLength; // rdx
  unsigned __int64 v15; // r9
  unsigned __int64 id; // rcx
  unsigned int m_MapRegistersReserved; // r8d
  _FX_DRIVER_GLOBALS *v18; // r8
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned __int8 *SgList; // r15
  FxDmaPacketTransaction_vtbl *v21; // rax
  unsigned __int16 v22; // r9
  _FX_DRIVER_GLOBALS *v23; // rdi
  const void *v24; // rsi
  unsigned int m_CurrentFragmentLength; // r8d
  unsigned __int64 v26; // rax
  const void *ProgramDma; // rdx
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v30; // r8
  WDFDMATRANSACTION__ *v31; // rdx
  unsigned __int8 v32; // al
  unsigned __int8 v33; // r8
  char v34; // di
  FxVerifierLock *v36; // rcx
  FxVerifierLock *v37; // rcx
  _FX_DRIVER_GLOBALS *v38; // rcx
  _MDL *m_CurrentFragmentMdl; // rcx
  unsigned __int64 ByteCount; // rax
  const void *globals; // rdx
  const char *v42; // rax
  unsigned __int64 v43; // rax
  const void *v44; // rax
  DMA_COMPLETION_STATUS CompletionStatus; // edi
  unsigned __int8 v46; // dl
  unsigned int v47; // r8d
  const void *v48; // rax
  unsigned __int8 v49; // r8
  _FX_DRIVER_GLOBALS **Direction; // [rsp+28h] [rbp-69h]
  unsigned int mappedBytes; // [rsp+68h] [rbp-29h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp-21h] BYREF
  _FX_DRIVER_GLOBALS *Tag; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int8 sgListBuffer[40]; // [rsp+80h] [rbp-11h] BYREF

  LOBYTE(mappedBytes) = 0;
  m_Globals = this->m_Globals;
  v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  Tag = m_Globals;
  v6 = 0;
  if ( !this->m_ObjectSize )
    v5 = 0LL;
  *(_QWORD *)sgListBuffer = v5;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x1Au, WPP_FxDmaTransactionPacket_cpp_Traceguids, v5);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v37 = *(FxVerifierLock **)&this[-1].m_MapRegisterBaseSet) != 0LL )
    FxVerifierLock::Lock(v37, (unsigned __int8 *)&mappedBytes, a3);
  else
    LOBYTE(mappedBytes) = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  pFxDriverGlobals = (_FX_DRIVER_GLOBALS *)-48LL;
  if ( this->m_TransferState.CurrentStagingThread )
  {
    v38 = Tag;
    v8 = 0;
    this->m_TransferState.RerunStaging = 1;
    if ( v38->FxVerifierOn && v38->FxVerboseOn )
      WPP_IFR_SF_q(v38, 5u, 0xFu, 0x1Bu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v5);
  }
  else
  {
    v8 = 1;
    this->m_TransferState.CurrentStagingThread = KeGetCurrentThread();
  }
  FxNonPagedObject::Unlock(this, mappedBytes, v7);
  v9 = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_MapRegisterBase = (FxTagTracker *)this[-1].m_MapRegisterBase;
    if ( m_MapRegisterBase )
      FxTagTracker::UpdateTagHistory(m_MapRegisterBase, &Tag, 0, 0LL, TagAddRef, v9);
  }
  if ( v8 )
  {
    v11 = pFxDriverGlobals;
    do
    {
      m_Remaining = this->m_Remaining;
      flags = this->m_Transferred;
      m_MaxFragmentLength = m_Remaining;
      if ( m_Remaining >= this->m_MaxFragmentLength )
        m_MaxFragmentLength = this->m_MaxFragmentLength;
      v15 = flags + this->m_StartOffset;
      id = m_MaxFragmentLength;
      this->m_CurrentFragmentLength = m_MaxFragmentLength;
      this->m_CurrentFragmentOffset = v15;
      if ( !this->m_RequireSingleTransfer )
      {
        m_MapRegistersReserved = this->m_MapRegistersReserved;
        if ( m_MapRegistersReserved )
        {
          if ( this->m_MapRegistersNeeded > m_MapRegistersReserved )
          {
            m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
            while ( m_CurrentFragmentMdl )
            {
              ByteCount = m_CurrentFragmentMdl->ByteCount;
              if ( ByteCount >= v15 )
                break;
              m_CurrentFragmentMdl = m_CurrentFragmentMdl->Next;
              v15 -= ByteCount;
            }
            id = (m_MapRegistersReserved << 12)
               - 4096
               - (unsigned __int64)(((_WORD)v15 + (unsigned __int16)m_CurrentFragmentMdl->ByteOffset) & 0xFFF)
               + 4096;
            if ( m_MaxFragmentLength < id )
              id = m_MaxFragmentLength;
            this->m_CurrentFragmentLength = id;
          }
        }
      }
      v18 = Tag;
      this->m_Remaining = m_Remaining - id;
      if ( v18->FxVerifierOn && v18->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          globals = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          globals = 0LL;
        v42 = "first";
        if ( flags )
          v42 = "next";
        WPP_IFR_SF_sqqii(
          v18,
          (unsigned __int8)globals,
          (unsigned int)v18,
          (unsigned __int16)this->m_CurrentFragmentMdl,
          (const _GUID *)Direction,
          v42,
          globals,
          this->m_CurrentFragmentMdl,
          flags,
          id);
      }
      if ( this->m_IsCancelled == 1 )
      {
        v6 = -1073741536;
      }
      else if ( this->PreMapTransfer(this) )
      {
        m_DmaEnabler = this->m_DmaEnabler;
        if ( (*((_BYTE *)m_DmaEnabler + 380) & 4) != 0 )
          SgList = &sgListBuffer[8];
        else
          SgList = (unsigned __int8 *)m_DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside.L.ListHead.Alignment;
        v21 = this->__vftable;
        LODWORD(pFxDriverGlobals) = 0;
        v21->GetTransferCompletionRoutine(this);
        v23 = this->m_Globals;
        if ( this->m_ObjectSize )
          v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v24 = 0LL;
        m_CurrentFragmentLength = this->m_CurrentFragmentLength;
        LODWORD(pFxDriverGlobals) = m_CurrentFragmentLength;
        if ( v23->FxVerifierOn && v23->FxVerboseOn )
          WPP_IFR_SF_qqiDq(
            v23,
            (unsigned __int8)this->m_CurrentFragmentMdl,
            m_CurrentFragmentLength,
            v22,
            (const _GUID *)Direction,
            v24,
            this->m_CurrentFragmentMdl,
            this->m_CurrentFragmentOffset,
            m_CurrentFragmentLength,
            this->m_MapRegisterBase);
        if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->DeviceDescription.Version == 3 )
        {
          LODWORD(Direction) = this->m_DeviceAddressOffset;
          v6 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, unsigned __int64))this->m_AdapterInfo->AdapterObject->DmaOperations->MapTransferEx)(
                 this->m_AdapterInfo->AdapterObject,
                 this->m_CurrentFragmentMdl,
                 this->m_MapRegisterBase,
                 this->m_CurrentFragmentOffset);
        }
        else
        {
          *(_DWORD *)SgList = 1;
          *((_QWORD *)SgList + 1) = 0LL;
          Direction = &pFxDriverGlobals;
          *((_QWORD *)SgList + 2) = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, char *))this->m_AdapterInfo->AdapterObject->DmaOperations->MapTransfer)(
                                      this->m_AdapterInfo->AdapterObject,
                                      this->m_CurrentFragmentMdl,
                                      this->m_MapRegisterBase,
                                      (char *)this->m_CurrentFragmentMdl->StartVa
                                    + this->m_CurrentFragmentMdl->ByteOffset
                                    + this->m_CurrentFragmentOffset);
          v6 = 0;
          *((_DWORD *)SgList + 6) = (_DWORD)pFxDriverGlobals;
        }
        if ( v23->FxVerifierOn && v23->FxVerboseOn )
          WPP_IFR_SF_dqd(v23, 5u, 0xFu, 0xEu, WPP_FxDmaTransactionPacket_hpp_Traceguids, (int)pFxDriverGlobals, v24, v6);
        if ( v6 >= 0 )
        {
          v26 = this->m_CurrentFragmentLength;
          if ( (unsigned int)pFxDriverGlobals < v26 )
          {
            v43 = v26 - (unsigned int)pFxDriverGlobals;
            this->m_CurrentFragmentLength = (unsigned int)pFxDriverGlobals;
            this->m_Remaining += v43;
          }
          ProgramDma = this->m_DmaAcquiredFunction.Method.ProgramDma;
          if ( ProgramDma )
          {
            if ( Tag->FxVerifierOn && Tag->FxVerboseOn )
            {
              if ( this->m_ObjectSize )
                v44 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v44 = 0LL;
              WPP_IFR_SF_qqq(
                Tag,
                5u,
                0xFu,
                0x1Du,
                WPP_FxDmaTransactionPacket_cpp_Traceguids,
                ProgramDma,
                this->m_DmaAcquiredContext,
                v44);
            }
            m_DeviceBase = this->m_DmaEnabler->FxDmaTransactionBase::m_DeviceBase;
            m_ObjectSize = m_DeviceBase->m_ObjectSize;
            v30 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_ObjectSize )
              v30 = 0LL;
            if ( this->m_ObjectSize )
              v31 = (WDFDMATRANSACTION__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v31 = 0LL;
            FxDmaTransactionProgramOrReserveDma::InvokeProgramDma(
              &this->m_DmaAcquiredFunction,
              v31,
              v30,
              this->m_DmaAcquiredContext,
              this->m_DmaDirection,
              (_SCATTER_GATHER_LIST *)SgList);
          }
        }
      }
      else
      {
        v6 = 0;
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (v36 = *(FxVerifierLock **)((char *)&v11->Linkage.Blink + (_QWORD)this)) != 0LL )
      {
        FxVerifierLock::Lock(v36, (unsigned __int8 *)&mappedBytes, (unsigned __int8)v18);
        v32 = mappedBytes;
      }
      else
      {
        v32 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
        LOBYTE(mappedBytes) = v32;
      }
      if ( this->m_TransferState.RerunCompletion == 1 )
      {
        CompletionStatus = this->m_TransferState.CompletionStatus;
        this->m_TransferState.CompletionStatus = -1;
        this->m_TransferState.RerunCompletion = 0;
        FxNonPagedObject::Unlock(this, v32, v33);
        if ( Tag->FxVerifierOn && Tag->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            v48 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v48 = 0LL;
          WPP_IFR_SF_qqqD(
            Tag,
            v46,
            v47,
            0x1Eu,
            WPP_FxDmaTransactionPacket_cpp_Traceguids,
            this[1].m_Globals,
            *(const void **)&this[1].m_ObjectFlags,
            v48,
            CompletionStatus);
        }
        this->CallEvtDmaCompleted(this, CompletionStatus);
        FxNonPagedObject::Lock(this, (unsigned __int8 *)&mappedBytes, v49);
        v32 = mappedBytes;
      }
      if ( this->m_TransferState.RerunStaging == 1 )
      {
        v34 = 1;
        this->m_TransferState.RerunStaging = 0;
      }
      else
      {
        this->m_TransferState.CurrentStagingThread = 0LL;
        v34 = 0;
      }
      FxNonPagedObject::Unlock(this, v32, v33);
    }
    while ( v34 );
    v5 = *(const void **)sgListBuffer;
  }
  this->Release(this, &Tag, 0, 0LL);
  if ( Tag->FxVerifierOn && Tag->FxVerboseOn )
    WPP_IFR_SF_qd(Tag, 5u, 0xFu, 0x1Fu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v5, v6);
  return (unsigned int)v6;
}
