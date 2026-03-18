/*
 * XREFs of ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x14009FCF0
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x14009D0C0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x14001E120 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x14001EC30 (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     USBD_UrbAllocate @ 0x14001FB30 (USBD_UrbAllocate.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x14004F184 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x14004F230 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x14005057C (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x14005FA38 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ??0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x14009E790 (--0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x14009E8F8 (-AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxUsbDevice::FormatStringRequest(
        FxUsbDevice *this,
        FxRequestBase *Request,
        FxRequestBuffer *RequestBuffer,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  signed int _a3; // eax
  unsigned int v10; // ebx
  const void *_a1; // r10
  __int64 result; // rax
  FxRequestContext *m_RequestContext; // rbx
  bool FxUrbTypeForRequest; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v16; // r8
  _FX_URB_TYPE v17; // bp
  FX_POOL **v18; // rax
  __int64 v19; // rax
  USBD_HANDLE__ *m_USBDHandle; // r15
  __int64 v21; // r14
  signed int v22; // ebp
  _WORD *v23; // rax
  unsigned int BufferLength; // eax
  IFxMemory *m_RequestMemory; // rcx
  IFxMemory_vtbl *v26; // rax
  __m128i v27; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  _a3 = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  v10 = _a3;
  if ( _a3 >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 20 )
    {
      FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this, Request);
      m_Globals = this->m_Globals;
      v16 = retaddr;
      v17 = FxUrbTypeForRequest;
      v27.m128i_i64[0] = 0LL;
      v27.m128i_i64[1] = 64LL;
      if ( !m_Globals->FxPoolTrackingOn )
        v16 = 0LL;
      v18 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v27, 0x128uLL, m_Globals->Tag, v16);
      if ( !v18 )
        return 3221225626LL;
      FxUsbDeviceStringContext::FxUsbDeviceStringContext((FxUsbDeviceStringContext *)v18, v17);
      m_RequestContext = (FxRequestContext *)v19;
      if ( !v19 )
        return 3221225626LL;
      if ( v17 == FxUrbTypeUsbdAllocated )
      {
        m_USBDHandle = this->m_USBDHandle;
        v21 = v19 + 272;
        v22 = USBD_UrbAllocate(m_USBDHandle, (_URB **)(v19 + 272));
        if ( v22 < 0 )
        {
          WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x15u, WPP_FxusbDeviceKm_cpp_Traceguids, v22);
          ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
          return (unsigned int)v22;
        }
        v23 = *(_WORD **)v21;
        m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
        v23[1] = 11;
        **(_WORD **)v21 = 136;
        *(_BYTE *)(*(_QWORD *)v21 + 131LL) = 3;
        FxObject::MarkDisposeOverride(Request, ObjectLock);
      }
      FxRequestBase::SetContext(Request, m_RequestContext);
    }
    BufferLength = FxRequestBuffer::GetBufferLength(RequestBuffer);
    result = FxUsbDeviceStringContext::AllocateDescriptor(
               (FxUsbDeviceStringContext *)m_RequestContext,
               this->m_Globals,
               BufferLength);
    if ( (int)result >= 0 )
    {
      m_RequestContext->StoreAndReferenceMemory(m_RequestContext, RequestBuffer);
      m_RequestMemory = m_RequestContext[2].m_RequestMemory;
      m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
      v26 = *(IFxMemory_vtbl **)&m_RequestContext[2].m_RequestType;
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
      HIDWORD(m_RequestContext[1].__vftable) = 2;
      m_RequestMemory[5].__vftable = v26;
      HIDWORD(m_RequestContext[2].m_RequestMemory[4].__vftable) = m_RequestContext[3].__vftable;
      BYTE2(m_RequestContext[2].m_RequestMemory[16].__vftable) = StringIndex;
      WORD2(m_RequestContext[2].m_RequestMemory[16].__vftable) = LangID;
      FxFormatUsbRequest(
        Request,
        (_FILE_OBJECT *)m_RequestContext[2].m_RequestMemory,
        (_FX_URB_TYPE)(m_RequestContext[2].m_RequestMemory != (IFxMemory *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb
                                                            + 1),
        this->m_USBDHandle);
      return 0LL;
    }
  }
  else
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqd(this->m_Globals, 2u, 0xEu, 0x14u, WPP_FxusbDeviceKm_cpp_Traceguids, _a1, Request, _a3);
    return v10;
  }
  return result;
}
