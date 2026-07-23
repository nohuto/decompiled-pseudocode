/*
 * XREFs of Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90
 * Callers:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     SepAccessCheck @ 0x1404E76E0 (SepAccessCheck.c)
 *     SepAccessCheckEx @ 0x1404E81A8 (SepAccessCheckEx.c)
 *     SepMaximumAccessCheck @ 0x1404E8A30 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1404E9F90 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x1404EA720 (SepNormalAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x1404EB6BC (SepNormalAccessCheckEx.c)
 *     SepCheckCreateAppContainer @ 0x140792ECC (SepCheckCreateAppContainer.c)
 *     PspBuildCreateProcessContext @ 0x1408F9210 (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x1408FAD80 (PspDeleteCreateProcessContext.c)
 *     SepAdjustPrivileges @ 0x140984FA0 (SepAdjustPrivileges.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 *     PspInitializeProcessSecurity @ 0x140ACAA98 (PspInitializeProcessSecurity.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledFallback @ 0x1405E2CC8 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledFallback.c)
 */

__int64 Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DecoupleAppContainerAndIntegrityLevel__private_featureState & 0x10) != 0 )
    return Feature_DecoupleAppContainerAndIntegrityLevel__private_featureState & 1;
  else
    return Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledFallback(
             (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_featureState,
             3LL);
}
