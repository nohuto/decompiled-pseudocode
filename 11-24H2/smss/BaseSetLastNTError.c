/*
 * XREFs of BaseSetLastNTError @ 0x14001EE2C
 * Callers:
 *     BasepGetFileNameInformation @ 0x14001AE8C (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x14001AFB0 (BasepGetObjectNTName.c)
 *     DeviceIoControl @ 0x14001B844 (DeviceIoControl.c)
 *     InternalGetFileAttributesW @ 0x14001C06C (InternalGetFileAttributesW.c)
 *     CreateFileInternal @ 0x14001C20C (CreateFileInternal.c)
 *     CloseHandle @ 0x14001CC10 (CloseHandle.c)
 *     BasepOpenParentDirectoryNoRedirection @ 0x14001D77C (BasepOpenParentDirectoryNoRedirection.c)
 *     SetErrorMode @ 0x14001DB90 (SetErrorMode.c)
 *     FindClose @ 0x14001DCE4 (FindClose.c)
 *     InternalFindFirstFileExW @ 0x14001DDF8 (InternalFindFirstFileExW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BaseSetLastNTError(NTSTATUS a1)
{
  ULONG v1; // ebx

  v1 = RtlNtStatusToDosError(a1);
  RtlSetLastWin32Error(v1);
  return v1;
}
