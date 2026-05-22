/*
 * XREFs of ?Materialize_BamoHapticDeviceManagerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18011BAF0
 * Callers:
 *     ?Thunk_Materialize_BamoHapticDeviceManagerProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801243C0 (-Thunk_Materialize_BamoHapticDeviceManagerProxy_5@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPe.c)
 * Callees:
 *     ?GetConnection@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBaseBamoConnectionImpl@23@XZ @ 0x18006120C (-GetConnection@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBaseBamoConnectionImpl@23@XZ.c)
 *     ?CreateHapticDeviceManagerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180114274 (-CreateHapticDeviceManagerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer.c)
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
