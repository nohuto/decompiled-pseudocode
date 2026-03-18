/*
 * XREFs of imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x140009550
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDd @ 0x1400017F0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_dd @ 0x1400076CC (WPP_IFR_SF_dd.c)
 *     ?FinalRelease@FxObject@@AEAAXXZ @ 0x140008D40 (-FinalRelease@FxObject@@AEAAXXZ.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x140009220 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14000AE60 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14000B9C0 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x14000BC50 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_i @ 0x140010FFC (WPP_IFR_SF_i.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x14001E250 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x14001EC30 (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     USBD_UrbAllocate @ 0x14001FB30 (USBD_UrbAllocate.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x14002DF5C (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x14004E40C (--0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x14004F184 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 *     ??1FxUsbDeviceControlContext@@UEAA@XZ @ 0x140062DA8 (--1FxUsbDeviceControlContext@@UEAA@XZ.c)
 *     USBD_UrbFree @ 0x140066D7C (USBD_UrbFree.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BBF4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081AEC (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140082FF0 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E4854 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceSendControlTransferSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        unsigned __int64 Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        IFxMemory_vtbl **SetupPacket,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesTransferred)
{
  __int64 v10; // rcx
  FxUsbDevice *v11; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _FX_DRIVER_GLOBALS *v13; // rdx
  __int64 v14; // rcx
  FxRequestBase *v15; // rbx
  FxRequestContext *m_RequestContext; // rcx
  FxUsbDeviceControlContext *v17; // rcx
  unsigned int Flags; // edx
  unsigned __int8 v19; // dl
  int v20; // ebx
  FxUsbDevice *v21; // r15
  FxRequestBufferType DataType; // r14d
  FxRequestBase *m_TrueRequest; // rsi
  _WDFMEMORY_OFFSET *Offsets; // rbx
  IFxMemory *Memory; // r13
  unsigned __int64 BufferLength; // rax
  FxRequestContext *v27; // rcx
  _IRP *m_Irp; // rbx
  _FX_DRIVER_GLOBALS *v29; // rax
  CCHAR m_TargetStackSize; // cl
  FxRequestContext *v31; // rdi
  _FX_URB_TYPE FxUrbTypeForRequest; // al
  _FX_DRIVER_GLOBALS *v33; // rcx
  _FX_URB_TYPE v34; // bl
  unsigned int Tag; // eax
  void *v36; // r8
  FxUsbDeviceControlContext *v37; // rax
  __int64 v38; // rax
  _FX_DRIVER_GLOBALS *v39; // rdx
  int v40; // r15d
  IFxMemory *m_RequestMemory; // rax
  IFxMemory *v42; // rdx
  IFxMemory *v43; // r13
  FxVerifierLock **v44; // rbx
  char *v45; // r15
  unsigned __int64 v46; // rax
  IFxMemory *v47; // rcx
  IFxMemory_vtbl *v48; // rcx
  _FILE_OBJECT *v49; // rdx
  USBD_HANDLE__ *v50; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v52; // rcx
  _FX_DRIVER_GLOBALS *v53; // rax
  WDFUSBDEVICE__ *v54; // rbx
  signed __int32 v55; // ebx
  PIRP Irp; // rax
  _IRP *v58; // rbx
  __int64 v59; // r8
  __int32 v60; // r14d
  __int64 v61; // r14
  FxUsbDevice_vtbl *v62; // rax
  unsigned __int8 v63; // dl
  unsigned int v64; // r8d
  unsigned __int16 v65; // r9
  __int32 v66; // r14d
  _WDFMEMORY_OFFSET *v67; // r8
  FxRequestBase_vtbl *v68; // rax
  unsigned __int8 v69; // dl
  unsigned int v70; // r8d
  unsigned __int16 v71; // r9
  unsigned __int64 v72; // rcx
  USBD_HANDLE__ *m_USBDHandle; // rbx
  signed int v74; // eax
  KIRQL v75; // al
  _FX_DRIVER_GLOBALS *v76; // rcx
  const void *v77; // rax
  unsigned __int64 v78; // rbx
  const void *v79; // rax
  const void *v80; // rcx
  const void *v81; // rax
  unsigned __int16 v82; // r9
  const void *v83; // rax
  KIRQL CurrentIrql; // al
  const void *v85; // rax
  unsigned __int8 *UnlockWhenFreed; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v88; // [rsp+58h] [rbp-A8h]
  FxRequestBuffer buf; // [rsp+60h] [rbp-A0h] BYREF
  FxRequestBase *v90; // [rsp+80h] [rbp-80h] BYREF
  FxUsbDevice *pUsbDevice; // [rsp+88h] [rbp-78h] BYREF
  FxVerifierLock *VerifierLock; // [rsp+90h] [rbp-70h] BYREF
  FxVerifierLock *v93; // [rsp+98h] [rbp-68h] BYREF
  FxUsbDevice **p_pUsbDevice; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v95; // [rsp+A8h] [rbp-58h]
  __int16 v96; // [rsp+AAh] [rbp-56h]
  int v97; // [rsp+ACh] [rbp-54h]
  FxRequestBase **v98; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v99; // [rsp+B8h] [rbp-48h]
  __int16 v100; // [rsp+BAh] [rbp-46h]
  int v101; // [rsp+BCh] [rbp-44h]
  FxSyncRequest _a1; // [rsp+C0h] [rbp-40h] BYREF
  _MDL *Mdl; // [rsp+1F0h] [rbp+F0h] BYREF
  _WDF_REQUEST_SEND_OPTIONS *Options; // [rsp+1F8h] [rbp+F8h]
  unsigned int *v105; // [rsp+200h] [rbp+100h]
  FxPoolTypeOrPoolFlags v106; // [rsp+210h] [rbp+110h]
  char v107; // [rsp+220h] [rbp+120h] BYREF
  FxPoolTypeOrPoolFlags v108; // [rsp+230h] [rbp+130h] BYREF
  FxUsbDeviceControlContext context; // [rsp+240h] [rbp+140h] BYREF
  void *retaddr; // [rsp+3C8h] [rbp+2C8h]

  v105 = BytesTransferred;
  Options = RequestOptions;
  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  if ( !UsbDevice )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1202uLL);
  LOWORD(v10) = 0;
  v11 = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (UsbDevice & 1) != 0 )
  {
    v10 = LOWORD(v11->__vftable);
    v11 = (FxUsbDevice *)((char *)v11 - v10);
  }
  if ( v11->m_Type == 4610 )
  {
    pUsbDevice = v11;
  }
  else
  {
    pUsbDevice = 0LL;
    p_pUsbDevice = &pUsbDevice;
    v96 = v10;
    v97 = 0;
    v62 = v11->__vftable;
    v95 = 4610;
    if ( v62->QueryInterface(v11, (FxQueryInterfaceParams *)&p_pUsbDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(
        v11->m_Globals,
        v63,
        v64,
        v65,
        (const _GUID *)UnlockWhenFreed,
        (const void *)UsbDevice,
        0x1202u,
        v11,
        v11->m_Type);
      FxVerifierBugCheckWorker(v11->m_Globals, WDF_INVALID_HANDLE, UsbDevice, 0x1202uLL);
    }
    v11 = pUsbDevice;
  }
  m_Globals = v11->m_Globals;
  context.m_CompletionParams.IoStatus.Pointer = 0LL;
  context.m_RequestType = 19;
  context.m_CompletionParams.IoStatus.Information = 0LL;
  context.m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&context.m_UsbParameters;
  v13 = m_Globals;
  context.m_CompletionParams.Size = 72;
  context.__vftable = (FxUsbDeviceControlContext_vtbl *)FxUsbDeviceControlContext::`vftable';
  context.m_Urb = &context.m_UrbLegacy;
  _a1.__vftable = (FxSyncRequest_vtbl *)FxObject::`vftable';
  _a1.m_ChildListHead.Blink = &_a1.m_ChildListHead;
  _a1.m_ChildListHead.Flink = &_a1.m_ChildListHead;
  _a1.m_ChildEntry.Blink = &_a1.m_ChildEntry;
  memset(&context.m_UsbParameters, 0, 40);
  _a1.m_ChildEntry.Flink = &_a1.m_ChildEntry;
  memset(&context.m_CompletionParams.Parameters.Usb + 1, 0, 48);
  context.m_CompletionParams.Type = WdfRequestTypeUsb;
  context.m_UsbParameters.Type = WdfUsbRequestTypeNoFormat;
  context.m_PartialMdl = 0LL;
  context.m_UnlockPages = 0;
  *(_DWORD *)&_a1.m_Type = 4104;
  _a1.m_Globals = m_Globals;
  _a1.m_SpinLock.m_Lock = 0LL;
  _a1.m_SpinLock.m_DbgFlagIsInitialized = 1;
  _a1.m_Refcnt = 1;
  *(_DWORD *)&_a1.m_ObjectFlags = 0x10000;
  _a1.m_ParentObject = 0LL;
  _a1.m_DisposeSingleEntry.Next = 0LL;
  _a1.m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    FxObject::Vf_VerifyConstruct(&_a1, m_Globals, 1u);
    v13 = _a1.m_Globals;
  }
  _a1.__vftable = (FxSyncRequest_vtbl *)FxNonPagedObject::`vftable';
  _a1.m_NPLock.m_Lock = 0LL;
  _a1.m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(_a1.m_ObjectFlags) < 0 && v13->FxVerifierLock )
  {
    VerifierLock = 0LL;
    FxVerifierLock::CreateAndInitialize(&VerifierLock, v13, &_a1);
    v93 = VerifierLock;
  }
  _a1.m_CsqContext.Irp = (_IRP *)&_a1.120;
  _a1.m_ListEntry.Flink = (_LIST_ENTRY *)&_a1.120;
  _a1.__vftable = (FxSyncRequest_vtbl *)FxSyncRequest::`vftable';
  *(_DWORD *)&_a1.m_RequestBaseStaticFlags = 0x1000000;
  *(_DWORD *)&_a1.m_Completed = 1;
  memset(&_a1.144, 0, 70);
  _a1.m_AllocatedMdl = 0LL;
  memset(&_a1.218, 0, 17);
  _a1.m_DestroyedEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&_a1.m_DestroyedEvent.m_Event.m_Event, SynchronizationEvent, 0);
  _a1.m_DestroyedEvent.m_Event.m_DbgFlagIsInitialized = 1;
  _a1.m_RequestContext = &context;
  _a1.m_ClearContextOnDestroy = 1;
  if ( Request )
  {
    LOWORD(v14) = 0;
    v15 = (FxRequestBase *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (Request & 1) != 0 )
    {
      v14 = LOWORD(v15->__vftable);
      v15 = (FxRequestBase *)((char *)v15 - v14);
    }
    if ( v15->m_Type == 4104 )
    {
      v90 = v15;
    }
    else
    {
      v90 = 0LL;
      v98 = &v90;
      v101 = 0;
      v68 = v15->__vftable;
      v99 = 4104;
      v100 = v14;
      if ( v68->QueryInterface(v15, (FxQueryInterfaceParams *)&v98) < 0 )
      {
        WPP_IFR_SF_qDqD(
          v15->m_Globals,
          v69,
          v70,
          v71,
          (const _GUID *)UnlockWhenFreed,
          (const void *)Request,
          0x1008u,
          v15,
          v15->m_Type);
        FxVerifierBugCheckWorker(v15->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
      }
      v15 = v90;
    }
    _a1.m_TrueRequest = v15;
    m_RequestContext = v15->m_RequestContext;
    if ( m_RequestContext )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, v15);
      v15 = v90;
    }
    v17 = (FxUsbDeviceControlContext *)v15->m_RequestContext;
    if ( v17 != &context )
    {
      if ( v17 )
        ((void (__fastcall *)(FxUsbDeviceControlContext *, __int64))v17->~FxUsbDeviceControlContext)(v17, 1LL);
      v15->m_RequestContext = &context;
      v15 = v90;
    }
    v15->m_RequestBaseFlags |= 0x10u;
  }
  else
  {
    _a1.m_RequestBaseFlags |= 0x10u;
    _a1.m_TrueRequest = &_a1;
  }
  _a1.m_ObjectSize = 0;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxUsbDeviceAPI_cpp_Traceguids, (const void *)UsbDevice);
  if ( !SetupPacket )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      FxSyncRequest::~FxSyncRequest(&_a1);
      FxUsbDeviceControlContext::~FxUsbDeviceControlContext(&context);
      return 3221225488LL;
    }
  }
  if ( RequestOptions )
  {
    if ( RequestOptions->Size == 16 )
    {
      Flags = RequestOptions->Flags;
      if ( (Flags & 0xFFFFFFF0) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xBu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          Flags,
          0xFu);
      }
      else
      {
        if ( (Flags & 0xFFFFFFF7) == 0 || (Flags & 8) == 0 )
          goto LABEL_29;
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xCu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          8u,
          Flags);
      }
      v40 = -1073741811;
    }
    else
    {
      WPP_IFR_SF_qdd(
        m_Globals,
        2u,
        6u,
        0xAu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        RequestOptions,
        16,
        RequestOptions->Size);
      v40 = -1073741820;
    }
    FxSyncRequest::~FxSyncRequest(&_a1);
    FxUsbDeviceControlContext::~FxUsbDeviceControlContext(&context);
    return (unsigned int)v40;
  }
LABEL_29:
  v20 = FxRequestBuffer::ValidateMemoryDescriptor(&buf, m_Globals, MemoryDescriptor, 3LL);
  if ( v20 >= 0 )
  {
    v21 = pUsbDevice;
    DataType = buf.DataType;
    m_TrueRequest = _a1.m_TrueRequest;
    v88 = (unsigned __int64)pUsbDevice;
    if ( buf.DataType != FxRequestBufferMdl )
    {
      if ( buf.DataType == FxRequestBufferMemory )
      {
        Offsets = buf.u.Memory.Offsets;
        if ( buf.u.Memory.Offsets && *(_OWORD *)buf.u.Memory.Offsets != 0LL )
        {
          BufferLength = buf.u.Memory.Offsets->BufferLength;
          Memory = buf.u.Memory.Memory;
          if ( !BufferLength )
LABEL_107:
            LODWORD(BufferLength) = (__int64)buf.u.Memory.Memory->GetBufferSize(buf.u.Memory.Memory)
                                  - LODWORD(Offsets->BufferOffset);
LABEL_34:
          if ( (unsigned int)BufferLength > 0xFFFFuLL )
          {
            WPP_IFR_SF_i(v21->m_Globals, v19, 0xEu, 0x16u, WPP_FxusbDeviceKm_cpp_Traceguids, (unsigned int)BufferLength);
            v40 = -1073741811;
            goto LABEL_131;
          }
          v27 = m_TrueRequest->m_RequestContext;
          m_Irp = m_TrueRequest->m_Irp.m_Irp;
          if ( v27 )
          {
            if ( m_Irp )
            {
              v27->ReleaseAndRestore(v27, m_TrueRequest);
              v29 = m_TrueRequest->m_Globals;
              if ( v29->FxVerifierOn )
              {
                if ( v29->FxVerifierIO )
                  FxRequestBase::ClearVerifierFlags(m_TrueRequest, 128);
              }
            }
          }
          m_TargetStackSize = v21->m_TargetStackSize;
          if ( m_TargetStackSize )
          {
            if ( !m_Irp )
              goto LABEL_94;
            if ( m_Irp->CurrentLocation > m_TargetStackSize )
              goto LABEL_41;
            if ( m_TrueRequest->m_IrpAllocation == 1 )
            {
LABEL_94:
              Irp = IoAllocateIrp(m_TargetStackSize, 0);
              if ( Irp )
              {
                v58 = m_TrueRequest->m_Irp.m_Irp;
                m_TrueRequest->m_Irp.m_Irp = Irp;
                m_TrueRequest->m_Completed = 0;
                if ( v58 && v58 != Irp && m_TrueRequest->m_IrpAllocation == 1 )
                {
                  m_TrueRequest->m_IrpAllocation = 1;
                  v76 = m_TrueRequest->m_Globals;
                  if ( v76->FxVerboseOn )
                  {
                    if ( !m_TrueRequest->m_ObjectSize
                      || (v77 = (const void *)((unsigned __int64)m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
                    {
                      v77 = m_TrueRequest;
                    }
                    WPP_IFR_SF_qq(v76, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v58, v77);
                  }
                  IoFreeIrp(v58);
                }
                else
                {
                  m_TrueRequest->m_IrpAllocation = 1;
                }
LABEL_41:
                v31 = m_TrueRequest->m_RequestContext;
                if ( !v31 || v31->m_RequestType != 19 )
                {
                  FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(v21, m_TrueRequest);
                  v33 = v21->m_Globals;
                  v34 = FxUrbTypeForRequest;
                  *(_QWORD *)&v106.UsePoolType = 0LL;
                  v106.u.PoolFlags = 64LL;
                  Tag = v33->Tag;
                  if ( v33->FxPoolTrackingOn )
                    v36 = retaddr;
                  else
                    v36 = 0LL;
                  v108 = v106;
                  v37 = (FxUsbDeviceControlContext *)FxPoolAllocator(
                                                       v33,
                                                       &v33->FxPoolFrameworks,
                                                       &v108,
                                                       0x128uLL,
                                                       Tag,
                                                       v36);
                  if ( !v37
                    || (FxUsbDeviceControlContext::FxUsbDeviceControlContext(v37, v34),
                        (v31 = (FxRequestContext *)v38) == 0LL) )
                  {
                    v40 = -1073741670;
                    goto LABEL_131;
                  }
                  if ( v34 == FxUrbTypeUsbdAllocated )
                  {
                    m_USBDHandle = v21->m_USBDHandle;
                    v74 = USBD_UrbAllocate(m_USBDHandle, (_URB **)(v38 + 272));
                    v40 = v74;
                    if ( v74 < 0 )
                    {
                      WPP_IFR_SF_D(
                        *(_FX_DRIVER_GLOBALS **)(v88 + 16),
                        2u,
                        0xEu,
                        0x18u,
                        WPP_FxusbDeviceKm_cpp_Traceguids,
                        v74);
                      ((void (__fastcall *)(FxRequestContext *, __int64))v31->~FxRequestContext)(v31, 1LL);
                      goto LABEL_131;
                    }
                    v31[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
                    v75 = KeAcquireSpinLockRaiseToDpc(&m_TrueRequest->m_SpinLock.m_Lock);
                    m_TrueRequest->m_ObjectFlags |= 0x800u;
                    KeReleaseSpinLock(&m_TrueRequest->m_SpinLock.m_Lock, v75);
                    v21 = (FxUsbDevice *)v88;
                  }
                  FxRequestBase::SetContext(m_TrueRequest, v31);
                }
                if ( ((DataType - 2) & 0xFFFFFFFD) != 0
                  || (v39 = v21->m_Globals,
                      Mdl = 0LL,
                      v40 = FxRequestBuffer::GetOrAllocateMdl(
                              &buf,
                              v39,
                              &Mdl,
                              (_MDL **)&v31[2].m_RequestType,
                              (unsigned __int8 *)&v31[3],
                              IoModifyAccess,
                              0,
                              0LL),
                      v40 >= 0) )
                {
                  v31->m_CompletionParams.Type = WdfRequestTypeUsb;
                  v31->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&v31[1];
                  m_RequestMemory = v31[2].m_RequestMemory;
                  HIDWORD(v31[1].__vftable) = 3;
                  *(_OWORD *)&m_RequestMemory->__vftable = 0LL;
                  *(_OWORD *)&m_RequestMemory[2].__vftable = 0LL;
                  *(_OWORD *)&m_RequestMemory[4].__vftable = 0LL;
                  *(_OWORD *)&m_RequestMemory[6].__vftable = 0LL;
                  *(_OWORD *)&m_RequestMemory[8].__vftable = 0LL;
                  *(_OWORD *)&m_RequestMemory[10].__vftable = 0LL;
                  *(_OWORD *)&m_RequestMemory[12].__vftable = 0LL;
                  *(_OWORD *)&m_RequestMemory[14].__vftable = 0LL;
                  m_RequestMemory[16].__vftable = 0LL;
                  WORD1(v31[2].m_RequestMemory->__vftable) = 8;
                  LOWORD(v31[2].m_RequestMemory->__vftable) = 136;
                  if ( DataType == FxRequestBufferMemory )
                  {
                    v59 = 130LL;
                  }
                  else
                  {
                    if ( DataType != FxRequestBufferReferencedMdl )
                    {
                      v42 = buf.u.Memory.Memory;
                      v31->m_RequestMemory = 0LL;
                      goto LABEL_54;
                    }
                    v59 = 135LL;
                  }
                  Memory->AddRef(Memory, v31, v59, "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
                  v42 = buf.u.Memory.Memory;
                  v31->m_RequestMemory = buf.u.Memory.Memory;
LABEL_54:
                  v43 = v31[2].m_RequestMemory;
                  v44 = &v93;
                  v45 = &v107;
                  if ( v43 != (IFxMemory *)-40LL )
                    v44 = (FxVerifierLock **)&v43[5];
                  if ( v43 != (IFxMemory *)-48LL )
                    v45 = (char *)&v43[6];
                  if ( DataType == FxRequestBufferBuffer )
                  {
                    *(_QWORD *)v45 = 0LL;
                    *v44 = (FxVerifierLock *)v42;
                  }
                  else
                  {
                    v60 = DataType - 1;
                    if ( !v60 )
                    {
                      v61 = v42->GetBuffer(v42);
                      v93 = (FxVerifierLock *)v61;
                      LODWORD(v46) = buf.u.Memory.Memory->GetBufferSize(buf.u.Memory.Memory);
                      if ( buf.u.Memory.Offsets )
                      {
                        v72 = buf.u.Memory.Offsets->BufferLength;
                        if ( !v72 )
                          LODWORD(v72) = v46;
                        LODWORD(v46) = v72;
                        if ( buf.u.Memory.Offsets->BufferOffset )
                        {
                          v61 += buf.u.Memory.Offsets->BufferOffset;
                          v93 = (FxVerifierLock *)v61;
                        }
                      }
                      *(_QWORD *)v45 = 0LL;
                      *v44 = (FxVerifierLock *)v61;
                      goto LABEL_61;
                    }
                    v66 = v60 - 1;
                    if ( v66 )
                    {
                      if ( v66 != 2 )
                      {
                        *(_QWORD *)v45 = 0LL;
                        *v44 = 0LL;
                        HIDWORD(v43[4].__vftable) = 0;
                        goto LABEL_62;
                      }
                      v67 = buf.u.Memory.Offsets;
                      *(_QWORD *)v45 = buf.u.RefMdl.Mdl;
                      *v44 = 0LL;
                      if ( !v67 || (v46 = v67->BufferLength) == 0 )
                        LODWORD(v46) = v42->GetBufferSize(v42);
LABEL_61:
                      HIDWORD(v43[4].__vftable) = v46;
LABEL_62:
                      v31[2].m_RequestMemory[16].__vftable = *SetupPacket;
                      HIWORD(v31[2].m_RequestMemory[16].__vftable) = WORD2(v31[2].m_RequestMemory[4].__vftable);
                      LODWORD(v31[2].m_RequestMemory[4].__vftable) = 2;
                      if ( *(char *)SetupPacket < 0 )
                        LODWORD(v31[2].m_RequestMemory[4].__vftable) |= 1u;
                      v47 = v31[2].m_RequestMemory;
                      if ( *(_BYTE *)(v88 + 488) )
                        v47[3].__vftable = *(IFxMemory_vtbl **)(v88 + 352);
                      else
                        LODWORD(v47[4].__vftable) |= 8u;
                      v48 = *(IFxMemory_vtbl **)&v31[2].m_RequestType;
                      if ( v48 )
                        v31[2].m_RequestMemory[6].__vftable = v48;
                      v49 = (_FILE_OBJECT *)v31[2].m_RequestMemory;
                      v50 = *(USBD_HANDLE__ **)(v88 + 344);
                      CurrentStackLocation = m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
                      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
                      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
                      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
                      CurrentStackLocation[-1].FileObject = 0LL;
                      m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
                      m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
                      v52 = m_TrueRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
                      if ( v49 != (_FILE_OBJECT *)(&v31[1].m_CompletionParams.Parameters.Usb + 1)
                        && (unsigned int)(*((_DWORD *)v50 + 54) - 1538) <= 0xFFFFF9FC )
                      {
                        v52[-1].FileObject = v49;
                      }
                      v52[-1].Parameters.WMI.ProviderId = (unsigned __int64)v49;
                      v53 = m_TrueRequest->m_Globals;
                      if ( v53->FxVerifierOn && v53->FxVerifierIO )
                        FxRequestBase::SetVerifierFlags(m_TrueRequest, 128);
                      if ( m_Globals->FxVerboseOn )
                      {
                        if ( !_a1.m_TrueRequest->m_ObjectSize
                          || (v85 = (const void *)((unsigned __int64)_a1.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
                        {
                          v85 = _a1.m_TrueRequest;
                        }
                        v54 = (WDFUSBDEVICE__ *)UsbDevice;
                        WPP_IFR_SF_qq(
                          m_Globals,
                          5u,
                          0xEu,
                          0x1Bu,
                          WPP_FxUsbDeviceAPI_cpp_Traceguids,
                          (const void *)UsbDevice,
                          v85);
                      }
                      else
                      {
                        v54 = (WDFUSBDEVICE__ *)UsbDevice;
                      }
                      v40 = FxIoTarget::SubmitSync(pUsbDevice, _a1.m_TrueRequest, Options, 0LL);
                      if ( v105 )
                      {
                        if ( v40 < 0 )
                          *v105 = 0;
                        else
                          *v105 = context.m_Urb->TransferBufferLength;
                      }
LABEL_75:
                      if ( m_Globals->FxVerboseOn )
                        WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x1Cu, WPP_FxUsbDeviceAPI_cpp_Traceguids, v54, v40);
                      _a1.__vftable = (FxSyncRequest_vtbl *)FxSyncRequest::`vftable';
                      if ( SLOBYTE(_a1.m_ObjectFlags) < 0 && VerifierLock )
                        FxTagTracker::UpdateTagHistory(
                          (FxTagTracker *)VerifierLock,
                          0LL,
                          129,
                          "minkernel\\wdf\\framework\\shared\\core\\fxsyncrequest.cpp",
                          TagRelease,
                          _a1.m_Refcnt - 1);
                      v55 = _InterlockedDecrement(&_a1.m_Refcnt);
                      if ( !v55 )
                        FxObject::FinalRelease(&_a1);
                      if ( _a1.m_TrueRequest != &_a1 )
                      {
                        if ( !_a1.m_ClearContextOnDestroy )
                        {
LABEL_85:
                          if ( v55 )
                          {
                            if ( _a1.m_Globals->FxVerboseOn )
                              WPP_IFR_SF_qq(
                                _a1.m_Globals,
                                5u,
                                0xDu,
                                0xAu,
                                WPP_FxSyncRequest_cpp_Traceguids,
                                &_a1,
                                &_a1.m_DestroyedEvent);
                            FxCREvent::EnterCRAndWaitAndLeave(&_a1.m_DestroyedEvent);
                            if ( _a1.m_Globals->FxVerboseOn )
                              WPP_IFR_SF_qq(
                                _a1.m_Globals,
                                5u,
                                0xDu,
                                0xBu,
                                WPP_FxSyncRequest_cpp_Traceguids,
                                &_a1,
                                &_a1.m_DestroyedEvent);
                          }
                          FxRequestBase::~FxRequestBase(&_a1);
                          context.__vftable = (FxUsbDeviceControlContext_vtbl *)FxUsbDeviceControlContext::`vftable';
                          if ( context.m_Urb )
                          {
                            if ( context.m_Urb != &context.m_UrbLegacy )
                              USBD_UrbFree(context.m_USBDHandle, (_URB *)context.m_Urb);
                          }
                          return (unsigned int)v40;
                        }
                        _a1.m_TrueRequest->m_RequestContext = 0LL;
                        _a1.m_TrueRequest->m_RequestBaseFlags &= ~0x10u;
                      }
                      if ( _a1.m_ClearContextOnDestroy )
                        _a1.m_RequestContext = 0LL;
                      goto LABEL_85;
                    }
                    *(_QWORD *)v45 = v42;
                    *v44 = 0LL;
                  }
                  LODWORD(v46) = buf.u.Mdl.Length;
                  goto LABEL_61;
                }
LABEL_131:
                v54 = (WDFUSBDEVICE__ *)UsbDevice;
                goto LABEL_75;
              }
              v40 = -1073741670;
              v78 = v88;
              if ( *(_WORD *)(v88 + 10) )
                v80 = (const void *)(v88 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v80 = 0LL;
              if ( !m_TrueRequest->m_ObjectSize
                || (v81 = (const void *)((unsigned __int64)m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
              {
                v81 = m_TrueRequest;
              }
              v82 = 12;
            }
            else
            {
              v40 = -1073741616;
              v78 = v88;
              if ( *(_WORD *)(v88 + 10) )
                v80 = (const void *)(v88 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v80 = 0LL;
              if ( !m_TrueRequest->m_ObjectSize
                || (v81 = (const void *)((unsigned __int64)m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
              {
                v81 = m_TrueRequest;
              }
              v82 = 13;
            }
            WPP_IFR_SF_qqd(m_TrueRequest->m_Globals, 2u, 0xEu, v82, WPP_FxRequestBase_cpp_Traceguids, v81, v80, v40);
          }
          else
          {
            v40 = -1073741436;
            v78 = v88;
            if ( *(_WORD *)(v88 + 10) )
              v79 = (const void *)(v88 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v79 = 0LL;
            WPP_IFR_SF_qd(m_TrueRequest->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v79, -1073741436);
          }
          if ( *(_WORD *)(v78 + 10) )
            v83 = (const void *)(v78 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v83 = 0LL;
          WPP_IFR_SF_qqd(
            *(_FX_DRIVER_GLOBALS **)(v78 + 16),
            2u,
            0xEu,
            0x17u,
            WPP_FxusbDeviceKm_cpp_Traceguids,
            v83,
            m_TrueRequest,
            v40);
          goto LABEL_131;
        }
        goto LABEL_33;
      }
      if ( buf.DataType != FxRequestBufferBuffer )
      {
        if ( buf.DataType != FxRequestBufferReferencedMdl )
        {
          Memory = buf.u.Memory.Memory;
          LODWORD(BufferLength) = 0;
          goto LABEL_34;
        }
        Offsets = buf.u.Memory.Offsets;
        if ( buf.u.Memory.Offsets && *(_OWORD *)buf.u.Memory.Offsets != 0LL )
        {
          BufferLength = buf.u.Memory.Offsets->BufferLength;
          Memory = buf.u.Memory.Memory;
          if ( BufferLength )
            goto LABEL_34;
          goto LABEL_107;
        }
LABEL_33:
        Memory = buf.u.Memory.Memory;
        LODWORD(BufferLength) = buf.u.Memory.Memory->GetBufferSize(buf.u.Memory.Memory);
        goto LABEL_34;
      }
    }
    LODWORD(BufferLength) = buf.u.Mdl.Length;
    Memory = buf.u.Memory.Memory;
    goto LABEL_34;
  }
  FxSyncRequest::~FxSyncRequest(&_a1);
  FxUsbDeviceControlContext::~FxUsbDeviceControlContext(&context);
  return (unsigned int)v20;
}
