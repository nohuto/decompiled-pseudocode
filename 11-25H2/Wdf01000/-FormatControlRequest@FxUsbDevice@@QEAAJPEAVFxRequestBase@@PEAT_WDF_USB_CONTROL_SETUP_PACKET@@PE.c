/*
 * XREFs of ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1400027F0
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x140002630 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 * Callees:
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x14000305C (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x140003280 (--0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x140003FF4 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     USBD_UrbAllocate @ 0x14002347C (USBD_UrbAllocate.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x14002E170 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_i @ 0x140036DCC (WPP_IFR_SF_i.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BF54 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083000 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

int __fastcall FxUsbDevice::FormatControlRequest(
        FxUsbDevice *this,
        FxRequestBase *Request,
        IFxMemory_vtbl **SetupPacket,
        FxRequestBuffer *RequestBuffer)
{
  unsigned int Length; // ebp
  FxRequestBufferType DataType; // edx
  _WDFMEMORY_OFFSET *Offsets; // rax
  unsigned __int64 BufferLength; // rax
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  CCHAR m_TargetStackSize; // cl
  FxRequestContext *v15; // rbx
  _FX_URB_TYPE FxUrbTypeForRequest; // al
  _FX_DRIVER_GLOBALS *v17; // rcx
  _FX_URB_TYPE v18; // di
  void *v19; // rax
  FxUsbDeviceControlContext *v20; // rax
  __int64 v21; // rax
  _FX_DRIVER_GLOBALS *v22; // rdx
  int result; // eax
  IFxMemory *m_RequestMemory; // rax
  IFxMemory *Memory; // rax
  _MDL **p_pMdl; // r12
  IFxMemory *v27; // rdi
  _MDL **v28; // r13
  IFxMemory *v29; // rcx
  IFxMemory_vtbl *v30; // rcx
  _FILE_OBJECT *v31; // rdx
  USBD_HANDLE__ *v32; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v34; // rcx
  _FX_DRIVER_GLOBALS *v35; // rax
  _IRP *Irp; // rax
  _IRP *v37; // rbx
  __int64 v38; // r8
  _MDL *v39; // rax
  IFxMemory *v40; // rcx
  unsigned int v41; // eax
  _WDFMEMORY_OFFSET *v42; // rdx
  _MDL *v43; // rcx
  _WDFMEMORY_OFFSET *v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 BufferOffset; // r8
  USBD_HANDLE__ *m_USBDHandle; // rdi
  signed int v49; // r12d
  KIRQL v50; // al
  _FX_DRIVER_GLOBALS *v51; // rcx
  unsigned __int64 v52; // rdx
  FxRequestBase *v53; // rax
  unsigned int v54; // ebx
  const void *v55; // rcx
  unsigned __int16 v56; // r9
  const void *v57; // rdx
  FxRequestBase *v58; // rax
  unsigned __int64 v59; // rcx
  const void *v60; // rdx
  FxPoolTypeOrPoolFlags v61; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  _MDL *pMdl; // [rsp+A8h] [rbp+20h] BYREF

  Length = 0;
  DataType = RequestBuffer->DataType;
  if ( RequestBuffer->DataType == FxRequestBufferMdl )
    goto LABEL_44;
  if ( --DataType == FxRequestBufferUnspecified )
    goto LABEL_3;
  DataType -= 2;
  if ( DataType == FxRequestBufferUnspecified )
  {
LABEL_44:
    LODWORD(BufferLength) = RequestBuffer->u.Mdl.Length;
    goto LABEL_5;
  }
  if ( DataType != FxRequestBufferMemory )
  {
    LODWORD(BufferLength) = 0;
    goto LABEL_5;
  }
LABEL_3:
  Offsets = RequestBuffer->u.Memory.Offsets;
  if ( !Offsets )
  {
LABEL_4:
    LODWORD(BufferLength) = RequestBuffer->u.Memory.Memory->GetBufferSize(RequestBuffer->u.Memory.Memory);
    goto LABEL_5;
  }
  if ( Offsets->BufferOffset )
  {
    BufferLength = Offsets->BufferLength;
    if ( !BufferLength )
      LODWORD(BufferLength) = RequestBuffer->u.Memory.Memory->GetBufferSize(RequestBuffer->u.Memory.Memory)
                            - RequestBuffer->u.Memory.Offsets->BufferOffset;
  }
  else
  {
    if ( !Offsets->BufferLength )
      goto LABEL_4;
    BufferLength = Offsets->BufferLength;
  }
LABEL_5:
  if ( (unsigned int)BufferLength > 0xFFFFuLL )
  {
    WPP_IFR_SF_i(this->m_Globals, DataType, 0xEu, 0x16u, WPP_FxusbDeviceKm_cpp_Traceguids, (unsigned int)BufferLength);
    return -1073741811;
  }
  m_RequestContext = Request->m_RequestContext;
  m_Irp = Request->m_Irp.m_Irp;
  if ( m_RequestContext )
  {
    if ( m_Irp )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, Request);
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
    v54 = -1073741436;
    v55 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v55 = 0LL;
    WPP_IFR_SF_qd(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v55, -1073741436);
    goto LABEL_98;
  }
  if ( m_Irp )
  {
    if ( m_Irp->CurrentLocation > m_TargetStackSize )
      goto LABEL_12;
    if ( Request->m_IrpAllocation != 1 )
    {
      v54 = -1073741616;
      v56 = 13;
LABEL_91:
      v57 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v58 = Request;
      if ( !this->m_ObjectSize )
        v57 = 0LL;
      v59 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !Request->m_ObjectSize )
        v59 = 0LL;
      if ( v59 )
        v58 = (FxRequestBase *)v59;
      WPP_IFR_SF_qqd(Request->m_Globals, 2u, 0xEu, v56, WPP_FxRequestBase_cpp_Traceguids, v58, v57, v54);
LABEL_98:
      v60 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v60 = 0LL;
      WPP_IFR_SF_qqd(this->m_Globals, 2u, 0xEu, 0x17u, WPP_FxusbDeviceKm_cpp_Traceguids, v60, Request, v54);
      return v54;
    }
  }
  Irp = IoAllocateIrp(m_TargetStackSize, 0);
  if ( !Irp )
  {
    v54 = -1073741670;
    v56 = 12;
    goto LABEL_91;
  }
  v37 = Request->m_Irp.m_Irp;
  Request->m_Irp.m_Irp = Irp;
  Request->m_Completed = 0;
  if ( v37 && v37 != Irp && Request->m_IrpAllocation == 1 )
  {
    Request->m_IrpAllocation = 1;
    v51 = Request->m_Globals;
    if ( v51->FxVerboseOn )
    {
      v52 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v53 = Request;
      if ( !Request->m_ObjectSize )
        v52 = 0LL;
      if ( v52 )
        v53 = (FxRequestBase *)v52;
      WPP_IFR_SF_qq(v51, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v37, v53);
    }
    IoFreeIrp(v37);
  }
  else
  {
    Request->m_IrpAllocation = 1;
  }
LABEL_12:
  v15 = Request->m_RequestContext;
  if ( !v15 || v15->m_RequestType != 19 )
  {
    FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this, Request);
    v17 = this->m_Globals;
    *(_QWORD *)&v61.UsePoolType = 0LL;
    v18 = FxUrbTypeForRequest;
    v61.u.PoolFlags = 64LL;
    if ( v17->FxPoolTrackingOn )
      v19 = retaddr;
    else
      v19 = 0LL;
    v20 = (FxUsbDeviceControlContext *)FxPoolAllocator(v17, &v17->FxPoolFrameworks, &v61, 0x128uLL, v17->Tag, v19);
    if ( !v20 )
      return -1073741670;
    FxUsbDeviceControlContext::FxUsbDeviceControlContext(v20, v18);
    v15 = (FxRequestContext *)v21;
    if ( !v21 )
      return -1073741670;
    if ( v18 == FxUrbTypeUsbdAllocated )
    {
      m_USBDHandle = this->m_USBDHandle;
      v49 = USBD_UrbAllocate(m_USBDHandle, (_URB **)(v21 + 272));
      if ( v49 < 0 )
      {
        WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x18u, WPP_FxusbDeviceKm_cpp_Traceguids, v49);
        ((void (__fastcall *)(FxRequestContext *, __int64))v15->~FxRequestContext)(v15, 1LL);
        return v49;
      }
      v15[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
      v50 = KeAcquireSpinLockRaiseToDpc(&Request->m_SpinLock.m_Lock);
      Request->m_ObjectFlags |= 0x800u;
      KeReleaseSpinLock(&Request->m_SpinLock.m_Lock, v50);
    }
    FxRequestBase::SetContext(Request, v15);
  }
  if ( ((RequestBuffer->DataType - 2) & 0xFFFFFFFD) != 0
    || (v22 = this->m_Globals,
        pMdl = 0LL,
        result = FxRequestBuffer::GetOrAllocateMdl(
                   RequestBuffer,
                   v22,
                   &pMdl,
                   (_MDL **)&v15[2].m_RequestType,
                   (unsigned __int8 *)&v15[3],
                   IoModifyAccess,
                   0,
                   0LL),
        result >= 0) )
  {
    v15->m_CompletionParams.Type = WdfRequestTypeUsb;
    v15->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&v15[1];
    m_RequestMemory = v15[2].m_RequestMemory;
    HIDWORD(v15[1].__vftable) = 3;
    *(_OWORD *)&m_RequestMemory->__vftable = 0LL;
    *(_OWORD *)&m_RequestMemory[2].__vftable = 0LL;
    *(_OWORD *)&m_RequestMemory[4].__vftable = 0LL;
    *(_OWORD *)&m_RequestMemory[6].__vftable = 0LL;
    *(_OWORD *)&m_RequestMemory[8].__vftable = 0LL;
    *(_OWORD *)&m_RequestMemory[10].__vftable = 0LL;
    *(_OWORD *)&m_RequestMemory[12].__vftable = 0LL;
    *(_OWORD *)&m_RequestMemory[14].__vftable = 0LL;
    m_RequestMemory[16].__vftable = 0LL;
    WORD1(v15[2].m_RequestMemory->__vftable) = 8;
    LOWORD(v15[2].m_RequestMemory->__vftable) = 136;
    if ( RequestBuffer->DataType == FxRequestBufferMemory )
    {
      v38 = 130LL;
    }
    else
    {
      if ( RequestBuffer->DataType != FxRequestBufferReferencedMdl )
      {
        Memory = 0LL;
        goto LABEL_25;
      }
      v38 = 135LL;
    }
    RequestBuffer->u.Memory.Memory->AddRef(
      RequestBuffer->u.Memory.Memory,
      v15,
      v38,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    Memory = RequestBuffer->u.Memory.Memory;
LABEL_25:
    v15->m_RequestMemory = Memory;
    p_pMdl = &pMdl;
    v27 = v15[2].m_RequestMemory;
    v28 = &pMdl;
    if ( v27 != (IFxMemory *)-40LL )
      p_pMdl = (_MDL **)&v27[5];
    if ( v27 != (IFxMemory *)-48LL )
      v28 = (_MDL **)&v27[6];
    if ( RequestBuffer->DataType == FxRequestBufferBuffer )
    {
      *v28 = 0LL;
      *p_pMdl = RequestBuffer->u.Mdl.Mdl;
    }
    else
    {
      if ( RequestBuffer->DataType == FxRequestBufferMemory )
      {
        v39 = (_MDL *)RequestBuffer->u.Memory.Memory->GetBuffer(RequestBuffer->u.Memory.Memory);
        v40 = RequestBuffer->u.Memory.Memory;
        pMdl = v39;
        v41 = v40->GetBufferSize(v40);
        v42 = RequestBuffer->u.Memory.Offsets;
        if ( v42 )
        {
          v46 = v42->BufferLength;
          BufferOffset = v42->BufferOffset;
          if ( !v46 )
            LODWORD(v46) = v41;
          v41 = v46;
          v43 = pMdl;
          if ( BufferOffset )
          {
            *v28 = 0LL;
            *p_pMdl = (_MDL *)((char *)v43 + BufferOffset);
            Length = v41;
            goto LABEL_32;
          }
        }
        else
        {
          v43 = pMdl;
        }
        *v28 = 0LL;
        Length = v41;
        *p_pMdl = v43;
LABEL_32:
        HIDWORD(v27[4].__vftable) = Length;
        v15[2].m_RequestMemory[16].__vftable = *SetupPacket;
        HIWORD(v15[2].m_RequestMemory[16].__vftable) = WORD2(v15[2].m_RequestMemory[4].__vftable);
        LODWORD(v15[2].m_RequestMemory[4].__vftable) = 2;
        if ( *(char *)SetupPacket < 0 )
          LODWORD(v15[2].m_RequestMemory[4].__vftable) |= 1u;
        v29 = v15[2].m_RequestMemory;
        if ( this->m_OnUSBD )
          v29[3].__vftable = (IFxMemory_vtbl *)this->m_ControlPipe;
        else
          LODWORD(v29[4].__vftable) |= 8u;
        v30 = *(IFxMemory_vtbl **)&v15[2].m_RequestType;
        if ( v30 )
          v15[2].m_RequestMemory[6].__vftable = v30;
        v31 = (_FILE_OBJECT *)v15[2].m_RequestMemory;
        v32 = this->m_USBDHandle;
        CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
        *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
        *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
        CurrentStackLocation[-1].FileObject = 0LL;
        Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
        Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
        v34 = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
        if ( v31 != (_FILE_OBJECT *)(&v15[1].m_CompletionParams.Parameters.Usb + 1)
          && (unsigned int)(*((_DWORD *)v32 + 54) - 1538) <= 0xFFFFF9FC )
        {
          v34[-1].FileObject = v31;
        }
        v34[-1].Parameters.WMI.ProviderId = (unsigned __int64)v31;
        v35 = Request->m_Globals;
        if ( v35->FxVerifierOn )
        {
          if ( v35->FxVerifierIO )
            FxRequestBase::SetVerifierFlags(Request, 128);
        }
        return 0;
      }
      if ( RequestBuffer->DataType != FxRequestBufferMdl )
      {
        if ( RequestBuffer->DataType == FxRequestBufferReferencedMdl )
        {
          *v28 = RequestBuffer->u.RefMdl.Mdl;
          *p_pMdl = 0LL;
          v44 = RequestBuffer->u.Memory.Offsets;
          if ( !v44 || (v45 = v44->BufferLength) == 0 )
            LODWORD(v45) = RequestBuffer->u.Memory.Memory->GetBufferSize(RequestBuffer->u.Memory.Memory);
          Length = v45;
        }
        else
        {
          *v28 = 0LL;
          *p_pMdl = 0LL;
        }
        goto LABEL_32;
      }
      *v28 = RequestBuffer->u.Mdl.Mdl;
      *p_pMdl = 0LL;
    }
    Length = RequestBuffer->u.Mdl.Length;
    goto LABEL_32;
  }
  return result;
}
