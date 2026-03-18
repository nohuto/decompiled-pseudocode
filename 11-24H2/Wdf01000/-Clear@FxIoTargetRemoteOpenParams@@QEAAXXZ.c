/*
 * XREFs of ?Clear@FxIoTargetRemoteOpenParams@@QEAAXXZ @ 0x14002B2F4
 * Callers:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x140029B9C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x14002A5A0 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

void __fastcall FxIoTargetRemoteOpenParams::Clear(FxIoTargetRemoteOpenParams *this)
{
  _QWORD *EaBuffer; // rcx
  wchar_t *Buffer; // rcx

  EaBuffer = this->EaBuffer;
  if ( EaBuffer )
    FxPoolFree(EaBuffer);
  Buffer = this->TargetDeviceName.Buffer;
  if ( Buffer )
    FxPoolFree(Buffer);
  memset(this, 0, sizeof(FxIoTargetRemoteOpenParams));
}
