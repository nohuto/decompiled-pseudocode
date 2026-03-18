/*
 * XREFs of ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x14002FFF0
 * Callers:
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1400062E0 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1400072F4 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     FxIoTargetSendIoctl @ 0x14002E630 (FxIoTargetSendIoctl.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x140030320 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     FxIoTargetSendIo @ 0x140032D90 (FxIoTargetSendIo.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxRequestBuffer::ValidateMemoryDescriptor(
        FxRequestBuffer *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_MEMORY_DESCRIPTOR *Descriptor,
        __int64 Flags)
{
  IFxMemory *Buffer; // rcx
  unsigned int Length; // eax
  unsigned int v9; // edi
  unsigned __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned __int16 *v13; // rsi
  _WDFMEMORY_OFFSET *Offsets; // rax
  _WDFMEMORY_OFFSET *v15; // rbx
  _MDL *v16; // rax
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v18; // rbp
  unsigned int _a1; // eax
  unsigned __int16 v20; // r9
  IFxMemory v21; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  IFxMemory **p_pMemory; // [rsp+50h] [rbp-38h] BYREF
  __int16 v24; // [rsp+58h] [rbp-30h]
  __int16 v25; // [rsp+5Ah] [rbp-2Eh]
  int v26; // [rsp+5Ch] [rbp-2Ch]
  IFxMemory *pMemory; // [rsp+A0h] [rbp+18h] BYREF

  if ( Descriptor )
  {
    if ( Descriptor->Type == WdfMemoryDescriptorTypeBuffer )
    {
      Buffer = (IFxMemory *)Descriptor->u.BufferType.Buffer;
      if ( !Buffer )
      {
        if ( (Flags & 2) == 0 )
        {
          WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, 0xBu, WPP_FxRequestBuffer_cpp_Traceguids);
          return 3221225485LL;
        }
        _a1 = Descriptor->u.BufferType.Length;
        if ( _a1 )
        {
          v20 = 12;
LABEL_28:
          WPP_IFR_SF_D(FxDriverGlobals, 2u, 6u, v20, WPP_FxRequestBuffer_cpp_Traceguids, _a1);
          return 3221225485LL;
        }
      }
      Length = Descriptor->u.BufferType.Length;
      this->DataType = FxRequestBufferBuffer;
    }
    else
    {
      if ( Descriptor->Type != WdfMemoryDescriptorTypeMdl )
      {
        if ( Descriptor->Type == WdfMemoryDescriptorTypeHandle )
        {
          v11 = (unsigned __int64)Descriptor->u.BufferType.Buffer;
          if ( v11 )
          {
            v9 = 0;
            LOWORD(v12) = 0;
            v13 = (unsigned __int16 *)(~v11 & 0xFFFFFFFFFFFFFFF8uLL);
            if ( (v11 & 1) != 0 )
            {
              v12 = *v13;
              v13 = (unsigned __int16 *)((char *)v13 - v12);
            }
            if ( v13[4] == 4106 )
            {
              pMemory = (IFxMemory *)v13;
            }
            else
            {
              pMemory = 0LL;
              p_pMemory = &pMemory;
              v25 = v12;
              v26 = 0;
              v21.__vftable = *(IFxMemory_vtbl **)v13;
              v24 = 4106;
              if ( ((int (__fastcall *)(unsigned __int16 *, IFxMemory ***, _WDF_MEMORY_DESCRIPTOR *, __int64))v21.GetDriverGlobals)(
                     v13,
                     &p_pMemory,
                     Descriptor,
                     Flags) < 0 )
              {
                WPP_IFR_SF_qDqD(
                  *((_FX_DRIVER_GLOBALS **)v13 + 2),
                  (unsigned __int8)FxDriverGlobals,
                  (unsigned int)Descriptor,
                  Flags,
                  traceGuid,
                  (const void *)v11,
                  0x100Au,
                  v13,
                  v13[4]);
                FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v13 + 2), WDF_INVALID_HANDLE, v11, 0x100AuLL);
              }
              v13 = (unsigned __int16 *)pMemory;
            }
            Offsets = Descriptor->u.HandleType.Offsets;
            if ( Offsets )
            {
              BufferLength = Offsets->BufferLength;
              v18 = BufferLength + Offsets->BufferOffset;
              if ( v18 < BufferLength
                || v18 > (*(__int64 (__fastcall **)(unsigned __int16 *, unsigned __int64, _WDF_MEMORY_DESCRIPTOR *, __int64))(*(_QWORD *)v13 + 8LL))(
                           v13,
                           BufferLength,
                           Descriptor,
                           Flags) )
              {
                v9 = -1073741675;
                WPP_IFR_SF_D(FxDriverGlobals, 2u, 6u, 0x10u, WPP_FxRequestBuffer_cpp_Traceguids, 0xC0000095);
                return v9;
              }
              v13 = (unsigned __int16 *)pMemory;
            }
            if ( v13 )
            {
              v15 = Descriptor->u.HandleType.Offsets;
              v16 = (_MDL *)(*(__int64 (__fastcall **)(unsigned __int16 *, _FX_DRIVER_GLOBALS *, _WDF_MEMORY_DESCRIPTOR *, __int64))(*(_QWORD *)v13 + 16LL))(
                              v13,
                              FxDriverGlobals,
                              Descriptor,
                              Flags);
              this->u.Memory.Memory = (IFxMemory *)v13;
              this->u.Memory.Offsets = v15;
              if ( v16 )
              {
                this->DataType = FxRequestBufferReferencedMdl;
                this->u.RefMdl.Mdl = v16;
              }
              else
              {
                this->DataType = FxRequestBufferMemory;
              }
            }
            return v9;
          }
          if ( (Flags & 2) != 0 )
            return 0;
          WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, 0xFu, WPP_FxRequestBuffer_cpp_Traceguids);
        }
        return (unsigned int)-1073741811;
      }
      Buffer = (IFxMemory *)Descriptor->u.BufferType.Buffer;
      if ( !Buffer )
      {
        if ( (Flags & 2) == 0 )
        {
          WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, 0xDu, WPP_FxRequestBuffer_cpp_Traceguids);
          return 3221225485LL;
        }
        _a1 = Descriptor->u.BufferType.Length;
        if ( _a1 )
        {
          v20 = 14;
          goto LABEL_28;
        }
      }
      Length = Descriptor->u.BufferType.Length;
      this->DataType = FxRequestBufferMdl;
    }
    this->u.Mdl.Length = Length;
    this->u.Memory.Memory = Buffer;
    return 0;
  }
  if ( (Flags & 1) != 0 )
    return 0LL;
  WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, 0xAu, WPP_FxRequestBuffer_cpp_Traceguids);
  return 3221225485LL;
}
