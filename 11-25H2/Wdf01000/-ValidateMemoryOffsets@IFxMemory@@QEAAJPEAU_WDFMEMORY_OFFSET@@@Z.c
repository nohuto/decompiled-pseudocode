/*
 * XREFs of ?ValidateMemoryOffsets@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@@Z @ 0x1400025E8
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1400023A0 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x140002630 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfRegistryAssignMemory @ 0x1400995C0 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x14009CFF0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IFxMemory::ValidateMemoryOffsets(IFxMemory *this, _WDFMEMORY_OFFSET *Offsets)
{
  unsigned __int64 BufferLength; // r8
  unsigned __int64 v4; // rbx

  if ( !Offsets )
    return 0LL;
  BufferLength = Offsets->BufferLength;
  v4 = BufferLength + Offsets->BufferOffset;
  if ( v4 < BufferLength )
    return 3221225621LL;
  else
    return this->GetBufferSize(this) < v4 ? 0xC0000095 : 0;
}
