/*
 * XREFs of SdbpGetMergeSdbsSupported @ 0x180093EF8
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x180092574 (SdbGetMergeRedirectPath.c)
 *     SdbGetMergeStubPath @ 0x180092724 (SdbGetMergeStubPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x18009321C (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x180093640 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpGetMergeSdbsDisabled @ 0x180093DF4 (SdbpGetMergeSdbsDisabled.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 SdbpGetMergeSdbsSupported()
{
  ULONGLONG v1; // rax
  ULONGLONG v2; // rax
  ULONGLONG v3; // rax
  NTSTATUS v4; // eax
  _OSVERSIONINFOEXW VersionInfo; // [rsp+30h] [rbp-138h] BYREF

  if ( dword_1800EA600 )
    return (unsigned int)dword_1800E875C;
  memset_0(&VersionInfo.dwPlatformId, 0, 0x10CuLL);
  VersionInfo.dwMinorVersion = 0;
  VersionInfo.dwOSVersionInfoSize = 284;
  VersionInfo.dwMajorVersion = 10;
  VersionInfo.dwBuildNumber = 22621;
  v1 = VerSetConditionMask(0LL, 2u, 3u);
  v2 = VerSetConditionMask(v1, 1u, 3u);
  v3 = VerSetConditionMask(v2, 4u, 3u);
  dword_1800EA600 = 1;
  v4 = RtlVerifyVersionInfo(&VersionInfo, 7u, v3);
  if ( v4 >= 0 )
    return 1LL;
  if ( v4 != -1073741735 )
    AslLogCallPrintf(1LL);
  dword_1800E875C = 0;
  return 0LL;
}
