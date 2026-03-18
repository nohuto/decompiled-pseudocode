/*
 * XREFs of ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C008A308
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C002D4B0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C008A28C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00F0570 (zzzUpdateCursorImage.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0082974 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0086A4C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CCursorSizes::GetCurrentCursorSize(CCursorSizes *this)
{
  CCursorSizes *v1; // rdi
  CPushLock *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = gpCursorSizes;
  v2 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
  LODWORD(v1) = *(_DWORD *)v1;
  CPushLock::ReleaseLock(v2, v3, v4);
  return (unsigned int)v1;
}
