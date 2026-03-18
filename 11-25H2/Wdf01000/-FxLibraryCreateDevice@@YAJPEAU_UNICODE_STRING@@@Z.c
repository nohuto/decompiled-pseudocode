/*
 * XREFs of ?FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z @ 0x14008536C
 * Callers:
 *     DriverEntry @ 0x140085A60 (DriverEntry.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x140085E74 (RtlUnicodeStringPrintf.c)
 */

int __fastcall FxLibraryCreateDevice(_UNICODE_STRING *DeviceName)
{
  unsigned int v2; // ebx
  __int64 v3; // r9
  int result; // eax
  NTSTATUS Device; // eax
  _KEVENT *Pool2; // rax
  FxCompanionLibrary *v7; // rbx
  int v8; // ebx

  v2 = 0;
  while ( 1 )
  {
    v3 = v2++;
    result = RtlUnicodeStringPrintf(DeviceName, L"%s%d", L"\\Device\\KMDF", v3);
    if ( result < 0 )
      break;
    Device = IoCreateDevice(
               FxLibraryGlobals.DriverObject,
               0,
               DeviceName,
               0x22u,
               0,
               0,
               &FxLibraryGlobals.LibraryDeviceObject);
    if ( Device != -1073741771 )
    {
      if ( Device >= 0 )
        FxLibraryGlobals.LibraryDeviceObject->Flags &= ~0x80u;
      Pool2 = (_KEVENT *)ExAllocatePool2(64LL, 56LL, 1917089862LL);
      v7 = (FxCompanionLibrary *)Pool2;
      if ( Pool2 )
      {
        Pool2[1].Header.LockNV = 0;
        Pool2[1].Header.WaitListHead.Flink = 0LL;
        KeInitializeEvent(Pool2, SynchronizationEvent, 1u);
        v7->m_RdNonPnPDevice = 0LL;
        v7->m_RdNonPnPFile = 0LL;
      }
      else
      {
        v7 = 0LL;
      }
      FxLibraryGlobals.CompanionLibrary = v7;
      if ( v7 )
        return 0;
      v8 = -1073741801;
      if ( WdfLdrDbgPrintOn )
      {
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "ERROR: Initializing companion library failed 0x%x\n", -1073741801);
      }
      return v8;
    }
  }
  return result;
}
