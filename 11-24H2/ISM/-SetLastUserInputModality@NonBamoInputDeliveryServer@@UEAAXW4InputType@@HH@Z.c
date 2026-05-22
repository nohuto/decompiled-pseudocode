/*
 * XREFs of ?SetLastUserInputModality@NonBamoInputDeliveryServer@@UEAAXW4InputType@@HH@Z @ 0x18015E0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z @ 0x18015EF9C (-SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z.c)
 *     ?SetLastUserInputModality@InputModalityManager@@QEAA_NW4InputDeviceTypeEx@@HHK@Z @ 0x18015F030 (-SetLastUserInputModality@InputModalityManager@@QEAA_NW4InputDeviceTypeEx@@HHK@Z.c)
 */

void __fastcall NonBamoInputDeliveryServer::SetLastUserInputModality(__int64 a1)
{
  InputModalityManager *v1; // rcx
  __int64 v2; // r10

  if ( (unsigned __int8)InputModalityManager::SetLastUserInputModality(a1 + 288) )
    InputModalityManager::SendInputModalityToInputService(v1, *(struct IInputServiceProxy **)(v2 + 280));
}
