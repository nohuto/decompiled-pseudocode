/*
 * XREFs of ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140077EA8
 * Callers:
 *     NtUserGetCursorFrameInfo @ 0x140076D90 (NtUserGetCursorFrameInfo.c)
 *     NtUserDrawIconEx @ 0x140076F70 (NtUserDrawIconEx.c)
 *     NtUserGetIconInfo @ 0x1400779B0 (NtUserGetIconInfo.c)
 *     NtUserGetIconSize @ 0x1400798F0 (NtUserGetIconSize.c)
 * Callees:
 *     ?W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140076B14 (-W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140076B48 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x140077F34 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     GetCursorSizesIndexFromDpi @ 0x140078FDC (GetCursorSizesIndexFromDpi.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 */

struct tagCURSOR *__fastcall GetVirtualizedDpiCursor(struct tagCURSOR *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagCURSOR *result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int DpiForSystem; // edi
  int v11; // edi

  if ( ShouldVirtualizeIconCursorSize(a1) )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 36400);
    DpiForSystem = GetDpiForSystem(v7, v6, v8, v9);
    W32AcquirePushLockShared((struct W32_PUSH_LOCK *)(v5 + 64));
    v11 = *(_DWORD *)(v5 + 8LL * (unsigned int)GetCursorSizesIndexFromDpi(DpiForSystem) + 28);
    CPushLock::ReleaseLock((CPushLock *)(v5 + 64));
    for ( result = (struct tagCURSOR *)*((_QWORD *)a1 + 6); result; result = (struct tagCURSOR *)*((_QWORD *)result + 5) )
    {
      if ( *((_DWORD *)result + 19) == v11 )
        return result;
    }
  }
  return a1;
}
