/*
 * XREFs of SetPointer @ 0x1C002D490
 * Callers:
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x1C001D788 (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     zzzEnableDwmPointerSupport @ 0x1C001FFBC (zzzEnableDwmPointerSupport.c)
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 *     UserResetPointer @ 0x1C009C820 (UserResetPointer.c)
 *     SetMouseTrails @ 0x1C00D8380 (SetMouseTrails.c)
 *     xxxRemoteReconnect @ 0x1C0131F08 (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C0135180 (xxxUserResetDisplayDevice.c)
 *     ChangeComposableCursor @ 0x1C01A87C0 (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C0202970 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C0202B7C (RemoteShadowStart.c)
 * Callees:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C002D4B0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

__int64 __fastcall SetPointer(__int64 a1)
{
  LOBYTE(a1) = (_DWORD)a1 != 0;
  return SetPointerInternal(a1, 6LL);
}
