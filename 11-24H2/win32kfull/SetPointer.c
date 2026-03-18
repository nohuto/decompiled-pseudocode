/*
 * XREFs of SetPointer @ 0x140131500
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     ChangeComposableCursor @ 0x14020E090 (ChangeComposableCursor.c)
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x14021E9EC (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     SetMouseTrails @ 0x140239574 (SetMouseTrails.c)
 *     xxxRemoteReconnect @ 0x14024FFF8 (xxxRemoteReconnect.c)
 *     RemoteShadowStart @ 0x1402B6EFC (RemoteShadowStart.c)
 *     ?SetMouseTrails@CursorApiRouter@@QEBAXI@Z @ 0x1402DAEC8 (-SetMouseTrails@CursorApiRouter@@QEBAXI@Z.c)
 * Callees:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140131520 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

__int64 __fastcall SetPointer(__int64 a1)
{
  LOBYTE(a1) = (_DWORD)a1 != 0;
  return SetPointerInternal(a1, 6LL);
}
