/*
 * XREFs of CmpRestampSelf @ 0x1407D770C
 * Callers:
 *     CmpLoadSystemVersionData @ 0x1407D7168 (CmpLoadSystemVersionData.c)
 * Callees:
 *     Feature_FixContainerBuildNumber__private_IsEnabledDeviceUsageNoInline @ 0x140667EE4 (Feature_FixContainerBuildNumber__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 CmpRestampSelf()
{
  __int64 v0; // rbx
  __int64 result; // rax

  v0 = CmpEditionVersion;
  NtBuildNumber = *(_DWORD *)(CmpEditionVersion + 8) | 0xF0000000;
  *(_DWORD *)(MmWriteableSharedUserData + 608) = *(_DWORD *)(CmpEditionVersion + 8);
  if ( (unsigned int)Feature_FixContainerBuildNumber__private_IsEnabledDeviceUsageNoInline() )
    dword_140FCEE78 = (unsigned __int16)NtBuildNumber;
  result = *(unsigned int *)(v0 + 12);
  NtBuildQfe = *(_DWORD *)(v0 + 12);
  return result;
}
