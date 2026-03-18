/*
 * XREFs of FsRtlGetSupportedFeatures @ 0x1404699D0
 * Callers:
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     IopQueryInformation @ 0x1409D4F90 (IopQueryInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsRtlGetSupportedFeatures(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = 0;
  if ( FltMgrCallbacks )
    return guard_dispatch_icall_no_overrides(a1, a2, FltMgrCallbacks, a4);
  return result;
}
