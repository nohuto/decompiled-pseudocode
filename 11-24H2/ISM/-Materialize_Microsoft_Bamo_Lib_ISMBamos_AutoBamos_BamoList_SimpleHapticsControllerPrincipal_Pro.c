/*
 * XREFs of ?Materialize_Microsoft_Bamo_Lib_ISMBamos_AutoBamos_BamoList_SimpleHapticsControllerPrincipal_Proxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18011F1F8
 * Callers:
 *     ?Thunk_Materialize_Microsoft_Bamo_Lib_ISMBamos_AutoBamos_BamoList_SimpleHapticsControllerPrincipal_Proxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180126550 (-Thunk_Materialize_Microsoft_Bamo_Lib_ISMBamos_AutoBamos_BamoList_SimpleHapticsControllerPrincip.c)
 * Callees:
 *     ?GetConnection@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBaseBamoConnectionImpl@23@XZ @ 0x180060E5C (-GetConnection@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBaseBamoConnectionImpl@23@XZ.c)
 *     ?CreateList_SimpleHapticsControllerPrincipal_Proxy@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@YAXPEAVBaseBamoConnectionImpl@25@PEAVBamoPeer@1@PEAPEAVBamoProxy@45@@Z @ 0x180115F58 (-CreateList_SimpleHapticsControllerPrincipal_Proxy@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsof.c)
 */

void __fastcall __noreturn BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_Microsoft_Bamo_Lib_ISMBamos_AutoBamos_BamoList_SimpleHapticsControllerPrincipal_Proxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this)
{
  Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos *Connection; // rax
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v2; // rdx
  struct Microsoft::Bamo::BamoProxy **v3; // r9
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  Connection = Microsoft::BamoImpl::BaseBamoPeerImpl::GetConnection(this);
  Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::CreateList_SimpleHapticsControllerPrincipal_Proxy(
    Connection,
    v2,
    (struct ISMBamos_AutoBamos::BamoPeer *)&v4,
    v3);
}
