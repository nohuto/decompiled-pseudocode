/*
 * XREFs of __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x1800A8ED9
 * Callers:
 *     __imp_load_GetSidLengthRequired @ 0x1800A8F58 (__imp_load_GetSidLengthRequired.c)
 *     __imp_load_InitializeSid @ 0x1800A8F6A (__imp_load_InitializeSid.c)
 *     __imp_load_GetSidSubAuthority @ 0x1800A8F7C (__imp_load_GetSidSubAuthority.c)
 *     __imp_load_CopySid @ 0x1800A8F8E (__imp_load_CopySid.c)
 *     __imp_load_GetLengthSid @ 0x1800A8FA0 (__imp_load_GetLengthSid.c)
 *     __imp_load_IsValidSid @ 0x1800A8FB2 (__imp_load_IsValidSid.c)
 *     __imp_load_InitializeAcl @ 0x1800A8FC4 (__imp_load_InitializeAcl.c)
 *     __imp_load_AddAce @ 0x1800A8FD6 (__imp_load_AddAce.c)
 *     __imp_load_GetAclInformation @ 0x1800A8FE8 (__imp_load_GetAclInformation.c)
 *     __imp_load_GetSecurityDescriptorOwner @ 0x1800A8FFA (__imp_load_GetSecurityDescriptorOwner.c)
 *     __imp_load_GetSecurityDescriptorGroup @ 0x1800A900C (__imp_load_GetSecurityDescriptorGroup.c)
 *     __imp_load_GetSecurityDescriptorDacl @ 0x1800A901E (__imp_load_GetSecurityDescriptorDacl.c)
 *     __imp_load_SetSecurityDescriptorDacl @ 0x1800A9030 (__imp_load_SetSecurityDescriptorDacl.c)
 *     __imp_load_GetSecurityDescriptorSacl @ 0x1800A9042 (__imp_load_GetSecurityDescriptorSacl.c)
 *     __imp_load_MakeSelfRelativeSD @ 0x1800A9054 (__imp_load_MakeSelfRelativeSD.c)
 *     __imp_load_GetSecurityDescriptorLength @ 0x1800A9066 (__imp_load_GetSecurityDescriptorLength.c)
 *     __imp_load_GetSecurityDescriptorControl @ 0x1800A9078 (__imp_load_GetSecurityDescriptorControl.c)
 *     __imp_load_MakeAbsoluteSD @ 0x1800A908A (__imp_load_MakeAbsoluteSD.c)
 *     __imp_load_InitializeSecurityDescriptor @ 0x1800A909C (__imp_load_InitializeSecurityDescriptor.c)
 *     __imp_load_GetTokenInformation @ 0x1800A973F (__imp_load_GetTokenInformation.c)
 *     __imp_load_CheckTokenMembership @ 0x1800A9C12 (__imp_load_CheckTokenMembership.c)
 *     __imp_load_AllocateAndInitializeSid @ 0x1800A9C36 (__imp_load_AllocateAndInitializeSid.c)
 *     __imp_load_AddAccessAllowedAce @ 0x1800A9C48 (__imp_load_AddAccessAllowedAce.c)
 *     __imp_load_FreeSid @ 0x1800A9C5A (__imp_load_FreeSid.c)
 *     __imp_load_GetAce @ 0x1800A9C6C (__imp_load_GetAce.c)
 *     __imp_load_GetKernelObjectSecurity @ 0x1800A9C7E (__imp_load_GetKernelObjectSecurity.c)
 *     __imp_load_RevertToSelf @ 0x1800A9CA2 (__imp_load_RevertToSelf.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088820 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_security_base_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_security_base_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
