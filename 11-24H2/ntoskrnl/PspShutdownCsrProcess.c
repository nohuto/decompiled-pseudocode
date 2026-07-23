/*
 * XREFs of PspShutdownCsrProcess @ 0x1407731D4
 * Callers:
 *     PspTerminateSiloSubsystemProcesses @ 0x1407738D8 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1406A7430 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1406A7570 (ZwSetEvent.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenEvent @ 0x1406A7BB0 (ZwOpenEvent.c)
 *     ZwCreateEvent @ 0x1406A7CB0 (ZwCreateEvent.c)
 *     PsTerminateProcess @ 0x1408F32A4 (PsTerminateProcess.c)
 *     PsInvokeWin32Callout @ 0x1409A1420 (PsInvokeWin32Callout.c)
 */

NTSTATUS __fastcall PspShutdownCsrProcess(struct _LIST_ENTRY *a1, unsigned int a2, struct _KPROCESS *a3)
{
  struct _LIST_ENTRY *v4; // rdi
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  HANDLE v8; // rcx
  NTSTATUS result; // eax
  unsigned int v10; // [rsp+30h] [rbp-D0h] BYREF
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
  v10 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  DestinationString = 0LL;
  v4 = PsAttachSiloToCurrentThread(a1);
  RtlStringCchPrintfW(pszDest, 0x78uLL, L"\\Sessions\\%d\\BaseNamedObjects\\EventShutdownCSRSS", v10);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ZwOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
  RtlStringCchPrintfW(pszDest, 0x78uLL, L"\\Sessions\\%d\\BaseNamedObjects\\EventRitExited", v10);
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
  v5 = PsInvokeWin32Callout(31LL, 0LL, 1LL, &v10);
  KiUnstackDetachProcess((__int64)&ApcState, 0, v6, v7);
  if ( EventHandle )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
    EventHandle = 0LL;
  }
  v8 = Handle;
  if ( Handle )
  {
    if ( v5 >= 0 )
    {
      ZwWaitForSingleObject(Handle, 0, 0LL);
      v8 = Handle;
    }
    ZwClose(v8);
    Handle = 0LL;
  }
  result = PsTerminateProcess(a3, 3221226219LL);
  if ( result >= 0 )
    return KeWaitForSingleObject(a3, Executive, 0, 0, 0LL);
  return result;
}
