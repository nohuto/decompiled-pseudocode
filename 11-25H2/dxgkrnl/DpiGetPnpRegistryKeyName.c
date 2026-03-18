/*
 * XREFs of DpiGetPnpRegistryKeyName @ 0x140384590
 * Callers:
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x140185F08 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401C8D58 (-InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14036DEB0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     DpiOpenPnpRegistryKey @ 0x1403844B0 (DpiOpenPnpRegistryKey.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x14040F2D4 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetPnpRegistryKeyName(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 64);
  switch ( a2 )
  {
    case 1:
      v4 = v3 + 512;
      goto LABEL_4;
    case 2:
      v4 = v3 + 528;
LABEL_4:
      *a3 = v4;
      return 0LL;
    case 3:
      v4 = *(_QWORD *)(v3 + 40) + 40LL;
      goto LABEL_4;
  }
  WdLogSingleEntry1(2LL, a2);
  result = 3221225485LL;
  WdLogGlobalForLineNumber = 3855;
  return result;
}
