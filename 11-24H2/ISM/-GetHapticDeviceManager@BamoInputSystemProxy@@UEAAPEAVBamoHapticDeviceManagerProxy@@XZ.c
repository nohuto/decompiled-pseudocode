/*
 * XREFs of ?GetHapticDeviceManager@BamoInputSystemProxy@@UEAAPEAVBamoHapticDeviceManagerProxy@@XZ @ 0x180058D90
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800593F0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoHapticDeviceManagerProxy *__fastcall BamoInputSystemProxy::GetHapticDeviceManager(
        BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoHapticDeviceManagerProxy *)*((_QWORD *)this + 14);
}
