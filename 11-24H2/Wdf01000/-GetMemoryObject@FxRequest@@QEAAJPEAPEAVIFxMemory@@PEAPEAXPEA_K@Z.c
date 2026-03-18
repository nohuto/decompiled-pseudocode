/*
 * XREFs of ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x140051C90
 * Callers:
 *     imp_WdfRequestRetrieveOutputMemory @ 0x140051100 (imp_WdfRequestRetrieveOutputMemory.c)
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1400512B0 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestRetrieveInputMemory @ 0x1400518B0 (imp_WdfRequestRetrieveInputMemory.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x140051A50 (imp_WdfRequestRetrieveInputBuffer.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_Dqqd @ 0x14005224C (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_Dqq @ 0x140082ABC (WPP_IFR_SF_Dqq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400E47E0 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetMemoryObject(
        FxRequest *this,
        IFxMemory **MemoryObject,
        void **Buffer,
        unsigned __int64 *Length)
{
  KIRQL v5; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  unsigned int Options; // esi
  char v9; // bp
  int IsNotCompleted; // edi
  unsigned int MajorFunction; // r12d
  _IRP *v13; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  FxDeviceBase *v15; // rdx
  const void *level; // rcx
  unsigned __int16 v17; // ax
  const void *globals; // rdx
  _IRP *m_Irp; // rcx
  unsigned int v20; // r12d
  _MDL *m_Mdl; // rcx
  _FX_DRIVER_GLOBALS **v23; // r10
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *v26; // rcx
  const void *v27; // rdx
  _MDL *MdlAddress; // rsi
  PVOID MappedSystemVa; // rax
  FxDeviceBase *v30; // r8
  const void *v31; // rdx
  unsigned __int16 v32; // ax
  const void *v33; // r8
  const void *v34; // rcx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v36; // rcx
  const void *v37; // rcx
  const void *v38; // rcx
  const void *v39; // rcx
  const _GUID *_a2; // [rsp+20h] [rbp-78h]
  int v41; // [rsp+40h] [rbp-58h]
  _FX_DRIVER_GLOBALS **v42; // [rsp+50h] [rbp-48h]
  unsigned __int8 irql; // [rsp+A0h] [rbp+8h] BYREF
  IFxMemory **v44; // [rsp+A8h] [rbp+10h]
  void **v45; // [rsp+B0h] [rbp+18h]

  v45 = Buffer;
  v44 = MemoryObject;
  LOBYTE(Buffer) = 0;
  v5 = 0;
  m_Globals = this->m_Globals;
  p_m_Globals = &this->m_Globals;
  irql = 0;
  Options = 0;
  v9 = 0;
  IsNotCompleted = 0;
  MajorFunction = this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( m_Globals->FxVerifierIO )
  {
    if ( m_Globals->FxVerifierOn )
    {
      IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      if ( IsNotCompleted < 0 )
        goto $Done_19;
      p_m_Globals = &this->m_Globals;
      LOBYTE(Buffer) = 0;
    }
    v23 = p_m_Globals;
    v42 = p_m_Globals;
    if ( this->m_Irp.m_Irp->RequestorMode == 1 )
    {
      if ( (_BYTE)MajorFunction != 4 )
      {
        if ( (_BYTE)MajorFunction != 3 )
          goto LABEL_2;
        p_m_Globals = &this->m_Globals;
      }
      m_DeviceBase = this->m_DeviceBase;
      if ( m_DeviceBase[1].m_Refcnt == 1 )
      {
        IsNotCompleted = -1073741808;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v26 = 0LL;
        v27 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v27 = 0LL;
        WPP_IFR_SF_qqd(*v23, 2u, 0x10u, 0x19u, WPP_FxRequest_cpp_Traceguids, v27, v26, 0xC0000010);
        WPP_IFR_SF_(*v42, 2u, 0x10u, 0x1Au, WPP_FxRequest_cpp_Traceguids);
        FxVerifierDbgBreakPoint(*v42);
      }
    }
  }
LABEL_2:
  if ( (this->m_RequestBaseStaticFlags & 1) != 0 )
    goto LABEL_5;
  if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
    goto LABEL_4;
  Flink = this[-1].m_ForwardProgressList.Flink;
  if ( !Flink )
  {
    p_m_Globals = &this->m_Globals;
LABEL_4:
    v5 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    goto LABEL_5;
  }
  FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, (unsigned __int8)Buffer);
  v5 = irql;
  p_m_Globals = &this->m_Globals;
LABEL_5:
  switch ( MajorFunction )
  {
    case 0xFu:
      goto LABEL_6;
    case 3u:
    case 4u:
      m_Irp = this->m_Irp.m_Irp;
      Options = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
      if ( this->m_DeviceBase[1].m_Refcnt == 3 )
        v9 = 1;
      v20 = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
      if ( Options )
      {
        if ( v9 && (this->m_RequestBaseFlags & 1) == 0 )
        {
          MdlAddress = m_Irp->MdlAddress;
          if ( MdlAddress )
          {
            if ( (MdlAddress->MdlFlags & 5) != 0 )
              MappedSystemVa = MdlAddress->MappedSystemVa;
            else
              MappedSystemVa = MmMapLockedPagesSpecifyCache(
                                 MdlAddress,
                                 0,
                                 MmCached,
                                 0LL,
                                 0,
                                 ExDefaultMdlProtection | 0x40000010);
            if ( MappedSystemVa )
            {
              Options = v20;
              this->m_SystemBuffer.m_Buffer = this->m_Irp.m_Irp->MdlAddress;
              this->m_RequestBaseFlags |= 1u;
            }
            else
            {
              IsNotCompleted = -1073741670;
              v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !this->m_ObjectSize )
                v39 = 0LL;
              WPP_IFR_SF_qqd(
                this->m_Globals,
                2u,
                0x10u,
                0x21u,
                WPP_FxRequest_cpp_Traceguids,
                v39,
                MdlAddress,
                0xC000009A);
              Options = v20;
            }
          }
          else
          {
            IsNotCompleted = -1073741789;
            v38 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !this->m_ObjectSize )
              v38 = 0LL;
            WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, 0x20u, WPP_FxRequest_cpp_Traceguids, v38, -1073741789);
            Options = v20;
          }
        }
      }
      else
      {
        IsNotCompleted = -1073741789;
        v37 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v37 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, 0x1Fu, WPP_FxRequest_cpp_Traceguids, v37, -1073741789);
      }
      break;
    case 0xEu:
LABEL_6:
      v13 = this->m_Irp.m_Irp;
      CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
      Options = CurrentStackLocation->Parameters.Create.Options;
      if ( Options )
      {
        LODWORD(Buffer) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( (CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart & 3) == 3
          && v13->RequestorMode
          && (_BYTE)MajorFunction != 15 )
        {
          IsNotCompleted = -1073741808;
          v15 = this->m_DeviceBase;
          level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          v17 = v15->m_ObjectSize;
          if ( !this->m_ObjectSize )
            level = 0LL;
          globals = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v17 )
            globals = 0LL;
          WPP_IFR_SF_Dqqd(
            *p_m_Globals,
            (unsigned __int8)globals,
            (unsigned int)Buffer,
            0x1Cu,
            WPP_FxRequest_cpp_Traceguids,
            (unsigned int)Buffer,
            globals,
            level,
            v41);
          WPP_IFR_SF_D(*p_m_Globals, 2u, 0x10u, 0x1Du, WPP_FxRequest_cpp_Traceguids, 0xC0000010);
        }
      }
      else
      {
        IsNotCompleted = -1073741789;
        v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v34 = 0LL;
        WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x10u, 0x1Bu, WPP_FxRequest_cpp_Traceguids, v34, -1073741789);
      }
      break;
    default:
      v30 = this->m_DeviceBase;
      v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v32 = v30->m_ObjectSize;
      if ( !this->m_ObjectSize )
        v31 = 0LL;
      v33 = (const void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v32 )
        v33 = 0LL;
      WPP_IFR_SF_Dqq(
        this->m_Globals,
        (unsigned __int8)v31,
        (unsigned int)v33,
        MajorFunction,
        _a2,
        MajorFunction,
        v33,
        v31);
      FxVerifierDbgBreakPoint(*p_m_Globals);
      IsNotCompleted = -1073741808;
      break;
  }
$Done_19:
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v36 = this[-1].m_ForwardProgressList.Flink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v36, v5, (unsigned __int8)Buffer);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v5);
  }
  if ( IsNotCompleted >= 0 )
  {
    *v44 = &this->m_SystemBuffer;
    m_Mdl = this->m_SystemBuffer.m_Mdl;
    if ( v9 )
    {
      if ( (m_Mdl->MdlFlags & 5) != 0 )
        m_Mdl = (_MDL *)m_Mdl->MappedSystemVa;
      else
        m_Mdl = (_MDL *)MmMapLockedPagesSpecifyCache(m_Mdl, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010);
    }
    *v45 = m_Mdl;
    *Length = Options;
  }
  return (unsigned int)IsNotCompleted;
}
