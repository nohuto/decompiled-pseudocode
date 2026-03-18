/*
 * XREFs of RegisterCDROMNotify @ 0x140279BF4
 * Callers:
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x14024FFF8 (xxxRemoteReconnect.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 */

int RegisterCDROMNotify()
{
  unsigned __int64 Context; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  Context = (unsigned int)W32GetCurrentWin32kSessionId();
  UserSessionState = W32GetUserSessionState(v2, v1);
  if ( !*(_QWORD *)(UserSessionState + 70136) )
  {
    v6 = W32GetUserSessionState(v5, v4);
    LODWORD(UserSessionState) = IoRegisterPlugPlayNotification(
                                  EventCategoryDeviceInterfaceChange,
                                  1u,
                                  &GUID_DEVINTERFACE_CDROM,
                                  gpWin32kDriverObject,
                                  (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DeviceClassCDROMNotify,
                                  (PVOID)Context,
                                  (PVOID *)(v6 + 70136));
  }
  return UserSessionState;
}
