/*
 * XREFs of IoWMIRegistrationControl @ 0x140A49C40
 * Callers:
 *     DifIoWMIRegistrationControlWrapper @ 0x140629E30 (DifIoWMIRegistrationControlWrapper.c)
 *     PpmEnableWmiInterface @ 0x14075B214 (PpmEnableWmiInterface.c)
 *     ViDdiDriverEntry @ 0x140B86750 (ViDdiDriverEntry.c)
 *     WmipDriverEntry @ 0x140C3EB10 (WmipDriverEntry.c)
 *     WheaInitialize @ 0x140C4624C (WheaInitialize.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     WmipFindRegEntryByDevice @ 0x14045A0A4 (WmipFindRegEntryByDevice.c)
 *     WmipUnreferenceRegEntry @ 0x14046A188 (WmipUnreferenceRegEntry.c)
 *     WmipRegisterDevice @ 0x140A49D98 (WmipRegisterDevice.c)
 *     WmipUpdateRegistration @ 0x140A49F68 (WmipUpdateRegistration.c)
 *     WmipDeregisterDevice @ 0x140A61874 (WmipDeregisterDevice.c)
 *     WmipSetTraceNotify @ 0x140AA1CE8 (WmipSetTraceNotify.c)
 */

NTSTATUS __stdcall IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject, ULONG Action)
{
  char v2; // r14
  ULONG v5; // eax
  ULONG v6; // eax
  ULONG v7; // eax
  ULONG v8; // eax
  ULONG v9; // eax
  NTSTATUS v11; // ebx
  __int64 RegEntryByDevice; // rbx

  v2 = 0;
  if ( !WmipServiceDeviceObject )
    return -1073741823;
  v5 = Action & 0x7FFFFFFF;
  if ( (Action & 0x80000000) == 0 )
    v5 = Action;
  if ( (v5 & 0x10000) != 0 )
  {
    v2 = 1;
    v5 &= 0xFF0EFFFF;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v11 = WmipRegisterDevice(DeviceObject);
    if ( v2 )
      WmipSetTraceNotify(DeviceObject);
    return v11;
  }
  v7 = v6 - 1;
  if ( !v7 )
    return WmipDeregisterDevice(DeviceObject);
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        return -1073741811;
      RegEntryByDevice = WmipFindRegEntryByDevice((__int64)DeviceObject);
      if ( !RegEntryByDevice )
        return -1073741811;
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      _InterlockedOr((volatile signed __int32 *)(RegEntryByDevice + 48), 0x20000000u);
      KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
      WmipUnreferenceRegEntry(RegEntryByDevice);
      return 0;
    }
    return WmipUpdateRegistration(DeviceObject);
  }
  else
  {
    v11 = WmipDeregisterDevice(DeviceObject);
    if ( v11 < 0 )
      return v11;
    return WmipRegisterDevice(DeviceObject);
  }
}
