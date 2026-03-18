/*
 * XREFs of ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x14019494C
 * Callers:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x14020EEF8 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     HDEV_DeleteRfontsAndUnloadDeviceFonts @ 0x14025AFF0 (HDEV_DeleteRfontsAndUnloadDeviceFonts.c)
 *     vUnlinkEudcRFONTs @ 0x14030CF78 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x14030D064 (vUnlinkEudcRFONTsAndPFEs.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x140311B7C (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

DEVICE_PFTOBJ *__fastcall DEVICE_PFTOBJ::DEVICE_PFTOBJ(DEVICE_PFTOBJ *this, __int64 a2)
{
  *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96) + 20424LL);
  return this;
}
