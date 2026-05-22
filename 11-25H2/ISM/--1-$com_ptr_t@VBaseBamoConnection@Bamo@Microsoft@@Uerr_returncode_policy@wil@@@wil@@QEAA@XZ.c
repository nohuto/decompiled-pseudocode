/*
 * XREFs of ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18008D560
 * Callers:
 *     ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x18000BCA4 (--$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalServerConnection@@@Z @ 0x18000C7CC (--$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x18000D0B0 (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ??$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalClientConnection@@@Z @ 0x18007F83C (--$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 *     ??$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemServerConnection@@@Z @ 0x180097538 (--$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 *     ??1MPCManager@@UEAA@XZ @ 0x1800B8190 (--1MPCManager@@UEAA@XZ.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x18015F564 (--$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     ??1MPCManagerClient@@UEAA@XZ @ 0x1801604A4 (--1MPCManagerClient@@UEAA@XZ.c)
 *     ??1MPCConstantManagerClient@@UEAA@XZ @ 0x18016B194 (--1MPCConstantManagerClient@@UEAA@XZ.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateClient_MPCManagerClientConnection__::_1_::dtor$0 @ 0x1801C7E62 (_Microsoft--Bamo--BaseBamoConnection--CreateClient_MPCManagerClientConnection__--_1_--dtor$0.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateServer_InputSystemInternalServerConnection__::_1_::dtor$0 @ 0x1801C7F43 (_Microsoft--Bamo--BaseBamoConnection--CreateServer_InputSystemInternalServerConnection__--_1_--d.c)
 *     __lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator()_::_1_::dtor$1 @ 0x1801C80DC (__lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator()_--_1_--dtor$1.c)
 *     _MPCManager::MPCManager_::_1_::dtor$1 @ 0x1801C8136 (_MPCManager--MPCManager_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18008D760 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  Microsoft::Bamo::BaseBamoConnection *v1; // rcx
  unsigned int result; // eax

  v1 = *a1;
  if ( v1 )
    return Microsoft::Bamo::BaseBamoConnection::Release(v1);
  return result;
}
