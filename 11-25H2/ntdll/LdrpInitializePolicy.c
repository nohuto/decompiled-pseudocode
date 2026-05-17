/*
 * XREFs of LdrpInitializePolicy @ 0x1800FA190
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrSetDllDirectory @ 0x1800804E0 (LdrSetDllDirectory.c)
 *     AppModelPolicy_GetPolicy_Internal @ 0x1800FA370 (AppModelPolicy_GetPolicy_Internal.c)
 */

char LdrpInitializePolicy()
{
  struct _PEB *v0; // rbx
  _UNICODE_STRING *p_DllPath; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  __int128 v3; // xmm0
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 v10; // [rsp+58h] [rbp+28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF

  v0 = NtCurrentPeb();
  v9 = 0;
  p_DllPath = &v0->ProcessParameters->DllPath;
  LdrpAppPackagesPath = 0uLL;
  LdrpOriginalAppPackagesPath = 0uLL;
  LOBYTE(ProcessParameters) = v0->BitField;
  if ( ((unsigned __int8)ProcessParameters & 0x10) != 0 && p_DllPath->Length )
  {
    v3 = (__int128)*p_DllPath;
    LdrpPolicyBits = 41;
    v10 = 0LL;
    v11 = 0LL;
    LdrpAppPackagesPath = v3;
    LdrpOriginalAppPackagesPath = v3;
    if ( (int)AppModelPolicy_GetPolicy_Internal(
                (_DWORD)p_DllPath,
                4,
                (unsigned int)&v9,
                (unsigned int)&v11,
                (__int64)&v10) < 0
      || v9 == 262145 )
    {
      LdrpDefaultDllDirectories = 4096;
    }
    else
    {
      LdrpPolicyBits &= ~1u;
    }
    v10 = 0LL;
    v11 = 0LL;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v4, 7, (unsigned int)&v9, (unsigned int)&v11, (__int64)&v10) >= 0
      && v9 == 458753 )
    {
      LdrpPolicyBits |= 2u;
    }
    v10 = 0LL;
    v11 = 0LL;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v5, 19, (unsigned int)&v9, (unsigned int)&v11, (__int64)&v10) >= 0
      && v9 == 1245185 )
    {
      LdrpPolicyBits |= 0x40u;
    }
    v10 = 0LL;
    v11 = 0LL;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v6, 32, (unsigned int)&v9, (unsigned int)&v11, (__int64)&v10) >= 0
      && v9 == 2097153 )
    {
      LdrpPolicyBits |= 4u;
    }
    v10 = 0LL;
    v11 = 0LL;
    LODWORD(ProcessParameters) = AppModelPolicy_GetPolicy_Internal(
                                   v7,
                                   54,
                                   (unsigned int)&v9,
                                   (unsigned int)&v11,
                                   (__int64)&v10) | 0x10000000;
    if ( (int)ProcessParameters >= 0 && v9 == 3538945 )
    {
      ProcessParameters = v0->ProcessParameters;
      ProcessParameters->Flags |= 0x4000000u;
    }
  }
  else if ( ((unsigned __int8)ProcessParameters & 2) != 0 )
  {
    p_DllPath->Length = 0;
  }
  else if ( p_DllPath->Length )
  {
    LOBYTE(ProcessParameters) = LdrSetDllDirectory((__int64)p_DllPath);
  }
  return (char)ProcessParameters;
}
