/*
 * XREFs of ?IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402CA038
 * Callers:
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1402C9FC8 (DxgkIsAdapterCoreSyncAcquired.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

BOOLEAN __fastcall DXGADAPTER::IsCoreSyncAcquired(DXGADAPTER *a1, int a2)
{
  char v2; // di
  __int64 v5; // rbx

  v2 = 0;
  if ( a2 == 1 )
    return DXGADAPTER::IsCoreResourceSharedOwner(a1);
  if ( a2 != 2 && a2 != 5 )
  {
    v5 = a2;
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 3512;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid synchronization level 0x%I64x",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    return v2;
  }
  return DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1);
}
