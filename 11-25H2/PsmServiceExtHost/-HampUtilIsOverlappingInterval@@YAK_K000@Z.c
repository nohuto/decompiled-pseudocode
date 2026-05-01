/*
 * XREFs of ?HampUtilIsOverlappingInterval@@YAK_K000@Z @ 0x18005ABE8
 * Callers:
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800165E0 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppComputeUsageInfo@@YAKPEAU_HAM_APPLICATION@@PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x18005A964 (-HampAppComputeUsageInfo@@YAKPEAU_HAM_APPLICATION@@PEAU_HAM_APPLICATION_USAGE_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampUtilIsOverlappingInterval(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  if ( a1 > a2 )
  {
    if ( a3 <= a4 )
      return a1 <= a4;
  }
  else if ( a3 <= a4 && a1 > a4 || a3 > a2 )
  {
    return 0LL;
  }
  return 1LL;
}
