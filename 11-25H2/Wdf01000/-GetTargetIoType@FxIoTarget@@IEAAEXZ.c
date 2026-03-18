/*
 * XREFs of ?GetTargetIoType@FxIoTarget@@IEAAEXZ @ 0x140012E30
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x140011E70 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?UpdateTargetIoType@FxIoTarget@@QEAAXXZ @ 0x140040140 (-UpdateTargetIoType@FxIoTarget@@QEAAXXZ.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x14004F158 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxIoTarget::GetTargetIoType(FxIoTarget *this)
{
  unsigned int Flags; // eax

  Flags = this->m_TargetDevice->Flags;
  if ( (Flags & 4) != 0 )
    return 2;
  else
    return (Flags >> 3) & 2 | 1;
}
