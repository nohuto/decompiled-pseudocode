/*
 * XREFs of ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C01389B0
 * Callers:
 *     ?PushForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z @ 0x1C0012868 (-PushForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z.c)
 *     ?OnDaemonTimer@ForegroundLaunch@@YAXXZ @ 0x1C00738C0 (-OnDaemonTimer@ForegroundLaunch@@YAXXZ.c)
 *     ?OnDaemonTimerRateChanged@ForegroundLaunch@@YAXW4RitTimerRate@@@Z @ 0x1C0097060 (-OnDaemonTimerRateChanged@ForegroundLaunch@@YAXW4RitTimerRate@@@Z.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 *     GreSelectFontInternal @ 0x1C011A874 (GreSelectFontInternal.c)
 *     GreSelectFont @ 0x1C011C490 (GreSelectFont.c)
 *     GreDeleteServerMetaFile @ 0x1C02D2218 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02D23E0 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     <none>
 */

bool __fastcall HmgLockResultBase<META>::operator bool(_QWORD *a1)
{
  return *a1 != 0LL;
}
