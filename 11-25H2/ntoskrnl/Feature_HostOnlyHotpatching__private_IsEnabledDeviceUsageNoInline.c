/*
 * XREFs of Feature_HostOnlyHotpatching__private_IsEnabledDeviceUsageNoInline @ 0x1404F2184
 * Callers:
 *     MiHotPatchAllProcesses @ 0x1407E2DB4 (MiHotPatchAllProcesses.c)
 *     NtManageHotPatch @ 0x140A1D5D0 (NtManageHotPatch.c)
 * Callees:
 *     Feature_HostOnlyHotpatching__private_IsEnabledFallback @ 0x1404F21BC (Feature_HostOnlyHotpatching__private_IsEnabledFallback.c)
 */

__int64 Feature_HostOnlyHotpatching__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HostOnlyHotpatching__private_featureState & 0x10) != 0 )
    return Feature_HostOnlyHotpatching__private_featureState & 1;
  else
    return Feature_HostOnlyHotpatching__private_IsEnabledFallback(
             (unsigned int)Feature_HostOnlyHotpatching__private_featureState,
             3LL);
}
