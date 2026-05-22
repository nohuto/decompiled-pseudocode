/*
 * XREFs of ?attach@?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVBaseBamoConnection@Bamo@Microsoft@@@Z @ 0x18009BC98
 * Callers:
 *     ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x18015F564 (--$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18008D760 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

Microsoft::Bamo::BaseBamoConnection *__fastcall wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::attach(
        Microsoft::Bamo::BaseBamoConnection **a1,
        Microsoft::Bamo::BaseBamoConnection *a2)
{
  Microsoft::Bamo::BaseBamoConnection *result; // rax

  result = *a1;
  *a1 = a2;
  if ( result )
    return (Microsoft::Bamo::BaseBamoConnection *)Microsoft::Bamo::BaseBamoConnection::Release(result);
  return result;
}
