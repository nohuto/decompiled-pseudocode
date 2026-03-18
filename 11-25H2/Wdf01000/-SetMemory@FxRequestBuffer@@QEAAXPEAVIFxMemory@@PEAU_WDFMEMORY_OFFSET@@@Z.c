/*
 * XREFs of ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x140004040
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1400023A0 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x140002630 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x14009CFF0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxRequestBuffer::SetMemory(FxRequestBuffer *this, IFxMemory *Memory, _WDFMEMORY_OFFSET *Offsets)
{
  _MDL *v6; // rax
  FxRequestBufferType v7; // eax

  v6 = Memory->GetMdl(Memory);
  if ( v6 )
  {
    this->u.RefMdl.Mdl = v6;
    v7 = FxRequestBufferReferencedMdl;
  }
  else
  {
    v7 = FxRequestBufferMemory;
  }
  this->DataType = v7;
  this->u.Memory.Memory = Memory;
  this->u.Memory.Offsets = Offsets;
}
