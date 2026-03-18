/*
 * XREFs of Controller_InUseByDebugger @ 0x14003CB78
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400370B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1400379B0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_LPEEnterExitCallback @ 0x140040DF0 (Controller_LPEEnterExitCallback.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x140043830 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

bool __fastcall Controller_InUseByDebugger(_QWORD *a1)
{
  return (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 264))(
                        WdfDriverGlobals,
                        *a1)
                    + 48) & 0x2000000) != 0;
}
