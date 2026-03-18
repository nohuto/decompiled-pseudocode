/*
 * XREFs of ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140020544
 * Callers:
 *     imp_WdfRequestProbeAndLockUserBufferForRead @ 0x1400203E0 (imp_WdfRequestProbeAndLockUserBufferForRead.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14002080C (-Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1400208E4 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 *     FxProbeAndLockForRead @ 0x14002096C (FxProbeAndLockForRead.c)
 *     ?FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x140056F18 (-FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1400980C4 (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?Vf_VerifyProbeAndLock@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DCF58 (-Vf_VerifyProbeAndLock@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall FxRequest::ProbeAndLockForRead(
        FxRequest *this,
        void *Buffer,
        unsigned int Length,
        FxRequestMemory **MemoryObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int64 _a2; // r13
  int result; // eax
  _MDL *Debug; // rax
  char v10; // dl
  _MDL *v11; // rbx
  int _a3; // eax
  _WDF_OBJECT_ATTRIBUTES *v13; // rdx
  int v14; // edi
  PVOID MappedSystemVa; // r12
  int v16; // eax
  FxRequestMemory *v17; // rdi
  int v18; // ebp
  FxRequestMemory **v19; // rax
  int v20; // ebx
  const void *v21; // r14
  unsigned __int8 Irp; // [rsp+20h] [rbp-58h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxRequestMemory *pMemory; // [rsp+80h] [rbp+8h] BYREF
  FxRequestMemory **v25; // [rsp+98h] [rbp+20h]

  v25 = MemoryObject;
  m_Globals = this->m_Globals;
  _a2 = Length;
  pMemory = 0LL;
  if ( !Length )
  {
    v20 = -1073741592;
    WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x1Cu, WPP_FxRequestKm_cpp_Traceguids, 0xC00000E8);
    return v20;
  }
  if ( !this->m_Irp.m_Irp )
  {
    v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v20 = -1073741808;
    if ( !this->m_ObjectSize )
      v21 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x1Du, WPP_FxRequestKm_cpp_Traceguids, v21, -1073741808);
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
  v11 = Debug;
  if ( !Debug )
  {
    v18 = -1073741670;
    WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x1Eu, WPP_FxRequestKm_cpp_Traceguids, 0xC000009A);
    return v18;
  }
  _a3 = FxProbeAndLockForRead(Debug, v10);
  v14 = _a3;
  if ( _a3 < 0 )
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x1Fu, WPP_FxRequestKm_cpp_Traceguids, Buffer, _a2, _a3);
    FxMdlFree(m_Globals, v11);
    return v14;
  }
  if ( (v11->MdlFlags & 5) != 0 )
    MappedSystemVa = v11->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010);
  if ( !MappedSystemVa )
  {
    v18 = -1073741670;
LABEL_29:
    MmUnlockPages(v11);
    FxMdlFree(m_Globals, v11);
    return v18;
  }
  v16 = FxRequestMemory::Create(m_Globals, v13, &pMemory);
  v17 = pMemory;
  v18 = v16;
  if ( v16 < 0 || (v18 = FxObject::Commit(pMemory, 0LL, 0LL, this, 1u), v18 < 0) )
  {
    if ( v17 )
      FxObject::DeleteFromFailedCreate(v17);
    goto LABEL_29;
  }
  v17->m_Mdl = v11;
  v17->m_pBuffer = MappedSystemVa;
  v17->m_BufferSize = _a2;
  v17->m_Request = this;
  FxRequest::AddIrpReference(this);
  v19 = v25;
  v17->m_Flags = 1;
  *v19 = v17;
  return v18;
}
