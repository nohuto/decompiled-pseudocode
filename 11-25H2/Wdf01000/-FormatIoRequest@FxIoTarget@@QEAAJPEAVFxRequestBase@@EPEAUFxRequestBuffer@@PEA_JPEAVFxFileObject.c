/*
 * XREFs of ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x140033740
 * Callers:
 *     FxIoTargetSendIo @ 0x140032D90 (FxIoTargetSendIo.c)
 *     FxIoTargetFormatIo @ 0x1400346CC (FxIoTargetFormatIo.c)
 *     imp_WdfIoTargetFormatRequestForRead @ 0x14005DB10 (imp_WdfIoTargetFormatRequestForRead.c)
 * Callees:
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x140003FF4 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x14002E170 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x14005F3F8 (--0FxIoContext@@QEAA@XZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BF54 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083000 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

__int64 __fastcall FxIoTarget::FormatIoRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 MajorCode,
        FxRequestBuffer *IoBuffer,
        _LARGE_INTEGER *DeviceOffset)
{
  _IRP *m_Irp; // rdi
  FxRequestContext *m_RequestContext; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  CCHAR m_TargetStackSize; // cl
  _LARGE_INTEGER v13; // r12
  unsigned int v14; // ebp
  FxRequestContext *v15; // rdi
  _FX_DRIVER_GLOBALS *v16; // rcx
  void *v17; // rax
  FxIoContext *v18; // rax
  FxRequestContext *v19; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _WDFMEMORY_OFFSET *Offsets; // rax
  unsigned __int64 BufferLength; // r13
  int m_TargetIoType; // ecx
  _FX_DRIVER_GLOBALS *v24; // rcx
  void *v25; // rax
  FxRequestBufferType DataType; // ecx
  char *Memory; // rdx
  _IRP *Irp; // rax
  _IRP *v29; // rdi
  FxRequestContext_vtbl *v30; // rcx
  _IRP::<unnamed_type_AssociatedIrp> v31; // rdx
  _FX_DRIVER_GLOBALS *v32; // rax
  int v34; // ecx
  FxRequestBufferType v35; // ecx
  __int32 v36; // ecx
  __int64 (*GetBuffer)(void); // rax
  _WDFMEMORY_OFFSET *v38; // rax
  FxRequestContext *v39; // rcx
  _FX_DRIVER_GLOBALS *v40; // rax
  signed int v41; // eax
  char *MappedSystemVa; // rcx
  __int32 v43; // ecx
  __int64 (*v44)(void); // rax
  _IRP::<unnamed_type_AssociatedIrp> v45; // rcx
  _FX_DRIVER_GLOBALS *v46; // rcx
  unsigned __int64 v47; // rdx
  FxRequestBase *v48; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *v50; // rsi
  unsigned int v51; // ebp
  unsigned __int16 v52; // r9
  unsigned __int16 v53; // ax
  const void *v54; // rsi
  bool v55; // zf
  FxRequestBase *v56; // rax
  unsigned __int64 v57; // rcx
  __int32 v58; // ecx
  _MDL *v59; // rcx
  _WDFMEMORY_OFFSET *v60; // rax
  IFxMemory *v61; // rcx
  const void *v62; // rcx
  __int32 v63; // ecx
  _MDL *Mdl; // rcx
  _WDFMEMORY_OFFSET *v65; // rax
  IFxMemory *v66; // rcx
  FxPoolTypeOrPoolFlags v67; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  char v69; // [rsp+80h] [rbp+8h]

  m_Irp = Request->m_Irp.m_Irp;
  m_RequestContext = Request->m_RequestContext;
  v69 = 0;
  if ( m_RequestContext )
  {
    if ( m_Irp )
    {
      ((void (__fastcall *)(FxRequestContext *))m_RequestContext->ReleaseAndRestore)(m_RequestContext);
      m_Globals = Request->m_Globals;
      if ( m_Globals->FxVerifierOn )
      {
        if ( m_Globals->FxVerifierIO )
          FxRequestBase::ClearVerifierFlags(Request, 128);
      }
    }
  }
  m_TargetStackSize = this->m_TargetStackSize;
  if ( !m_TargetStackSize )
  {
    m_ObjectSize = this->m_ObjectSize;
    v50 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v50 = 0LL;
    WPP_IFR_SF_qd(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v50, -1073741436);
    return 3221225860LL;
  }
  if ( m_Irp )
  {
    if ( m_Irp->CurrentLocation > m_TargetStackSize )
      goto LABEL_7;
    if ( Request->m_IrpAllocation != 1 )
    {
      v51 = -1073741616;
      v52 = 13;
LABEL_101:
      v53 = this->m_ObjectSize;
      v54 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v55 = v53 == 0;
      v56 = Request;
      if ( v55 )
        v54 = 0LL;
      v57 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !Request->m_ObjectSize )
        v57 = 0LL;
      if ( v57 )
        v56 = (FxRequestBase *)v57;
      WPP_IFR_SF_qqd(Request->m_Globals, 2u, 0xEu, v52, WPP_FxRequestBase_cpp_Traceguids, v56, v54, v51);
      return v51;
    }
  }
  Irp = IoAllocateIrp(m_TargetStackSize, 0);
  if ( !Irp )
  {
    v51 = -1073741670;
    v52 = 12;
    goto LABEL_101;
  }
  v29 = Request->m_Irp.m_Irp;
  Request->m_Irp.m_Irp = Irp;
  Request->m_Completed = 0;
  if ( v29 && v29 != Irp && Request->m_IrpAllocation == 1 )
  {
    v13.QuadPart = 0LL;
    Request->m_IrpAllocation = 1;
    v14 = 0;
    v46 = Request->m_Globals;
    if ( v46->FxVerboseOn )
    {
      v47 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v48 = Request;
      if ( !Request->m_ObjectSize )
        v47 = 0LL;
      if ( v47 )
        v48 = (FxRequestBase *)v47;
      WPP_IFR_SF_qq(v46, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v29, v48);
    }
    IoFreeIrp(v29);
    goto LABEL_8;
  }
  Request->m_IrpAllocation = 1;
LABEL_7:
  v13.QuadPart = 0LL;
  v14 = 0;
LABEL_8:
  v15 = Request->m_RequestContext;
  if ( v15 && v15->m_RequestType == 1 )
  {
LABEL_15:
    v15->StoreAndReferenceMemory(v15, IoBuffer);
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
    CurrentStackLocation[-1].FileObject = 0LL;
    if ( !Request->m_IrpAllocation )
    {
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Flags = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Flags;
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    }
    if ( !this->m_InStack )
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = this->m_TargetFileObject;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = MajorCode;
    *((_BYTE *)&v15[1].m_CompletionParams.Parameters.Usb + 35) = MajorCode;
    if ( IoBuffer->DataType != FxRequestBufferMdl )
    {
      if ( IoBuffer->DataType == FxRequestBufferMemory )
      {
        Offsets = IoBuffer->u.Memory.Offsets;
        if ( !Offsets )
        {
LABEL_22:
          LODWORD(BufferLength) = IoBuffer->u.Memory.Memory->GetBufferSize(IoBuffer->u.Memory.Memory);
          goto LABEL_23;
        }
        if ( !Offsets->BufferOffset )
        {
          if ( !Offsets->BufferLength )
            goto LABEL_22;
          BufferLength = Offsets->BufferLength;
          goto LABEL_23;
        }
        BufferLength = Offsets->BufferLength;
        if ( BufferLength )
          goto LABEL_23;
        goto LABEL_110;
      }
      if ( IoBuffer->DataType != FxRequestBufferBuffer )
      {
        if ( IoBuffer->DataType != FxRequestBufferReferencedMdl )
        {
          LODWORD(BufferLength) = 0;
          goto LABEL_23;
        }
        v38 = IoBuffer->u.Memory.Offsets;
        if ( !v38 )
          goto LABEL_22;
        if ( !v38->BufferOffset )
        {
          if ( !v38->BufferLength )
            goto LABEL_22;
          BufferLength = v38->BufferLength;
LABEL_23:
          *((_BYTE *)&v15[1].m_CompletionParams.Parameters.Usb + 34) = 1;
          *(_QWORD *)&v15[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
          v15[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
          v15[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
          *((_DWORD *)&v15[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
          m_TargetIoType = this->m_TargetIoType;
          if ( m_TargetIoType == 2 )
          {
            Request->m_Irp.m_Irp->UserBuffer = 0LL;
            if ( (_DWORD)BufferLength )
            {
              if ( v15[1].m_CompletionParams.Parameters.Write.Offset >= (unsigned int)BufferLength )
              {
                v45.MasterIrp = (_IRP *)v15[1].__vftable;
                if ( v45.MasterIrp )
                {
                  Request->m_Irp.m_Irp->AssociatedIrp = v45;
LABEL_30:
                  DataType = IoBuffer->DataType;
                  if ( IoBuffer->DataType == FxRequestBufferBuffer )
                  {
                    Memory = (char *)IoBuffer->u.Memory.Memory;
                    goto LABEL_38;
                  }
                  if ( DataType == FxRequestBufferUnspecified )
                  {
                    Memory = 0LL;
LABEL_38:
                    v14 = 0;
                    if ( MajorCode == 4 )
                    {
                      if ( Memory )
                        memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, Memory, (unsigned int)BufferLength);
                    }
                    else
                    {
                      Request->m_Irp.m_Irp->UserBuffer = Memory;
                    }
                    if ( v69 )
                    {
                      v30 = v15[1].__vftable;
                      v31.MasterIrp = (_IRP *)Request->m_Irp.m_Irp->AssociatedIrp;
                      v15[1].m_CompletionParams.Parameters.Write.Offset = (unsigned int)BufferLength;
                      *((_BYTE *)&v15[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
                      v15[1].__vftable = (FxRequestContext_vtbl *)v31.MasterIrp;
                      if ( v30 )
                        FxPoolFree(v30);
                    }
                    else
                    {
                      *((_BYTE *)&v15[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
                    }
                    goto LABEL_43;
                  }
                  v36 = DataType - 1;
                  if ( !v36 )
                  {
                    GetBuffer = (__int64 (*)(void))IoBuffer->u.Memory.Memory->GetBuffer;
                    if ( IoBuffer->u.Memory.Offsets )
                      Memory = (char *)(GetBuffer() + IoBuffer->u.Memory.Offsets->BufferOffset);
                    else
                      Memory = (char *)GetBuffer();
                    goto LABEL_38;
                  }
                  v63 = v36 - 1;
                  if ( v63 )
                  {
                    if ( v63 != 2 )
                    {
                      v14 = -1073741811;
                      goto LABEL_113;
                    }
                    Mdl = IoBuffer->u.RefMdl.Mdl;
                    if ( (Mdl->MdlFlags & 5) != 0 )
                      Memory = (char *)Mdl->MappedSystemVa;
                    else
                      Memory = (char *)MmMapLockedPagesSpecifyCache(
                                         Mdl,
                                         0,
                                         MmCached,
                                         0LL,
                                         0,
                                         ExDefaultMdlProtection | 0x40000010);
                    if ( Memory )
                    {
                      v65 = IoBuffer->u.Memory.Offsets;
                      if ( v65 )
                        Memory += v65->BufferOffset;
                      goto LABEL_38;
                    }
                  }
                  else
                  {
                    v66 = IoBuffer->u.Memory.Memory;
                    if ( (BYTE2(v66[1].__vftable) & 5) != 0 )
                      Memory = (char *)v66[3].__vftable;
                    else
                      Memory = (char *)MmMapLockedPagesSpecifyCache(
                                         (PMDL)v66,
                                         0,
                                         MmCached,
                                         0LL,
                                         0,
                                         ExDefaultMdlProtection | 0x40000010);
                    if ( Memory )
                      goto LABEL_38;
                  }
                  v14 = -1073741670;
LABEL_113:
                  WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0xCu, WPP_FxIoTargetKm_cpp_Traceguids, v14);
                  if ( v69 )
                  {
                    FxPoolFree(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp);
                    Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
                  }
                  goto LABEL_63;
                }
              }
              v24 = this->m_Globals;
              *(_QWORD *)&v67.UsePoolType = 0LL;
              v67.u.PoolFlags = 64LL;
              if ( v24->FxPoolTrackingOn )
                v25 = retaddr;
              else
                v25 = 0LL;
              Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                        v24,
                                                                        &v24->FxPoolFrameworks,
                                                                        &v67,
                                                                        (unsigned int)BufferLength,
                                                                        v24->Tag,
                                                                        v25);
              if ( Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
              {
                v69 = 1;
                goto LABEL_30;
              }
              WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xBu, WPP_FxIoTargetKm_cpp_Traceguids);
              v14 = -1073741670;
LABEL_63:
              v39 = Request->m_RequestContext;
              if ( v39 )
              {
                if ( Request->m_Irp.m_Irp )
                {
                  v39->ReleaseAndRestore(v39, Request);
                  v40 = Request->m_Globals;
                  if ( v40->FxVerifierOn )
                  {
                    if ( v40->FxVerifierIO )
                      FxRequestBase::ClearVerifierFlags(Request, 128);
                  }
                }
              }
              return v14;
            }
            Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
            goto LABEL_43;
          }
          if ( this->m_TargetIoType )
          {
            v34 = m_TargetIoType - 1;
            if ( !v34 )
            {
              v35 = IoBuffer->DataType;
              if ( IoBuffer->DataType == FxRequestBufferBuffer )
              {
                MappedSystemVa = (char *)IoBuffer->u.Memory.Memory;
              }
              else
              {
                if ( v35 == FxRequestBufferUnspecified )
                {
                  v14 = 0;
                  Request->m_Irp.m_Irp->UserBuffer = 0LL;
                  goto LABEL_43;
                }
                v43 = v35 - 1;
                if ( !v43 )
                {
                  v44 = (__int64 (*)(void))IoBuffer->u.Memory.Memory->GetBuffer;
                  v14 = 0;
                  if ( IoBuffer->u.Memory.Offsets )
                    Request->m_Irp.m_Irp->UserBuffer = (void *)(v44() + IoBuffer->u.Memory.Offsets->BufferOffset);
                  else
                    Request->m_Irp.m_Irp->UserBuffer = (void *)v44();
                  goto LABEL_43;
                }
                v58 = v43 - 1;
                if ( v58 )
                {
                  if ( v58 != 2 )
                  {
                    v14 = -1073741811;
LABEL_133:
                    WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0xEu, WPP_FxIoTargetKm_cpp_Traceguids, v14);
                    goto LABEL_63;
                  }
                  v59 = IoBuffer->u.RefMdl.Mdl;
                  if ( (v59->MdlFlags & 5) != 0 )
                    MappedSystemVa = (char *)v59->MappedSystemVa;
                  else
                    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                               v59,
                                               0,
                                               MmCached,
                                               0LL,
                                               0,
                                               ExDefaultMdlProtection | 0x40000010);
                  if ( MappedSystemVa )
                  {
                    v60 = IoBuffer->u.Memory.Offsets;
                    if ( v60 )
                      MappedSystemVa += v60->BufferOffset;
                    goto LABEL_73;
                  }
LABEL_132:
                  v14 = -1073741670;
                  goto LABEL_133;
                }
                v61 = IoBuffer->u.Memory.Memory;
                if ( (BYTE2(v61[1].__vftable) & 5) != 0 )
                  MappedSystemVa = (char *)v61[3].__vftable;
                else
                  MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                             (PMDL)v61,
                                             0,
                                             MmCached,
                                             0LL,
                                             0,
                                             ExDefaultMdlProtection | 0x40000010);
                if ( !MappedSystemVa )
                  goto LABEL_132;
              }
LABEL_73:
              v14 = 0;
              Request->m_Irp.m_Irp->UserBuffer = MappedSystemVa;
              goto LABEL_43;
            }
            if ( v34 == 2 )
            {
              v41 = FxRequestBuffer::GetOrAllocateMdl(
                      IoBuffer,
                      this->m_Globals,
                      &Request->m_Irp.m_Irp->MdlAddress,
                      (_MDL **)&v15[1].m_CompletionParams.IoStatus.Information,
                      (unsigned __int8 *)&v15[1].m_CompletionParams.Parameters.Usb + 33,
                      (_LOCK_OPERATION)(MajorCode == 3),
                      v15[1].m_CompletionParams.IoStatus.Information != 0,
                      &v15[1].m_CompletionParams.Parameters.Others.Argument4.Value);
              v14 = v41;
              if ( v41 < 0 )
              {
                WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0xDu, WPP_FxIoTargetKm_cpp_Traceguids, v41);
                goto LABEL_63;
              }
LABEL_43:
              Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = BufferLength;
              if ( DeviceOffset )
                v13 = *DeviceOffset;
              Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset = v13;
              v32 = Request->m_Globals;
              if ( v32->FxVerifierOn )
              {
                if ( v32->FxVerifierIO )
                  FxRequestBase::SetVerifierFlags(Request, 128);
              }
              return v14;
            }
          }
          v14 = -1073741436;
          v62 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v62 = 0LL;
          WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxIoTargetKm_cpp_Traceguids, v62, -1073741436);
          goto LABEL_63;
        }
        BufferLength = v38->BufferLength;
        if ( BufferLength )
          goto LABEL_23;
LABEL_110:
        LODWORD(BufferLength) = IoBuffer->u.Memory.Memory->GetBufferSize(IoBuffer->u.Memory.Memory)
                              - IoBuffer->u.Memory.Offsets->BufferOffset;
        goto LABEL_23;
      }
    }
    LODWORD(BufferLength) = IoBuffer->u.Mdl.Length;
    goto LABEL_23;
  }
  v16 = this->m_Globals;
  *(_QWORD *)&v67.UsePoolType = 0LL;
  v67.u.PoolFlags = 64LL;
  if ( v16->FxPoolTrackingOn )
    v17 = retaddr;
  else
    v17 = 0LL;
  v18 = (FxIoContext *)FxPoolAllocator(v16, &v16->FxPoolFrameworks, &v67, 0xB0uLL, v16->Tag, v17);
  if ( v18 )
  {
    FxIoContext::FxIoContext(v18);
    v15 = v19;
    if ( v19 )
    {
      FxRequestBase::SetContext(Request, v19);
      goto LABEL_15;
    }
  }
  WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xAu, WPP_FxIoTargetKm_cpp_Traceguids);
  return 3221225626LL;
}
