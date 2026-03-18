/*
 * XREFs of FsRtlGetSupportedFeatures @ 0x14046B280
 * Callers:
 *     IopQueryInformation @ 0x140861A40 (IopQueryInformation.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsRtlGetSupportedFeatures(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = 0;
  if ( FltMgrCallbacks )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
