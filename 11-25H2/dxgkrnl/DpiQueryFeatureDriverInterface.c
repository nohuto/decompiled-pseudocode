/*
 * XREFs of DpiQueryFeatureDriverInterface @ 0x1402472A0
 * Callers:
 *     ?QueryFeatureInterface@DXGADAPTER@@QEAAJW4_DXGK_FEATURE_ID@@GGPEAX@Z @ 0x140191DC0 (-QueryFeatureInterface@DXGADAPTER@@QEAAJW4_DXGK_FEATURE_ID@@GGPEAX@Z.c)
 *     DpiGetAdapterInfo @ 0x14022F500 (DpiGetAdapterInfo.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DxgkQueryFeatureDriverInterface@@YAJPEBUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@GGPEAX@Z @ 0x140281408 (-DxgkQueryFeatureDriverInterface@@YAJPEBUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@GGPEAX@Z.c)
 */

__int64 __fastcall DpiQueryFeatureDriverInterface(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        void *a5)
{
  __int64 v9; // rcx
  __int64 result; // rax

  memset(a5, 0, a4);
  v9 = *(_QWORD *)(a1 + 64);
  if ( v9 && *(_DWORD *)(v9 + 16) == 1953656900 && *(_DWORD *)(v9 + 20) == 2 )
    return DxgkQueryFeatureDriverInterface(*(_QWORD *)(v9 + 5832), a2, a3, a4, a5);
  WdLogSingleEntry1(2LL, -1073741811LL);
  result = 3221225485LL;
  WdLogGlobalForLineNumber = 196;
  return result;
}
