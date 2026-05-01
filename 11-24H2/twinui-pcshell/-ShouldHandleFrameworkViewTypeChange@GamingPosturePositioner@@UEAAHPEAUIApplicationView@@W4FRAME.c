/*
 * XREFs of ?ShouldHandleFrameworkViewTypeChange@GamingPosturePositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180506FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GamingPosturePositioner::ShouldHandleFrameworkViewTypeChange(__int64 a1, __int64 a2, int a3)
{
  if ( !*(_BYTE *)(a1 + 768) )
    return 0LL;
  return !a3 || a3 == 6;
}
