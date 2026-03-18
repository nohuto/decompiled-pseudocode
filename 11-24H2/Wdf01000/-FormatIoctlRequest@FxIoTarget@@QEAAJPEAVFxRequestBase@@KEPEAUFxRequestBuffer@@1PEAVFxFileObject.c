/*
 * XREFs of ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x14000DD80
 * Callers:
 *     FxIoTargetSendIoctl @ 0x14000D490 (FxIoTargetSendIoctl.c)
 *     FxIoTargetFormatIoctl @ 0x14005BA24 (FxIoTargetFormatIoctl.c)
 *     ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x14009F134 (-FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x14009FF84 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x14001E1F0 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x14001E250 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x140057270 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x14005C1D8 (--0FxIoContext@@QEAA@XZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BBF4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140082FF0 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400ACD40 (memmove.c)
 */

__int64 __fastcall FxIoTarget::FormatIoctlRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        FxRequestBuffer *InputBuffer,
        FxRequestBuffer *OutputBuffer)
{
  _IRP *m_Irp; // rdi
  _LOCK_OPERATION Operation; // r15d
  FxRequestContext *m_RequestContext; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  CCHAR m_TargetStackSize; // cl
  unsigned int v14; // ebp
  FxRequestContext *v15; // rdi
  _FX_DRIVER_GLOBALS *v16; // rcx
  void *v17; // rax
  FxIoContext *v18; // rax
  FxRequestContext *v19; // rax
  FxRequestContext *v20; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  char *MappedSystemVa; // rdx
  __int64 v23; // r8
  IFxMemory *Memory; // rax
  _WDFMEMORY_OFFSET *Offsets; // rax
  _WDFMEMORY_OFFSET *v26; // rax
  unsigned __int64 v27; // r12
  char v28; // r11
  unsigned int v29; // eax
  unsigned __int64 v30; // r9
  _FX_DRIVER_GLOBALS *v31; // rcx
  void *v32; // rax
  FxRequestBufferType DataType; // ecx
  __int32 v34; // ecx
  __int64 (*GetBuffer)(void); // rax
  char *v36; // rax
  FxRequestBufferType v37; // ecx
  char *v38; // rdx
  _IRP *Irp; // rax
  _IRP *v40; // rdi
  __int64 v41; // r8
  FxRequestBufferType v42; // ecx
  IFxMemory *v43; // rdx
  FxRequestContext_vtbl *v44; // rcx
  _IRP::<unnamed_type_AssociatedIrp> v45; // rdx
  _FX_DRIVER_GLOBALS *v46; // rax
  __int32 v48; // ecx
  IFxMemory *v49; // rcx
  void *(__fastcall *v50)(IFxMemory *); // rax
  unsigned __int64 BufferLength; // rcx
  _WDFMEMORY_OFFSET *v52; // rax
  _IRP::<unnamed_type_AssociatedIrp> v53; // rcx
  signed int Buffer; // eax
  unsigned __int16 v55; // r9
  __int32 v56; // ecx
  __int64 (*v57)(void); // rax
  __int64 v58; // rax
  _FX_DRIVER_GLOBALS *v59; // rcx
  unsigned __int64 v60; // rdx
  FxRequestBase *v61; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *v63; // r13
  unsigned int v64; // ebp
  unsigned __int16 v65; // r9
  unsigned __int16 v66; // ax
  const void *v67; // r13
  bool v68; // zf
  FxRequestBase *v69; // rax
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  __int32 v72; // ecx
  _MDL *v73; // rcx
  IFxMemory *v74; // rax
  _WDFMEMORY_OFFSET *v75; // rcx
  IFxMemory *v76; // rcx
  IFxMemory *v77; // rax
  __int32 v78; // ecx
  _MDL *Mdl; // rcx
  _WDFMEMORY_OFFSET *v80; // rcx
  IFxMemory *v81; // rcx
  unsigned __int16 v82; // r9
  __int32 v83; // ecx
  _MDL *v84; // rcx
  _WDFMEMORY_OFFSET *v85; // rcx
  IFxMemory *v86; // rcx
  void *pBuffer[2]; // [rsp+40h] [rbp-58h] BYREF
  FxPoolTypeOrPoolFlags v88; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  char v90; // [rsp+A0h] [rbp+8h]
  unsigned int v91; // [rsp+A8h] [rbp+10h]
  unsigned int Request_0a[34]; // [rsp+D0h] [rbp+38h]

  m_Irp = Request->m_Irp.m_Irp;
  Operation = IoReadAccess;
  pBuffer[0] = 0LL;
  m_RequestContext = Request->m_RequestContext;
  v90 = 0;
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
    v63 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v63 = 0LL;
    WPP_IFR_SF_qd(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v63, -1073741436);
    return 3221225860LL;
  }
  if ( m_Irp )
  {
    if ( m_Irp->CurrentLocation > m_TargetStackSize )
      goto LABEL_7;
    if ( Request->m_IrpAllocation != 1 )
    {
      v64 = -1073741616;
      v65 = 13;
LABEL_133:
      v66 = this->m_ObjectSize;
      v67 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v68 = v66 == 0;
      v69 = Request;
      if ( v68 )
        v67 = 0LL;
      v70 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !Request->m_ObjectSize )
        v70 = 0LL;
      if ( v70 )
        v69 = (FxRequestBase *)v70;
      WPP_IFR_SF_qqd(Request->m_Globals, 2u, 0xEu, v65, WPP_FxRequestBase_cpp_Traceguids, v69, v67, v64);
      return v64;
    }
  }
  Irp = IoAllocateIrp(m_TargetStackSize, 0);
  if ( !Irp )
  {
    v64 = -1073741670;
    v65 = 12;
    goto LABEL_133;
  }
  v40 = Request->m_Irp.m_Irp;
  Request->m_Irp.m_Irp = Irp;
  Request->m_Completed = 0;
  if ( v40 && v40 != Irp && Request->m_IrpAllocation == 1 )
  {
    Request->m_IrpAllocation = 1;
    v14 = 0;
    v59 = Request->m_Globals;
    if ( v59->FxVerboseOn )
    {
      v60 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v61 = Request;
      if ( !Request->m_ObjectSize )
        v60 = 0LL;
      if ( v60 )
        v61 = (FxRequestBase *)v60;
      WPP_IFR_SF_qq(v59, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v40, v61);
    }
    IoFreeIrp(v40);
    goto LABEL_8;
  }
  Request->m_IrpAllocation = 1;
LABEL_7:
  v14 = 0;
LABEL_8:
  v15 = Request->m_RequestContext;
  if ( v15 && v15->m_RequestType == 1 )
    goto LABEL_18;
  v16 = this->m_Globals;
  *(_QWORD *)&v88.UsePoolType = 0LL;
  v88.u.PoolFlags = 64LL;
  if ( v16->FxPoolTrackingOn )
    v17 = retaddr;
  else
    v17 = 0LL;
  v18 = (FxIoContext *)FxPoolAllocator(v16, &v16->FxPoolFrameworks, &v88, 0xB0uLL, v16->Tag, v17);
  if ( v18 )
  {
    FxIoContext::FxIoContext(v18);
    v15 = v19;
    if ( v19 )
    {
      v20 = Request->m_RequestContext;
      if ( v20 != v19 )
      {
        if ( v20 )
          ((void (__fastcall *)(FxRequestContext *, __int64))v20->~FxRequestContext)(v20, 1LL);
        Request->m_RequestContext = v15;
      }
LABEL_18:
      *((_BYTE *)&v15[1].m_CompletionParams.Parameters.Usb + 34) = 1;
      *(_QWORD *)&v15[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
      v15[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
      v15[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
      *((_DWORD *)&v15[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
      CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
      CurrentStackLocation[-1].FileObject = 0LL;
      v15->StoreAndReferenceMemory(v15, InputBuffer);
      if ( OutputBuffer->DataType == FxRequestBufferMemory )
      {
        v41 = 130LL;
      }
      else
      {
        if ( OutputBuffer->DataType != FxRequestBufferReferencedMdl )
        {
          Memory = 0LL;
          goto LABEL_21;
        }
        v41 = 135LL;
      }
      OutputBuffer->u.Memory.Memory->AddRef(
        OutputBuffer->u.Memory.Memory,
        v15,
        v41,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
      Memory = OutputBuffer->u.Memory.Memory;
LABEL_21:
      v15[1].m_CompletionParams.Parameters.Ioctl.Output.Length = (unsigned __int64)Memory;
      LOBYTE(MappedSystemVa) = (Internal != 0) + 14;
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = (unsigned __int8)MappedSystemVa;
      *((_BYTE *)&v15[1].m_CompletionParams.Parameters.Usb + 35) = (_BYTE)MappedSystemVa;
      if ( !Request->m_IrpAllocation )
      {
        Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Flags = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Flags;
        Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
      }
      if ( !this->m_InStack )
        Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = this->m_TargetFileObject;
      if ( InputBuffer->DataType != FxRequestBufferMdl )
      {
        if ( InputBuffer->DataType == FxRequestBufferMemory )
        {
          Offsets = InputBuffer->u.Memory.Offsets;
          if ( !Offsets )
          {
LABEL_28:
            Request_0a[0] = InputBuffer->u.Memory.Memory->GetBufferSize(InputBuffer->u.Memory.Memory);
            goto LABEL_29;
          }
          if ( Offsets->BufferOffset )
          {
            BufferLength = Offsets->BufferLength;
            if ( !BufferLength )
            {
LABEL_106:
              Request_0a[0] = InputBuffer->u.Memory.Memory->GetBufferSize(InputBuffer->u.Memory.Memory)
                            - InputBuffer->u.Memory.Offsets->BufferOffset;
LABEL_29:
              if ( OutputBuffer->DataType != FxRequestBufferMdl )
              {
                if ( OutputBuffer->DataType == FxRequestBufferMemory )
                {
                  v26 = OutputBuffer->u.Memory.Offsets;
                  if ( !v26 )
                  {
LABEL_32:
                    LODWORD(v27) = OutputBuffer->u.Memory.Memory->GetBufferSize(OutputBuffer->u.Memory.Memory);
                    goto LABEL_33;
                  }
                  if ( !v26->BufferOffset )
                  {
                    if ( !v26->BufferLength )
                      goto LABEL_32;
                    v27 = v26->BufferLength;
                    goto LABEL_33;
                  }
                  v27 = v26->BufferLength;
                  if ( v27 )
                    goto LABEL_33;
                  goto LABEL_146;
                }
                if ( OutputBuffer->DataType != FxRequestBufferBuffer )
                {
                  if ( OutputBuffer->DataType != FxRequestBufferReferencedMdl )
                  {
                    LODWORD(v27) = 0;
                    goto LABEL_33;
                  }
                  v52 = OutputBuffer->u.Memory.Offsets;
                  if ( !v52 )
                    goto LABEL_32;
                  if ( !v52->BufferOffset )
                  {
                    if ( !v52->BufferLength )
                      goto LABEL_32;
                    v27 = v52->BufferLength;
LABEL_33:
                    v28 = Ioctl;
                    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Ioctl;
                    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Create.Options = Request_0a[0];
                    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = v27;
                    if ( (Ioctl & 3) == 0 )
                    {
                      v29 = Request_0a[0];
                      if ( Request_0a[0] )
                      {
                        if ( Request_0a[0] > (unsigned int)v27 )
                          goto LABEL_37;
                        goto LABEL_36;
                      }
                      if ( (_DWORD)v27 )
                      {
LABEL_36:
                        v29 = v27;
LABEL_37:
                        v30 = v29;
                        v91 = v29;
                        if ( v15[1].m_CompletionParams.Parameters.Write.Offset >= v29 )
                        {
                          v53.MasterIrp = (_IRP *)v15[1].__vftable;
                          if ( v53.MasterIrp )
                          {
                            Request->m_Irp.m_Irp->AssociatedIrp = v53;
LABEL_42:
                            DataType = InputBuffer->DataType;
                            if ( InputBuffer->DataType == FxRequestBufferBuffer )
                            {
                              MappedSystemVa = (char *)InputBuffer->u.Memory.Memory;
LABEL_48:
                              v36 = MappedSystemVa;
                              goto LABEL_49;
                            }
                            if ( DataType == FxRequestBufferUnspecified )
                              goto LABEL_51;
                            v34 = DataType - 1;
                            if ( !v34 )
                            {
                              GetBuffer = (__int64 (*)(void))InputBuffer->u.Memory.Memory->GetBuffer;
                              if ( InputBuffer->u.Memory.Offsets )
                                MappedSystemVa = (char *)(GetBuffer() + InputBuffer->u.Memory.Offsets->BufferOffset);
                              else
                                MappedSystemVa = (char *)GetBuffer();
                              goto LABEL_48;
                            }
                            v78 = v34 - 1;
                            if ( v78 )
                            {
                              if ( v78 != 2 )
                              {
                                v14 = -1073741811;
LABEL_184:
                                v82 = 18;
                                goto LABEL_150;
                              }
                              Mdl = InputBuffer->u.RefMdl.Mdl;
                              if ( (Mdl->MdlFlags & 5) != 0 )
                                MappedSystemVa = (char *)Mdl->MappedSystemVa;
                              else
                                MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                                           Mdl,
                                                           0,
                                                           MmCached,
                                                           0LL,
                                                           0,
                                                           ExDefaultMdlProtection | 0x40000010);
                              if ( MappedSystemVa )
                              {
                                v80 = InputBuffer->u.Memory.Offsets;
                                v36 = MappedSystemVa;
                                if ( v80 )
                                {
                                  v36 = &MappedSystemVa[v80->BufferOffset];
                                  MappedSystemVa = v36;
                                }
LABEL_49:
                                v30 = (unsigned __int64)v36;
                                if ( !MappedSystemVa )
                                  goto LABEL_51;
                                goto LABEL_50;
                              }
                            }
                            else
                            {
                              v81 = InputBuffer->u.Memory.Memory;
                              if ( (BYTE2(v81[1].__vftable) & 5) != 0 )
                                v30 = (unsigned __int64)v81[3].__vftable;
                              else
                                v30 = (unsigned __int64)MmMapLockedPagesSpecifyCache(
                                                          (PMDL)v81,
                                                          0,
                                                          MmCached,
                                                          0LL,
                                                          0,
                                                          ExDefaultMdlProtection | 0x40000010);
                              if ( v30 )
                              {
LABEL_50:
                                memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, (const void *)v30, Request_0a[0]);
LABEL_51:
                                v37 = OutputBuffer->DataType;
                                if ( OutputBuffer->DataType == FxRequestBufferBuffer )
                                {
                                  v38 = (char *)OutputBuffer->u.Memory.Memory;
                                  goto LABEL_67;
                                }
                                if ( v37 == FxRequestBufferUnspecified )
                                {
                                  v38 = 0LL;
                                  goto LABEL_67;
                                }
                                v48 = v37 - 1;
                                if ( !v48 )
                                {
                                  v49 = OutputBuffer->u.Memory.Memory;
                                  v50 = v49->GetBuffer;
                                  if ( OutputBuffer->u.Memory.Offsets )
                                    v38 = (char *)(((__int64 (__fastcall *)(IFxMemory *, char *, __int64, unsigned __int64))v50)(
                                                     v49,
                                                     MappedSystemVa,
                                                     v23,
                                                     v30)
                                                 + OutputBuffer->u.Memory.Offsets->BufferOffset);
                                  else
                                    v38 = (char *)((__int64 (__fastcall *)(IFxMemory *, char *, __int64, unsigned __int64))v50)(
                                                    v49,
                                                    MappedSystemVa,
                                                    v23,
                                                    v30);
                                  goto LABEL_67;
                                }
                                v83 = v48 - 1;
                                if ( v83 )
                                {
                                  if ( v83 != 2 )
                                  {
                                    v14 = -1073741811;
LABEL_199:
                                    v82 = 19;
LABEL_150:
                                    WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, v82, WPP_FxIoTargetKm_cpp_Traceguids, v14);
                                    if ( v90 )
                                    {
                                      FxPoolFree(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp);
                                      Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
                                    }
                                    goto LABEL_117;
                                  }
                                  v84 = OutputBuffer->u.RefMdl.Mdl;
                                  if ( (v84->MdlFlags & 5) != 0 )
                                    v38 = (char *)v84->MappedSystemVa;
                                  else
                                    v38 = (char *)MmMapLockedPagesSpecifyCache(
                                                    v84,
                                                    0,
                                                    MmCached,
                                                    0LL,
                                                    0,
                                                    ExDefaultMdlProtection | 0x40000010);
                                  if ( v38 )
                                  {
                                    v85 = OutputBuffer->u.Memory.Offsets;
                                    if ( v85 )
                                      v38 += v85->BufferOffset;
                                    goto LABEL_67;
                                  }
                                }
                                else
                                {
                                  v86 = OutputBuffer->u.Memory.Memory;
                                  if ( (BYTE2(v86[1].__vftable) & 5) != 0 )
                                    v38 = (char *)v86[3].__vftable;
                                  else
                                    v38 = (char *)MmMapLockedPagesSpecifyCache(
                                                    (PMDL)v86,
                                                    0,
                                                    MmCached,
                                                    0LL,
                                                    0,
                                                    ExDefaultMdlProtection | 0x40000010);
                                  if ( v38 )
                                  {
LABEL_67:
                                    v14 = 0;
                                    Request->m_Irp.m_Irp->UserBuffer = v38;
                                    if ( v90 )
                                    {
                                      v44 = v15[1].__vftable;
                                      v45.MasterIrp = (_IRP *)Request->m_Irp.m_Irp->AssociatedIrp;
                                      v15[1].m_CompletionParams.Parameters.Write.Offset = v91;
                                      *((_BYTE *)&v15[1].m_CompletionParams.Parameters.Usb + 32) = (_DWORD)v27 != 0;
                                      v15[1].__vftable = (FxRequestContext_vtbl *)v45.MasterIrp;
                                      if ( v44 )
                                        FxPoolFree(v44);
                                    }
                                    else
                                    {
                                      *((_BYTE *)&v15[1].m_CompletionParams.Parameters.Usb + 32) = (_DWORD)v27 != 0;
                                    }
                                    goto LABEL_70;
                                  }
                                }
                                v14 = -1073741670;
                                goto LABEL_199;
                              }
                            }
                            v14 = -1073741670;
                            goto LABEL_184;
                          }
                        }
                        v31 = this->m_Globals;
                        *(_QWORD *)&v88.UsePoolType = 0LL;
                        v88.u.PoolFlags = 64LL;
                        if ( v31->FxPoolTrackingOn )
                          v32 = retaddr;
                        else
                          v32 = 0LL;
                        Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                                  v31,
                                                                                  &v31->FxPoolFrameworks,
                                                                                  &v88,
                                                                                  v30,
                                                                                  v31->Tag,
                                                                                  v32);
                        if ( Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
                        {
                          v90 = 1;
                          goto LABEL_42;
                        }
                        WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x11u, WPP_FxIoTargetKm_cpp_Traceguids);
                        v14 = -1073741670;
LABEL_117:
                        FxRequestBase::ContextReleaseAndRestore(Request);
                        return v14;
                      }
                      Request->m_Irp.m_Irp->UserBuffer = 0LL;
                      Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
LABEL_70:
                      v46 = Request->m_Globals;
                      if ( v46->FxVerifierOn )
                      {
                        if ( v46->FxVerifierIO )
                          FxRequestBase::SetVerifierFlags(Request, 128);
                      }
                      return v14;
                    }
                    if ( (Ioctl & 3) != 1 && (Ioctl & 3) != 2 )
                    {
                      if ( (Ioctl & 3) != 3 )
                        goto LABEL_70;
                      Buffer = FxRequestBuffer::GetBuffer(OutputBuffer, pBuffer);
                      v14 = Buffer;
                      if ( Buffer < 0 )
                      {
                        v55 = 22;
                      }
                      else
                      {
                        Request->m_Irp.m_Irp->UserBuffer = pBuffer[0];
                        Buffer = FxRequestBuffer::GetBuffer(InputBuffer, pBuffer);
                        v14 = Buffer;
                        if ( Buffer >= 0 )
                        {
                          Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetFile.DeleteHandle = pBuffer[0];
                          goto LABEL_70;
                        }
                        v55 = 23;
                      }
LABEL_116:
                      WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, v55, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
                      goto LABEL_117;
                    }
                    v42 = InputBuffer->DataType;
                    if ( InputBuffer->DataType == FxRequestBufferBuffer )
                    {
                      v43 = InputBuffer->u.Memory.Memory;
                      goto LABEL_92;
                    }
                    if ( v42 == FxRequestBufferUnspecified )
                    {
                      v43 = 0LL;
LABEL_92:
                      Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)v43;
                      LOBYTE(Operation) = (v28 & 3) != 1;
                      Buffer = FxRequestBuffer::GetOrAllocateMdl(
                                 OutputBuffer,
                                 this->m_Globals,
                                 &Request->m_Irp.m_Irp->MdlAddress,
                                 (_MDL **)&v15[1].m_CompletionParams.IoStatus.Information,
                                 (unsigned __int8 *)&v15[1].m_CompletionParams.Parameters.Usb + 33,
                                 Operation,
                                 v15[1].m_CompletionParams.IoStatus.Information != 0,
                                 &v15[1].m_CompletionParams.Parameters.Others.Argument4.Value);
                      v14 = Buffer;
                      if ( Buffer >= 0 )
                        goto LABEL_70;
                      v55 = 21;
                      goto LABEL_116;
                    }
                    v56 = v42 - 1;
                    if ( !v56 )
                    {
                      v57 = (__int64 (*)(void))InputBuffer->u.Memory.Memory->GetBuffer;
                      if ( InputBuffer->u.Memory.Offsets )
                      {
                        v71 = v57();
                        v28 = Ioctl;
                        v43 = (IFxMemory *)(v71 + InputBuffer->u.Memory.Offsets->BufferOffset);
                      }
                      else
                      {
                        v58 = v57();
                        v28 = Ioctl;
                        v43 = (IFxMemory *)v58;
                      }
                      goto LABEL_92;
                    }
                    v72 = v56 - 1;
                    if ( v72 )
                    {
                      if ( v72 != 2 )
                      {
                        v14 = -1073741811;
LABEL_168:
                        WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x14u, WPP_FxIoTargetKm_cpp_Traceguids, v14);
                        goto LABEL_117;
                      }
                      v73 = InputBuffer->u.RefMdl.Mdl;
                      if ( (v73->MdlFlags & 5) != 0 )
                      {
                        v43 = (IFxMemory *)v73->MappedSystemVa;
                      }
                      else
                      {
                        v74 = (IFxMemory *)MmMapLockedPagesSpecifyCache(
                                             v73,
                                             0,
                                             MmCached,
                                             0LL,
                                             0,
                                             ExDefaultMdlProtection | 0x40000010);
                        v28 = Ioctl;
                        v43 = v74;
                      }
                      if ( v43 )
                      {
                        v75 = InputBuffer->u.Memory.Offsets;
                        if ( v75 )
                          v43 = (IFxMemory *)((char *)v43 + v75->BufferOffset);
                        goto LABEL_92;
                      }
                    }
                    else
                    {
                      v76 = InputBuffer->u.Memory.Memory;
                      if ( (BYTE2(v76[1].__vftable) & 5) != 0 )
                      {
                        v43 = (IFxMemory *)v76[3].__vftable;
                      }
                      else
                      {
                        v77 = (IFxMemory *)MmMapLockedPagesSpecifyCache(
                                             (PMDL)v76,
                                             0,
                                             MmCached,
                                             0LL,
                                             0,
                                             ExDefaultMdlProtection | 0x40000010);
                        v28 = Ioctl;
                        v43 = v77;
                      }
                      if ( v43 )
                        goto LABEL_92;
                    }
                    v14 = -1073741670;
                    goto LABEL_168;
                  }
                  v27 = v52->BufferLength;
                  if ( v27 )
                    goto LABEL_33;
LABEL_146:
                  LODWORD(v27) = OutputBuffer->u.Memory.Memory->GetBufferSize(OutputBuffer->u.Memory.Memory)
                               - OutputBuffer->u.Memory.Offsets->BufferOffset;
                  goto LABEL_33;
                }
              }
              LODWORD(v27) = OutputBuffer->u.Mdl.Length;
              goto LABEL_33;
            }
LABEL_81:
            Request_0a[0] = BufferLength;
            goto LABEL_29;
          }
          goto LABEL_79;
        }
        if ( InputBuffer->DataType != FxRequestBufferBuffer )
        {
          if ( InputBuffer->DataType != FxRequestBufferReferencedMdl )
          {
            Request_0a[0] = 0;
            goto LABEL_29;
          }
          Offsets = InputBuffer->u.Memory.Offsets;
          if ( !Offsets )
            goto LABEL_28;
          if ( Offsets->BufferOffset )
          {
            BufferLength = Offsets->BufferLength;
            if ( !BufferLength )
              goto LABEL_106;
            goto LABEL_81;
          }
LABEL_79:
          if ( !Offsets->BufferLength )
            goto LABEL_28;
          BufferLength = Offsets->BufferLength;
          goto LABEL_81;
        }
      }
      Request_0a[0] = InputBuffer->u.Mdl.Length;
      goto LABEL_29;
    }
  }
  WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetKm_cpp_Traceguids);
  return 3221225626LL;
}
