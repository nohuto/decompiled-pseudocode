/*
 * XREFs of ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1402E5AAC
 * Callers:
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x14004324C (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1402E5640 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402E58BC (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IterateDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1402FD75C (-IterateDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@.c)
 *     DxgkAcquireHandleDataCB @ 0x1403284D0 (DxgkAcquireHandleDataCB.c)
 *     ?TryRepinAllDirectFlipAllocations@DXGDEVICE@@QEAAXXZ @ 0x140339500 (-TryRepinAllDirectFlipAllocations@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkReferenceDxgResource(struct _EX_RUNDOWN_REF *a1)
{
  if ( !ExAcquireRundownProtection(a1 + 9) )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 14173;
  }
}
