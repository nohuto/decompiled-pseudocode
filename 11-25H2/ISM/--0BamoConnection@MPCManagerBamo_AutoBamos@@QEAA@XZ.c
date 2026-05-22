/*
 * XREFs of ??0BamoConnection@MPCManagerBamo_AutoBamos@@QEAA@XZ @ 0x18008FF04
 * Callers:
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x18000D0B0 (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x18015F564 (--$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 * Callees:
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18008FF48 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

MPCManagerBamo_AutoBamos::BamoConnection *__fastcall MPCManagerBamo_AutoBamos::BamoConnection::BamoConnection(
        MPCManagerBamo_AutoBamos::BamoConnection *this)
{
  *(_QWORD *)this = &MPCManagerBamo_AutoBamos::BamoConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
    (MPCManagerBamo_AutoBamos::BamoConnection *)((char *)this + 8),
    this);
  *((_QWORD *)this + 1) = &BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl::`vftable';
  return this;
}
