/*
 * XREFs of Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline @ 0x1405E57CC
 * Callers:
 *     PspSetUILimitJobObject @ 0x1407785C8 (PspSetUILimitJobObject.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x140AD10F4 (PspDoesJobHierarchyPermitUILimits.c)
 *     PspValidateJobAssignmentUILimits @ 0x140AD119C (PspValidateJobAssignmentUILimits.c)
 * Callees:
 *     Feature_SysSetJobUILimits__private_IsEnabledFallback @ 0x1405E5804 (Feature_SysSetJobUILimits__private_IsEnabledFallback.c)
 */

__int64 Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SysSetJobUILimits__private_featureState & 0x10) != 0 )
    return Feature_SysSetJobUILimits__private_featureState & 1;
  else
    return Feature_SysSetJobUILimits__private_IsEnabledFallback(
             (unsigned int)Feature_SysSetJobUILimits__private_featureState,
             3LL);
}
