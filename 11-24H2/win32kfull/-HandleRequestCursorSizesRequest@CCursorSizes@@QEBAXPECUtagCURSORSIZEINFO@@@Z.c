/*
 * XREFs of ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPECUtagCURSORSIZEINFO@@@Z @ 0x14027130C
 * Callers:
 *     NtUserGetRequiredCursorSizes @ 0x140079B80 (NtUserGetRequiredCursorSizes.c)
 * Callees:
 *     ?W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140076B14 (-W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140076B48 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

void __fastcall CCursorSizes::HandleRequestCursorSizesRequest(
        CCursorSizes *this,
        volatile struct tagCURSORSIZEINFO *a2)
{
  W32AcquirePushLockShared((CCursorSizes *)((char *)this + 64));
  RtlCopyVolatileMemory(a2, (char *)this + 24, 0x28uLL);
  CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
}
