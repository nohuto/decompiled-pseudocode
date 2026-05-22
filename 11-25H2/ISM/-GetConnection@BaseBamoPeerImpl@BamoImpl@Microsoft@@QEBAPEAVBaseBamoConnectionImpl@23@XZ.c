/*
 * XREFs of ?GetConnection@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBaseBamoConnectionImpl@23@XZ @ 0x18006120C
 * Callers:
 *     ?Materialize_BamoHapticDeviceManagerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18011BAF0 (-Materialize_BamoHapticDeviceManagerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

struct Microsoft::BamoImpl::BaseBamoConnectionImpl *__fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::GetConnection(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  return *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL);
}
