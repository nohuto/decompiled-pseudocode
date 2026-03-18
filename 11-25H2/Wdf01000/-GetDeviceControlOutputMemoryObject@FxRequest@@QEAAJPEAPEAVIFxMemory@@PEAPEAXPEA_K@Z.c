/*
 * XREFs of ?GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x140048DB0
 * Callers:
 *     imp_WdfRequestRetrieveOutputMemory @ 0x1400489A0 (imp_WdfRequestRetrieveOutputMemory.c)
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x140048B50 (imp_WdfRequestRetrieveOutputBuffer.c)
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_Dqqd @ 0x140049AEC (WPP_IFR_SF_Dqqd.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400E47E0 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall FxRequest::GetDeviceControlOutputMemoryObject(
        FxRequest *this,
        FxRequestOutputBuffer **MemoryObject,
        _MDL **Buffer,
        unsigned __int64 *Length)
{
  KIRQL v4; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  char v7; // r14
  int v11; // edi
  _IRP *m_Irp; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int64 v14; // rsi
  unsigned int LowPart; // r8d
  _MDL *m_Mdl; // rcx
  int result; // eax
  _MDL *MdlAddress; // r10
  PVOID MappedSystemVa; // rax
  FxDeviceBase *m_DeviceBase; // rdx
  const void *level; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *globals; // rdx
  unsigned __int16 v24; // r9
  const void *v25; // rcx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v27; // rcx
  const void *v28; // rcx
  int v29; // [rsp+40h] [rbp-38h]
  _MDL *irql; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  LOBYTE(irql) = 0;
  m_Globals = this->m_Globals;
  v7 = 0;
  v11 = 0;
  if ( m_Globals->FxVerifierIO )
  {
    if ( m_Globals->FxVerifierOn )
    {
      result = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      v11 = result;
      if ( result < 0 )
        return result;
    }
  }
  if ( (this->m_RequestBaseStaticFlags & 2) == 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Flink = this[-1].m_ForwardProgressList.Flink) != 0LL )
    {
      FxVerifierLock::Lock((FxVerifierLock *)Flink, (unsigned __int8 *)&irql, (unsigned __int8)Buffer);
      v4 = (unsigned __int8)irql;
    }
    else
    {
      v4 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  v14 = CurrentStackLocation->Parameters.Read.Length;
  if ( !CurrentStackLocation->Parameters.Read.Length )
  {
    v24 = 34;
    goto LABEL_38;
  }
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( (LowPart & 3) != 1 && (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) != 2 )
  {
    if ( (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) == 3
      && m_Irp->RequestorMode
      && CurrentStackLocation->MajorFunction != 15 )
    {
      v11 = -1073741808;
      m_DeviceBase = this->m_DeviceBase;
      level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      if ( !this->m_ObjectSize )
        level = 0LL;
      globals = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        globals = 0LL;
      WPP_IFR_SF_Dqqd(
        this->m_Globals,
        (unsigned __int8)globals,
        LowPart,
        0x23u,
        WPP_FxRequest_cpp_Traceguids,
        LowPart,
        globals,
        level,
        v29);
      WPP_IFR_SF_(this->m_Globals, 2u, 0x10u, 0x24u, WPP_FxRequest_cpp_Traceguids);
    }
    goto $Done_16;
  }
  v7 = 1;
  if ( (this->m_RequestBaseFlags & 2) == 0 )
  {
    MdlAddress = m_Irp->MdlAddress;
    irql = MdlAddress;
    if ( MdlAddress )
    {
      v11 = 0;
      if ( (MdlAddress->MdlFlags & 5) != 0 )
      {
        MappedSystemVa = MdlAddress->MappedSystemVa;
      }
      else
      {
        MappedSystemVa = MmMapLockedPagesSpecifyCache(
                           MdlAddress,
                           0,
                           MmCached,
                           0LL,
                           0,
                           ExDefaultMdlProtection | 0x40000010);
        MdlAddress = irql;
      }
      if ( MappedSystemVa )
      {
        this->m_OutputBuffer.m_Buffer = MdlAddress;
        this->m_RequestBaseFlags |= 2u;
      }
      else
      {
        v11 = -1073741670;
        v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v28 = 0LL;
        WPP_IFR_SF_qqd(this->m_Globals, 2u, 0x10u, 0x26u, WPP_FxRequest_cpp_Traceguids, v28, MdlAddress, 0xC000009A);
      }
      goto $Done_16;
    }
    v24 = 37;
LABEL_38:
    v11 = -1073741789;
    v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v25 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, v24, WPP_FxRequest_cpp_Traceguids, v25, -1073741789);
  }
$Done_16:
  if ( (this->m_RequestBaseStaticFlags & 2) == 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v27 = this[-1].m_ForwardProgressList.Flink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v27, v4, LowPart);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v4);
  }
  if ( v11 >= 0 )
  {
    m_Mdl = this->m_OutputBuffer.m_Mdl;
    *MemoryObject = &this->m_OutputBuffer;
    if ( v7 )
    {
      if ( (m_Mdl->MdlFlags & 5) != 0 )
        m_Mdl = (_MDL *)m_Mdl->MappedSystemVa;
      else
        m_Mdl = (_MDL *)MmMapLockedPagesSpecifyCache(m_Mdl, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010);
    }
    *Buffer = m_Mdl;
    *Length = v14;
  }
  return v11;
}
