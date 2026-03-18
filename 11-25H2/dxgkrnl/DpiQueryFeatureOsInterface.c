/*
 * XREFs of DpiQueryFeatureOsInterface @ 0x140247358
 * Callers:
 *     DpiQueryFeatureInterface @ 0x14007C030 (DpiQueryFeatureInterface.c)
 * Callees:
 *     ?DxgkQueryFeatureOsInterface@@YAJPEBUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@GPEAGPEAX@Z @ 0x1402815B4 (-DxgkQueryFeatureOsInterface@@YAJPEBUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@GPEAGPEAX@Z.c)
 */

__int64 __fastcall DpiQueryFeatureOsInterface(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 && *(_DWORD *)(v1 + 16) == 1953656900 && *(_DWORD *)(v1 + 20) == 2 )
    return DxgkQueryFeatureOsInterface(*(_QWORD *)(v1 + 5832));
  WdLogSingleEntry1(2LL, -1073741811LL);
  result = 3221225485LL;
  WdLogGlobalForLineNumber = 225;
  return result;
}
