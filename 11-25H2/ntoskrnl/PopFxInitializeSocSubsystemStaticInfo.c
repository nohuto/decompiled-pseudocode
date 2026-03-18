/*
 * XREFs of PopFxInitializeSocSubsystemStaticInfo @ 0x140741BC8
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1405CCB48 (PopFxEnablePlatformStates.c)
 * Callees:
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     RtlStringCchCopyW @ 0x14043FDBC (RtlStringCchCopyW.c)
 *     wcsncmp @ 0x1404FD850 (wcsncmp.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14074368C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     RtlHashUnicodeString @ 0x1409823A0 (RtlHashUnicodeString.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14098280C (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxInitializeSocSubsystemStaticInfo(int a1)
{
  __int128 v3; // [rsp+38h] [rbp-D0h]
  _BYTE v4[32]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v5; // [rsp+68h] [rbp-A0h]
  __int64 v6; // [rsp+74h] [rbp-94h]
  ULONG_PTR BugCheckParameter4; // [rsp+7Ch] [rbp-8Ch]
  wchar_t pszDest[64]; // [rsp+88h] [rbp-80h] BYREF

  v5 = 0LL;
  v3 = 0LL;
  memset(v4, 0, sizeof(v4));
  memset_0(pszDest, 0, sizeof(pszDest));
  if ( PopFxProcessorPlugin )
  {
    HIDWORD(v6) = a1;
    BugCheckParameter4 = 0LL;
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(36LL) )
      PopFxBugCheck(0x706uLL, 0x24uLL, 0x53436F75uLL, 0LL);
  }
  return 3221225474LL;
}
