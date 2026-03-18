/*
 * XREFs of ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18024F710
 * Callers:
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1801A9334 (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18025EB1C (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
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
