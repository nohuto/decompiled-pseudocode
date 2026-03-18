/*
 * XREFs of ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140020120
 * Callers:
 *     imp_WdfRequestProbeAndLockUserBufferForWrite @ 0x14001FFC0 (imp_WdfRequestProbeAndLockUserBufferForWrite.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14002080C (-Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1400208E4 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 *     FxProbeAndLockForWrite @ 0x140020940 (FxProbeAndLockForWrite.c)
 *     ?FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x140056F18 (-FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1400980C4 (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?Vf_VerifyProbeAndLock@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DCF58 (-Vf_VerifyProbeAndLock@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall FxRequest::ProbeAndLockForWrite(
        FxRequest *this,
        void *Buffer,
        unsigned int Length,
        FxRequestMemory **MemoryObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int64 _a2; // r12
  int result; // eax
  _MDL *Debug; // rax
  char v11; // dl
  _MDL *v12; // rbx
  int _a3; // eax
  _WDF_OBJECT_ATTRIBUTES *v14; // rdx
  int v15; // edi
  PVOID MappedSystemVa; // r15
  int v17; // eax
  FxRequestMemory *v18; // rdi
  int v19; // ebp
  int v20; // ebx
  const void *v21; // r14
  unsigned __int8 Irp; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxRequestMemory *pMemory; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  _a2 = Length;
  pMemory = 0LL;
  if ( !Length )
  {
    v20 = -1073741592;
    WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x20u, WPP_FxRequestKm_cpp_Traceguids, 0xC00000E8);
    return v20;
  }
  if ( !this->m_Irp.m_Irp )
  {
    v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v20 = -1073741808;
    if ( !this->m_ObjectSize )
      v21 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x21u, WPP_FxRequestKm_cpp_Traceguids, v21, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return v20;
  }
  if ( !m_Globals->FxVerifierOn )
    goto LABEL_6;
  result = FxRequest::Vf_VerifyProbeAndLock(this, m_Globals);
  if ( result < 0 )
    return result;
  if ( m_Globals->FxVerifierOn )
    Debug = FxMdlAllocateDebug(m_Globals, this, Buffer, _a2, Irp, 1u, retaddr);
  else
LABEL_6:
    Debug = IoAllocateMdl(Buffer, _a2, 0, 1u, 0LL);
  v12 = Debug;
  if ( !Debug )
  {
    v19 = -1073741670;
    WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x22u, WPP_FxRequestKm_cpp_Traceguids, 0xC000009A);
    return v19;
  }
  _a3 = FxProbeAndLockForWrite(Debug, v11);
  v15 = _a3;
  if ( _a3 < 0 )
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x23u, WPP_FxRequestKm_cpp_Traceguids, Buffer, _a2, _a3);
    FxMdlFree(m_Globals, v12);
    return v15;
  }
  if ( (v12->MdlFlags & 5) != 0 )
    MappedSystemVa = v12->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010);
  if ( !MappedSystemVa )
  {
    v19 = -1073741670;
LABEL_29:
    MmUnlockPages(v12);
    FxMdlFree(m_Globals, v12);
    return v19;
  }
  v17 = FxRequestMemory::Create(m_Globals, v14, &pMemory);
  v18 = pMemory;
  v19 = v17;
  if ( v17 < 0 || (v19 = FxObject::Commit(pMemory, 0LL, 0LL, this, 1u), v19 < 0) )
  {
    if ( v18 )
      FxObject::DeleteFromFailedCreate(v18);
    goto LABEL_29;
  }
  v18->m_Mdl = v12;
  v18->m_pBuffer = MappedSystemVa;
  v18->m_BufferSize = _a2;
  v18->m_Request = this;
  FxRequest::AddIrpReference(this);
  *MemoryObject = v18;
  return v19;
}
