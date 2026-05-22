/*
 * XREFs of ?Materialize_BamoHapticDeviceManagerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18011D890
 * Callers:
 *     ?Thunk_Materialize_BamoHapticDeviceManagerProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180126160 (-Thunk_Materialize_BamoHapticDeviceManagerProxy_5@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPe.c)
 * Callees:
 *     ?GetConnection@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBaseBamoConnectionImpl@23@XZ @ 0x180060E5C (-GetConnection@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBaseBamoConnectionImpl@23@XZ.c)
 *     ?CreateHapticDeviceManagerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180115DC4 (-CreateHapticDeviceManagerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer.c)
 */

void __fastcall __noreturn BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_BamoHapticDeviceManagerProxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this)
{
  BamoImpl *Connection; // rax
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v2; // rdx
  struct Microsoft::Bamo::BamoProxy **v3; // r9
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  Connection = Microsoft::BamoImpl::BaseBamoPeerImpl::GetConnection(this);
  BamoImpl::CreateHapticDeviceManagerProxy(Connection, v2, (struct ISMBamos_AutoBamos::BamoPeer *)&v4, v3);
}
