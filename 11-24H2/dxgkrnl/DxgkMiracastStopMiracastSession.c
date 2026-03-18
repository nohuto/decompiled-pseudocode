/*
 * XREFs of DxgkMiracastStopMiracastSession @ 0x140081D2C
 * Callers:
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1401AEBC0 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14007F8A0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x14007FAF0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x14024BA4C (DpiMiracastGetDeviceContextFromName.c)
 */

__int64 __fastcall DxgkMiracastStopMiracastSession(const WCHAR *a1, struct _KEVENT *a2)
{
  char *DeviceContextFromName; // rax
  int *v4; // rdi
  unsigned int v6; // ebx

  DeviceContextFromName = (char *)DpiMiracastGetDeviceContextFromName(a1);
  v4 = (int *)DeviceContextFromName;
  if ( DeviceContextFromName )
  {
    v6 = DpiMiracastStopMiracastSessionSync(DeviceContextFromName, 0, 0LL, a2, 0x80u, 0);
    DpiMiracastReleaseMiracastDeviceContext(v4, (unsigned int)v4);
    return v6;
  }
  else
  {
    WdLogSingleEntry1(2LL, -2147483642LL);
    WdLogGlobalForLineNumber = 6923;
    if ( a2 )
      ObfDereferenceObject(a2);
    return 2147483654LL;
  }
}
