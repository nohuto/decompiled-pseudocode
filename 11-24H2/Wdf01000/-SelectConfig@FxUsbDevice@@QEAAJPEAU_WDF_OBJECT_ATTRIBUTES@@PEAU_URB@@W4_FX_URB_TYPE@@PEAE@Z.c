/*
 * XREFs of ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14004FC24
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x14009D510 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x14009F4C4 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1400A0054 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1400A03C0 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 * Callees:
 *     WPP_IFR_SF_dd @ 0x1400076CC (WPP_IFR_SF_dd.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14000AE60 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14000B9C0 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x14001CF04 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x14001F270 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x140043448 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x14004F230 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x14005057C (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x14005076C (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x140050854 (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 *     ?GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z @ 0x1400508C8 (-GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x14006A3C0 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     WPP_IFR_SF_dqdd @ 0x140099D68 (WPP_IFR_SF_dqdd.c)
 *     ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x14009D95C (--0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z.c)
 *     memmove @ 0x1400ACD40 (memmove.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfig(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _URB *Urb,
        _FX_URB_TYPE NumConfiguredInterfaces,
        unsigned __int8 *PipesAttributes_0)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int16 v8; // r15
  signed int v9; // ebx
  __int64 m_NumInterfaces; // rax
  unsigned __int64 v11; // r9
  ULONG Tag; // ecx
  void *v13; // rax
  unsigned __int64 v14; // rdx
  FX_POOL **v15; // r12
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdi
  void **p_InterfaceHandle; // rsi
  void **v19; // rax
  void **v20; // r13
  unsigned int _a4; // eax
  int v22; // edx
  void *v23; // r11
  unsigned int v24; // ebx
  void *v25; // rcx
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // dx
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned int v30; // ecx
  unsigned int i; // ebx
  FX_POOL **v32; // rax
  FxIoTarget *v33; // rcx
  FxIoTarget *v34; // rax
  signed int v35; // eax
  unsigned __int16 v36; // r9
  _FX_DRIVER_GLOBALS *v37; // rcx
  void *v38; // rax
  ULONG v39; // r8d
  unsigned __int16 v40; // r15
  USBD_HANDLE__ *m_USBDHandle; // r9
  signed int v42; // eax
  FxUsbInterface *InterfaceFromNumber; // rax
  FX_POOL *v44; // r8
  unsigned __int8 v45; // r15
  unsigned __int16 *v46; // r13
  unsigned __int16 *v47; // rsi
  FxUsbInterface *v48; // r10
  __int64 v49; // rcx
  __int64 v50; // r14
  FX_POOL **v51; // rdi
  unsigned int j; // esi
  FxObject *v53; // rcx
  __m128i v55; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+60h] [rbp-A8h]
  unsigned int v57; // [rsp+68h] [rbp-A0h]
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+70h] [rbp-98h] BYREF
  __int64 v59; // [rsp+80h] [rbp-88h]
  _URB *v60; // [rsp+88h] [rbp-80h]
  unsigned int v61; // [rsp+90h] [rbp-78h]
  FxObject *v62; // [rsp+98h] [rbp-70h]
  FxObject *Parent; // [rsp+A0h] [rbp-68h]
  _FX_DRIVER_GLOBALS *v64; // [rsp+A8h] [rbp-60h]
  FxSyncRequest request; // [rsp+B0h] [rbp-58h] BYREF
  void *retaddr; // [rsp+230h] [rbp+128h]
  unsigned __int8 v67; // [rsp+238h] [rbp+130h]
  unsigned __int8 v70; // [rsp+250h] [rbp+148h]

  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  v64 = m_Globals;
  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&request.m_Type, m_Globals, 0LL, 0LL);
  v60 = 0LL;
  v8 = 0;
  if ( PipesAttributes_0 )
    *PipesAttributes_0 = 0;
  v9 = FxRequestBase::ValidateTarget(*(FxRequestBase **)&request.m_ClearContextOnDestroy, (unsigned __int64)this);
  if ( v9 >= 0 )
  {
    m_NumInterfaces = this->m_NumInterfaces;
    v67 = m_NumInterfaces;
    if ( (_BYTE)m_NumInterfaces )
    {
      v11 = 16 * m_NumInterfaces;
    }
    else
    {
      v67 = 1;
      v11 = 16LL;
    }
    Tag = m_Globals->Tag;
    v13 = retaddr;
    v55.m128i_i64[1] = 0LL;
    v56 = 64LL;
    if ( !m_Globals->FxPoolTrackingOn )
      v13 = 0LL;
    v15 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, (__m128i *)&v55.m128i_u64[1], v11, Tag, v13);
    if ( v15 )
    {
      v70 = 0;
      p_InterfaceHandle = &Urb->UrbSelectInterface.Interface.InterfaceHandle;
      v19 = (void **)((char *)Urb + Urb->UrbHeader.Length);
      v20 = &Urb->UrbSelectInterface.Interface.InterfaceHandle;
      v55.m128i_i64[1] = (__int64)v19;
      while ( v20 < v19 )
      {
        _a4 = *((_DWORD *)v20 + 4);
        if ( _a4 > 0xFF )
        {
          v9 = -1073741808;
          WPP_IFR_SF_dqdd(*p_m_Globals, v14, 0xEu, 0x16u, WPP_FxUsbDevice_cpp_Traceguids, 255, v20, _a4, -1073741808);
          goto LABEL_64;
        }
        Parent = FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)v20 + 2));
        if ( !Parent )
        {
          v9 = -1073741808;
          WPP_IFR_SF_dd(*p_m_Globals, 2u, 0xEu, 0x17u, WPP_FxUsbDevice_cpp_Traceguids, v22, -1073741808);
          goto LABEL_64;
        }
        v24 = *((unsigned __int8 *)v20 + 16);
        v25 = retaddr;
        v26 = *((unsigned __int8 *)v20 + 16);
        if ( (unsigned __int16)v24 <= v8 )
          v26 = v8;
        v27 = 8 * *((unsigned __int8 *)v20 + 16);
        v8 = v26;
        if ( !(_BYTE)v24 )
          v27 = 8;
        options.Timeout = 0LL;
        v59 = 64LL;
        if ( v64->FxPoolTrackingOn == (_BYTE)v23 )
          v25 = v23;
        options.Timeout = (__int64)FxPoolAllocator(
                                     v64,
                                     &v64->FxPoolFrameworks,
                                     (__m128i *)&options.Timeout,
                                     v27,
                                     v64->Tag,
                                     v25);
        if ( !options.Timeout )
        {
          v9 = -1073741670;
          WPP_IFR_SF_dd(
            *p_m_Globals,
            2u,
            0xEu,
            0x18u,
            WPP_FxUsbDevice_cpp_Traceguids,
            *((unsigned __int8 *)v20 + 2),
            -1073741670);
          goto LABEL_64;
        }
        v29 = 2LL * v70;
        v61 = v24;
        v15[v29] = (FX_POOL *)options.Timeout;
        v30 = v24;
        LODWORD(v15[v29 + 1]) = v24;
        for ( i = 0; ; i = v57 + 1 )
        {
          v57 = i;
          if ( i >= v30 )
            break;
          v32 = FxObjectHandleAlloc2(*p_m_Globals, v14, 0x1B0uLL, v28, PipesAttributes, 0, FxObjectTypeExternal);
          v33 = 0LL;
          if ( v32 )
          {
            FxUsbPipe::FxUsbPipe((FxUsbPipe *)v32, *p_m_Globals, this);
            v33 = v34;
          }
          v62 = v33;
          *(_QWORD *)(options.Timeout + 8LL * i) = v33;
          if ( !v33 )
          {
            v9 = -1073741670;
            v36 = 25;
            goto LABEL_38;
          }
          v9 = FxIoTarget::Init(v33, this->m_DeviceBase);
          if ( v9 < 0 )
          {
            WPP_IFR_SF_D(*p_m_Globals, 2u, 0xEu, 0x1Au, WPP_FxUsbDevice_cpp_Traceguids, v9);
            goto LABEL_64;
          }
          v35 = FxObject::Commit(v62, PipesAttributes, 0LL, Parent, 1u);
          v9 = v35;
          if ( v35 < 0 )
          {
            WPP_IFR_SF_D(*p_m_Globals, 2u, 0xEu, 0x1Bu, WPP_FxUsbDevice_cpp_Traceguids, v35);
            goto LABEL_64;
          }
          v30 = v61;
        }
        if ( *(_QWORD *)&Parent[1].m_ObjectFlags )
          FxUsbDevice::CleanupInterfacePipesAndDelete(this, (FxUsbInterface *)Parent);
        v20 = (void **)((char *)v20 + *(unsigned __int16 *)v20);
        v19 = (void **)v55.m128i_i64[1];
        ++v70;
      }
      if ( this->m_NumInterfaces <= 1u || !v8 )
        goto LABEL_50;
      v37 = *p_m_Globals;
      v38 = retaddr;
      v39 = (*p_m_Globals)->Tag;
      v40 = 24 * v8 + 56;
      v55.m128i_i64[1] = 0LL;
      v56 = 64LL;
      if ( !v37->FxPoolTrackingOn )
        v38 = 0LL;
      v60 = (_URB *)FxPoolAllocator(v37, &v37->FxPoolFrameworks, (__m128i *)&v55.m128i_u64[1], v40, v39, v38);
      if ( v60 )
      {
LABEL_50:
        m_USBDHandle = this->m_USBDHandle;
        options.Timeout = 0x500000010LL;
        v59 = -20000000LL;
        FxFormatUsbRequest(*(FxRequestBase **)&request.m_ClearContextOnDestroy, Urb, FxUrbTypeLegacy, m_USBDHandle);
        v42 = FxIoTarget::SubmitSync(
                this,
                *(FxRequestBase **)&request.m_ClearContextOnDestroy,
                (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
                0LL);
        v9 = v42;
        if ( v42 < 0 )
        {
          WPP_IFR_SF_D(*p_m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxUsbDevice_cpp_Traceguids, v42);
        }
        else
        {
          this->m_ConfigHandle = Urb->UrbSelectConfiguration.ConfigurationHandle;
          InterfaceFromNumber = FxUsbDevice::GetInterfaceFromNumber(
                                  this,
                                  Urb->UrbSelectConfiguration.Interface.InterfaceNumber);
          InterfaceFromNumber->m_NumberOfConfiguredPipes = *((_BYTE *)&Urb->UrbGetIsochPipeTransferPathDelays + 56);
          InterfaceFromNumber->m_ConfiguredPipes = (FxUsbPipe **)*v15;
          *v15 = v44;
          *((_DWORD *)v15 + 2) = (_DWORD)v44;
          FxUsbInterface::SetInfo(InterfaceFromNumber, (_USBD_INTERFACE_INFORMATION *)p_InterfaceHandle);
          v45 = 1;
          if ( this->m_NumInterfaces > 1u )
          {
            v46 = (unsigned __int16 *)((char *)&Urb->UrbHeader.Length + Urb->UrbHeader.Length);
            v47 = (unsigned __int16 *)((char *)p_InterfaceHandle + *(unsigned __int16 *)p_InterfaceHandle);
            while ( v47 < v46 )
            {
              v48 = FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)v47 + 2));
              v55.m128i_i64[1] = (__int64)v48;
              if ( *((_DWORD *)v47 + 4) )
              {
                FxUsbInterface::FormatSelectSettingUrb(v48, v60, v47[8], *((_BYTE *)v47 + 3));
                IoReuseIrp(*(PIRP *)(*(_QWORD *)&request.m_ClearContextOnDestroy + 152LL), 0);
                FxRequestBase::ClearFieldsForReuse(*(FxRequestBase **)&request.m_ClearContextOnDestroy);
                FxFormatUsbRequest(*(FxRequestBase **)&request.m_ClearContextOnDestroy, v60, FxUrbTypeLegacy, 0LL);
                v9 = FxIoTarget::SubmitSync(
                       this,
                       *(FxRequestBase **)&request.m_ClearContextOnDestroy,
                       (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
                       0LL);
                if ( v9 < 0 )
                {
                  WPP_IFR_SF_D(*p_m_Globals, 2u, 0xEu, 0x1Du, WPP_FxUsbDevice_cpp_Traceguids, v9);
                  goto $Done_15;
                }
                memmove(
                  v47,
                  &v60->UrbGetIsochPipeTransferPathDelays.MaximumSendPathDelayInMilliSeconds,
                  v60->UrbSelectInterface.Interface.Length);
                v48 = (FxUsbInterface *)v55.m128i_i64[1];
              }
              v48->m_NumberOfConfiguredPipes = *((_BYTE *)v47 + 16);
              v49 = 2LL * v45;
              v48->m_ConfiguredPipes = (FxUsbPipe **)v15[2 * v45];
              v15[v49] = 0LL;
              LODWORD(v15[v49 + 1]) = 0;
              FxUsbInterface::SetInfo(v48, (_USBD_INTERFACE_INFORMATION *)v47);
              v47 = (unsigned __int16 *)((char *)v47 + *v47);
              ++v45;
            }
          }
          if ( PipesAttributes_0 )
            *PipesAttributes_0 = v45;
        }
$Done_15:
        if ( v60 )
          FxPoolFree(v60);
      }
      else
      {
        v9 = -1073741670;
        v36 = 28;
LABEL_38:
        WPP_IFR_SF_D(*p_m_Globals, 2u, 0xEu, v36, WPP_FxUsbDevice_cpp_Traceguids, 0xC000009A);
      }
LABEL_64:
      if ( v67 )
      {
        v50 = v67;
        v51 = v15;
        do
        {
          if ( *v51 )
          {
            for ( j = 0; j < *((_DWORD *)v51 + 2); ++j )
            {
              v53 = (FxObject *)*((_QWORD *)&(*v51)->NonPagedLock.m_DbgFlagIsInitialized + j);
              if ( v53 )
              {
                FxObject::DeleteFromFailedCreate(v53);
                *((_QWORD *)&(*v51)->NonPagedLock.m_DbgFlagIsInitialized + j) = 0LL;
              }
            }
            FxPoolFree(*v51);
            *v51 = 0LL;
            *((_DWORD *)v51 + 2) = 0;
          }
          v51 += 2;
          --v50;
        }
        while ( v50 );
      }
      FxPoolFree(v15);
    }
    else
    {
      v9 = -1073741670;
      m_ObjectSize = this->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbDevice_cpp_Traceguids, _a1, -1073741670);
    }
  }
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  return (unsigned int)v9;
}
