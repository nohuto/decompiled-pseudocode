/*
 * XREFs of ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x14001E120
 * Callers:
 *     imp_WdfUsbTargetPipeFormatRequestForRead @ 0x14001D300 (imp_WdfUsbTargetPipeFormatRequestForRead.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x14001D6F0 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x14001DA9C (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x14001E250 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x14009D0C0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x14009FCF0 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall FxRequestBuffer::GetBufferLength(FxRequestBuffer *this)
{
  _WDFMEMORY_OFFSET *Offsets; // rax
  unsigned __int64 result; // rax

  switch ( this->DataType )
  {
    case FxRequestBufferMdl:
      return this->u.Mdl.Length;
    case FxRequestBufferMemory:
      Offsets = this->u.Memory.Offsets;
      if ( !Offsets )
        return this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
      if ( Offsets->BufferOffset )
      {
        result = Offsets->BufferLength;
        if ( !result )
          return (unsigned int)this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory)
               - this->u.Memory.Offsets->BufferOffset;
        return result;
      }
LABEL_11:
      if ( Offsets->BufferLength )
        return Offsets->BufferLength;
      return this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
    case FxRequestBufferBuffer:
      return this->u.Mdl.Length;
  }
  if ( this->DataType != FxRequestBufferReferencedMdl )
    return 0LL;
  Offsets = this->u.Memory.Offsets;
  if ( !Offsets )
    return this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
  if ( !Offsets->BufferOffset )
    goto LABEL_11;
  result = Offsets->BufferLength;
  if ( !result )
    return (unsigned int)this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory)
         - this->u.Memory.Offsets->BufferOffset;
  return result;
}
