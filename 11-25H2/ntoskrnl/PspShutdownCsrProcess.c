/*
 * XREFs of PspShutdownCsrProcess @ 0x1407635E4
 * Callers:
 *     PspTerminateSiloSubsystemProcesses @ 0x140763CE8 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     RtlStringCchPrintfW @ 0x140476E64 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x14069B1C0 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x14069B300 (ZwSetEvent.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenEvent @ 0x14069B940 (ZwOpenEvent.c)
 *     ZwCreateEvent @ 0x14069BA40 (ZwCreateEvent.c)
 *     PsTerminateProcess @ 0x14091F3D4 (PsTerminateProcess.c)
 *     PsInvokeWin32Callout @ 0x140961150 (PsInvokeWin32Callout.c)
 */

NTSTATUS __fastcall PspShutdownCsrProcess(struct _LIST_ENTRY *a1, unsigned int a2, struct _KPROCESS *a3)
{
  struct _LIST_ENTRY *v4; // rdi
  int v5; // edi
  HANDLE v6; // rcx
  NTSTATUS result; // eax
  unsigned int v8; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE EventHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[120]; // [rsp+C0h] [rbp-40h] BYREF

  Handle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  EventHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v8 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  DestinationString = 0LL;
  v4 = PsAttachSiloToCurrentThread(a1);
  RtlStringCchPrintfW(pszDest, 0x78uLL, L"\\Sessions\\%d\\BaseNamedObjects\\EventShutdownCSRSS", v8);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ZwOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
  RtlStringCchPrintfW(pszDest, 0x78uLL, L"\\Sessions\\%d\\BaseNamedObjects\\EventRitExited", v8);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) < 0 )
    Handle = 0LL;
  PsDetachSiloFromCurrentThread(v4);
  KeStackAttachProcess(a3, &ApcState);
  v5 = PsInvokeWin32Callout(31LL, 0LL, 1LL, &v8);
  KiUnstackDetachProcess((__int64)&ApcState, 0LL);
  if ( EventHandle )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
    EventHandle = 0LL;
  }
  v6 = Handle;
  if ( Handle )
  {
    if ( v5 >= 0 )
    {
      ZwWaitForSingleObject(Handle, 0, 0LL);
      v6 = Handle;
    }
    ZwClose(v6);
    Handle = 0LL;
  }
  result = PsTerminateProcess(a3, 3221226219LL);
  if ( result >= 0 )
    return KeWaitForSingleObject(a3, Executive, 0, 0, 0LL);
  return result;
}
