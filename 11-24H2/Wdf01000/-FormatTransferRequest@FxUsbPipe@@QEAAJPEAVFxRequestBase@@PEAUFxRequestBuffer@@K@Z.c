/*
 * XREFs of ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x14001DA9C
 * Callers:
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x14001D11C (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     imp_WdfUsbTargetPipeFormatRequestForRead @ 0x14001D300 (imp_WdfUsbTargetPipeFormatRequestForRead.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x14001D6F0 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x14001EE38 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x14001E120 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x14001E1F0 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x14001E250 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ??0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x14001E95C (--0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x14001EC64 (-IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z.c)
 *     USBD_UrbAllocate @ 0x14001FB30 (USBD_UrbAllocate.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BBF4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

int __fastcall FxUsbPipe::FormatTransferRequest(
        FxUsbPipe *this,
        FxRequestBase *Request,
        FxRequestBuffer *Buffer,
        unsigned int TransferFlags)
{
  unsigned __int64 PipeType; // rcx
  int v9; // eax
  unsigned __int64 BufferLength; // r8
  signed __int8 EndpointAddress; // al
  unsigned int v12; // eax
  _IRP *m_Irp; // rbx
  CCHAR m_TargetStackSize; // cl
  FxRequestContext *m_RequestContext; // r14
  FxUsbDevice *m_UsbDevice; // rcx
  _FX_URB_TYPE v17; // bl
  _FX_DRIVER_GLOBALS *v18; // rcx
  void *v19; // rax
  FX_POOL **v20; // rax
  __int64 v21; // rax
  FxRequestContext *v22; // rcx
  _FX_DRIVER_GLOBALS *v23; // rdx
  int result; // eax
  void *PipeHandle; // rcx
  _FILE_OBJECT *Length; // rdx
  USBD_HANDLE__ *v27; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v29; // rcx
  _FX_DRIVER_GLOBALS *v30; // rax
  const void *v31; // rcx
  _IRP *Irp; // rax
  _IRP *v33; // rbx
  unsigned __int16 v34; // r9
  USBD_HANDLE__ *m_USBDHandle; // r15
  signed int v36; // ebx
  KIRQL v37; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 v39; // rdx
  FxRequestBase *v40; // rax
  const void *v41; // rcx
  unsigned __int16 v42; // r9
  const void *v43; // rdx
  FxRequestBase *v44; // rax
  unsigned __int64 v45; // rcx
  _LOCK_OPERATION Operation; // [rsp+28h] [rbp-50h]
  __m128i v47; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  _MDL *pMdl; // [rsp+80h] [rbp+8h] BYREF

  PipeType = this->m_PipeInformation.PipeType;
  if ( PipeType >= 4 || (v9 = `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[PipeType], v9 != 3) && v9 != 4 )
  {
    v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v31 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xCu, WPP_FxUsbPipeKm_cpp_Traceguids, v31, -1073741808);
    return -1073741808;
  }
  BufferLength = FxRequestBuffer::GetBufferLength(Buffer);
  EndpointAddress = this->m_PipeInformation.EndpointAddress;
  if ( (TransferFlags & 1) == 0 )
  {
    if ( EndpointAddress >= 0 )
      goto LABEL_9;
    v34 = 15;
LABEL_45:
    WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, v34, WPP_FxUsbPipeKm_cpp_Traceguids, this);
    return -1073741808;
  }
  if ( EndpointAddress >= 0 )
  {
    v34 = 14;
    goto LABEL_45;
  }
  if ( this->m_CheckPacketSize )
  {
    v12 = (this->m_PipeInformation.PipeFlags & 0x10000) != 0
        ? this->m_PipeInformation.MaximumTransferSize
        : this->m_PipeInformation.MaximumPacketSize;
    if ( BufferLength % v12 )
      return -1073741306;
  }
LABEL_9:
  m_Irp = Request->m_Irp.m_Irp;
  FxRequestBase::ContextReleaseAndRestore(Request);
  m_TargetStackSize = this->m_TargetStackSize;
  if ( !m_TargetStackSize )
  {
    v36 = -1073741436;
    v41 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v41 = 0LL;
    WPP_IFR_SF_qd(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v41, -1073741436);
    goto LABEL_73;
  }
  if ( m_Irp )
  {
    if ( m_Irp->CurrentLocation > m_TargetStackSize )
      goto LABEL_12;
    if ( Request->m_IrpAllocation != 1 )
    {
      v36 = -1073741616;
      v42 = 13;
LABEL_66:
      v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v44 = Request;
      if ( !this->m_ObjectSize )
        v43 = 0LL;
      v45 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !Request->m_ObjectSize )
        v45 = 0LL;
      if ( v45 )
        v44 = (FxRequestBase *)v45;
      WPP_IFR_SF_qqd(Request->m_Globals, 2u, 0xEu, v42, WPP_FxRequestBase_cpp_Traceguids, v44, v43, v36);
LABEL_73:
      WPP_IFR_SF_qqd(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbPipeKm_cpp_Traceguids, this, Request, v36);
      return v36;
    }
  }
  Irp = IoAllocateIrp(m_TargetStackSize, 0);
  if ( !Irp )
  {
    v36 = -1073741670;
    v42 = 12;
    goto LABEL_66;
  }
  v33 = Request->m_Irp.m_Irp;
  Request->m_Irp.m_Irp = Irp;
  Request->m_Completed = 0;
  if ( v33 && v33 != Irp && Request->m_IrpAllocation == 1 )
  {
    Request->m_IrpAllocation = 1;
    m_Globals = Request->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v39 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v40 = Request;
      if ( !Request->m_ObjectSize )
        v39 = 0LL;
      if ( v39 )
        v40 = (FxRequestBase *)v39;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v33, v40);
    }
    IoFreeIrp(v33);
  }
  else
  {
    Request->m_IrpAllocation = 1;
  }
LABEL_12:
  m_RequestContext = Request->m_RequestContext;
  if ( !m_RequestContext || m_RequestContext->m_RequestType != 16 )
  {
    m_UsbDevice = this->m_UsbDevice;
    if ( m_UsbDevice->m_UrbType )
    {
      if ( Request->m_IrpAllocation )
        v17 = FxUsbDevice::IsObjectDisposedOnRemove(m_UsbDevice, Request) != 0;
      else
        v17 = FxUrbTypeUsbdAllocated;
    }
    else
    {
      v17 = FxUrbTypeLegacy;
    }
    v18 = this->m_Globals;
    v19 = retaddr;
    v47.m128i_i64[0] = 0LL;
    v47.m128i_i64[1] = 64LL;
    if ( !v18->FxPoolTrackingOn )
      v19 = 0LL;
    v20 = FxPoolAllocator(v18, &v18->FxPoolFrameworks, &v47, 0x120uLL, v18->Tag, v19);
    if ( !v20 )
      return -1073741670;
    FxUsbPipeTransferContext::FxUsbPipeTransferContext((FxUsbPipeTransferContext *)v20, v17);
    m_RequestContext = (FxRequestContext *)v21;
    if ( !v21 )
      return -1073741670;
    if ( v17 != FxUrbTypeUsbdAllocated )
      goto LABEL_22;
    if ( *(_QWORD *)(v21 + 264) )
    {
      v36 = -1073741436;
    }
    else
    {
      m_USBDHandle = this->m_USBDHandle;
      v36 = USBD_UrbAllocate(m_USBDHandle, (_URB **)(v21 + 264));
      if ( v36 >= 0 )
      {
        m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
        v37 = KeAcquireSpinLockRaiseToDpc(&Request->m_SpinLock.m_Lock);
        Request->m_ObjectFlags |= 0x800u;
        KeReleaseSpinLock(&Request->m_SpinLock.m_Lock, v37);
LABEL_22:
        v22 = Request->m_RequestContext;
        if ( v22 != m_RequestContext )
        {
          if ( v22 )
            ((void (__fastcall *)(FxRequestContext *, __int64))v22->~FxRequestContext)(v22, 1LL);
          Request->m_RequestContext = m_RequestContext;
        }
        goto LABEL_26;
      }
    }
    ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
    return v36;
  }
LABEL_26:
  if ( ((Buffer->DataType - 2) & 0xFFFFFFFD) != 0
    || (v23 = this->m_Globals,
        Operation = this->m_PipeInformation.EndpointAddress >> 7,
        pMdl = 0LL,
        result = FxRequestBuffer::GetOrAllocateMdl(
                   Buffer,
                   v23,
                   &pMdl,
                   (_MDL **)&m_RequestContext[2].m_RequestMemory,
                   &m_RequestContext[2].m_RequestType,
                   Operation,
                   0,
                   0LL),
        result >= 0) )
  {
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, Buffer);
    PipeHandle = this->m_PipeInformation.PipeHandle;
    *(_DWORD *)(m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length + 32) = TransferFlags;
    *(_QWORD *)(m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length + 24) = PipeHandle;
    Length = (_FILE_OBJECT *)m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length;
    v27 = this->m_USBDHandle;
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
    CurrentStackLocation[-1].FileObject = 0LL;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
    v29 = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    if ( Length != (_FILE_OBJECT *)(&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 1)
      && (unsigned int)(*((_DWORD *)v27 + 54) - 1538) <= 0xFFFFF9FC )
    {
      v29[-1].FileObject = Length;
    }
    v29[-1].Parameters.WMI.ProviderId = (unsigned __int64)Length;
    v30 = Request->m_Globals;
    if ( v30->FxVerifierOn )
    {
      if ( v30->FxVerifierIO )
        FxRequestBase::SetVerifierFlags(Request, 128);
    }
    return 0;
  }
  return result;
}
