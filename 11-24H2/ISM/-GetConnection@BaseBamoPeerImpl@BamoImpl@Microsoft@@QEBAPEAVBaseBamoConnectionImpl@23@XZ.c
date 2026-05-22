/*
 * XREFs of ?GetConnection@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBaseBamoConnectionImpl@23@XZ @ 0x180060E5C
 * Callers:
 *     ?Materialize_BamoHapticDeviceManagerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18011D890 (-Materialize_BamoHapticDeviceManagerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 *     ?Materialize_Microsoft_Bamo_Lib_ISMBamos_AutoBamos_BamoList_SimpleHapticsControllerPrincipal_Proxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18011F1F8 (-Materialize_Microsoft_Bamo_Lib_ISMBamos_AutoBamos_BamoList_SimpleHapticsControllerPrincipal_Pro.c)
 * Callees:
 *     <none>
 */

struct Microsoft::BamoImpl::BaseBamoConnectionImpl *__fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::GetConnection(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  return *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL);
}
