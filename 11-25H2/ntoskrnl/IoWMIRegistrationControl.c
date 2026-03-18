/*
 * XREFs of IoWMIRegistrationControl @ 0x1409B8940
 * Callers:
 *     DifIoWMIRegistrationControlWrapper @ 0x14061F8B0 (DifIoWMIRegistrationControlWrapper.c)
 *     PpmEnableWmiInterface @ 0x14074F964 (PpmEnableWmiInterface.c)
 *     ViDdiDriverEntry @ 0x140B74770 (ViDdiDriverEntry.c)
 *     WmipDriverEntry @ 0x140C2B6E0 (WmipDriverEntry.c)
 *     WheaInitialize @ 0x140C32E30 (WheaInitialize.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     WmipFindRegEntryByDevice @ 0x140464348 (WmipFindRegEntryByDevice.c)
 *     WmipUnreferenceRegEntry @ 0x140471A4C (WmipUnreferenceRegEntry.c)
 *     WmipRegisterDevice @ 0x1409B81FC (WmipRegisterDevice.c)
 *     WmipUpdateRegistration @ 0x1409B86B0 (WmipUpdateRegistration.c)
 *     WmipDeregisterDevice @ 0x140A65774 (WmipDeregisterDevice.c)
 *     WmipSetTraceNotify @ 0x140AA1848 (WmipSetTraceNotify.c)
 */

NTSTATUS __stdcall IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject, ULONG Action)
{
  char v2; // r14
  ULONG v5; // eax
  unsigned int v6; // edi
  ULONG v7; // eax
  ULONG v8; // eax
  ULONG v9; // eax
  ULONG v10; // eax
  NTSTATUS v12; // ebx
  int v13; // ebp
  __int64 RegEntryByDevice; // rbx

  v2 = 0;
  if ( !WmipServiceDeviceObject )
    return -1073741823;
  v5 = Action & 0x7FFFFFFF;
  if ( (Action & 0x80000000) == 0 )
    v5 = Action;
  v6 = ((int)Action >> 31) & 0x80000000;
  if ( (v5 & 0x10000) != 0 )
  {
    v2 = 1;
    v13 = v5 & 0xF00000;
    v5 &= 0xFF0EFFFF;
    v6 |= v13 | 0x10000;
  }
  v7 = v5 - 1;
  if ( !v7 )
  {
    v12 = WmipRegisterDevice(DeviceObject, v6);
    if ( v2 )
      WmipSetTraceNotify(DeviceObject);
    return v12;
  }
  v8 = v7 - 1;
  if ( !v8 )
    return WmipDeregisterDevice(DeviceObject);
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
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
    return WmipUpdateRegistration((__int64)DeviceObject);
  }
  else
  {
    v12 = WmipDeregisterDevice(DeviceObject);
    if ( v12 < 0 )
      return v12;
    return WmipRegisterDevice(DeviceObject, v6);
  }
}
