/*
 * XREFs of ?UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListener@@@Z @ 0x18008458C
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18006AD70 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ??1CMagnifierControl@@EEAA@XZ @ 0x1800C8A00 (--1CMagnifierControl@@EEAA@XZ.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x1800C8D2C (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___ @ 0x1800845B8 (CWindowList--ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___.c)
 */

void __fastcall CWindowList::UnregisterForSoftwareCursorChangeNotification(
        CWindowList *this,
        struct ISoftwareCursorChangeListener *a2)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF
  struct ISoftwareCursorChangeListener *v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  v2[1] = this;
  v2[0] = &v3;
  CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___(this, v2);
}
