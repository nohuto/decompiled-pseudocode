/*
 * XREFs of RIMUpdateDeviceForInputMode @ 0x1400B0C70
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x14005432C (RIMHandlePowerDeviceArrival.c)
 *     rimDoRimDevChange @ 0x14005B4D0 (rimDoRimDevChange.c)
 *     RIMSetDeviceInputMode @ 0x14017D314 (RIMSetDeviceInputMode.c)
 * Callees:
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400A89C8 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMConfigurePointerDevice @ 0x1400A8E7C (RIMConfigurePointerDevice.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1400B0D94 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDevicePDOSuppression @ 0x140144600 (RIMSetDevicePDOSuppression.c)
 *     RIMConfigureDeviceFeedback @ 0x1401DB3F0 (RIMConfigureDeviceFeedback.c)
 *     RIMConfigureTouchpadClickForceSensitivity @ 0x1401DB850 (RIMConfigureTouchpadClickForceSensitivity.c)
 */

__int64 __fastcall RIMUpdateDeviceForInputMode(struct RIMDEV *a1, int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rsi

  if ( (*((_DWORD *)a1 + 46) & 0x80u) != 0 && (*((_DWORD *)a1 + 42) & 0x2000) == 0 )
  {
    v4 = *((_QWORD *)a1 + 40);
    if ( !a2 )
    {
      RIMConfigurePointerDevice(*((_QWORD *)a1 + 40), (__int64)a1, *((_QWORD *)a1 + 55));
      if ( *(_DWORD *)(*((_QWORD *)a1 + 57) + 24LL) == 7 )
      {
        RIMApiSetSetUserPTPEnabledPreference((__int64)a1, *((_QWORD *)a1 + 55), v4);
        UserSessionState = W32GetUserSessionState(v7);
        if ( (*((_DWORD *)a1 + 46) & 0x400) != 0 )
          RIMConfigureDeviceFeedback(a1);
        if ( (*((_DWORD *)a1 + 46) & 0x800) != 0 )
          RIMConfigureTouchpadClickForceSensitivity(a1, *(_DWORD *)(UserSessionState + 16800));
      }
    }
    RIMSendLatencyMgtDeviceRequest(a1);
  }
  if ( *(_BYTE *)W32GetUserGdiSessionState() || (*((_DWORD *)a1 + 43) & 4) != 0 )
  {
    LOBYTE(v5) = a2 == 1;
    RIMSetDevicePDOSuppression(a1, v5);
  }
  return 0LL;
}
