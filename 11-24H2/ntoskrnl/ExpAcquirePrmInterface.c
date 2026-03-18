/*
 * XREFs of ExpAcquirePrmInterface @ 0x1407BF2A8
 * Callers:
 *     ExpPrmNotifyInterfaceChange @ 0x1407BF3E0 (ExpPrmNotifyInterfaceChange.c)
 *     ExpPrmTargetDeviceChangeCallback @ 0x1407BF4D0 (ExpPrmTargetDeviceChangeCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     RtlUnicodeStringCopy @ 0x1403E4550 (RtlUnicodeStringCopy.c)
 *     ExpQueryPrmInterface @ 0x1407BF618 (ExpQueryPrmInterface.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     IoGetDeviceObjectPointer @ 0x140967A30 (IoGetDeviceObjectPointer.c)
 *     IoRegisterPlugPlayNotification @ 0x1409ED860 (IoRegisterPlugPlayNotification.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpAcquirePrmInterface(UNICODE_STRING *SourceString, char a2, void *a3)
{
  NTSTATUS DeviceObjectPointer; // eax
  PDEVICE_OBJECT *v7; // rdi
  NTSTATUS PrmInterface; // ebx
  unsigned __int16 v9; // bx
  PDEVICE_OBJECT v11; // [rsp+40h] [rbp-28h] BYREF
  PVOID EventCategoryData; // [rsp+88h] [rbp+20h] BYREF

  EventCategoryData = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(SourceString, 0x1F0000u, (PFILE_OBJECT *)&EventCategoryData, &v11);
  v7 = (PDEVICE_OBJECT *)EventCategoryData;
  PrmInterface = DeviceObjectPointer;
  if ( DeviceObjectPointer >= 0 )
  {
    if ( a2 )
    {
      v9 = SourceString->Length + 2;
      UnicodeString.Buffer = (wchar_t *)ExAllocatePool2(0x40uLL);
      if ( !UnicodeString.Buffer )
      {
        PrmInterface = -1073741670;
        goto LABEL_8;
      }
      UnicodeString.Length = 0;
      UnicodeString.MaximumLength = v9;
      RtlUnicodeStringCopy(&UnicodeString, SourceString);
    }
    PrmInterface = IoRegisterPlugPlayNotification(
                     EventCategoryTargetDeviceChange,
                     0,
                     v7,
                     DriverObject,
                     ExpPrmTargetDeviceChangeCallback,
                     0LL,
                     &NotificationEntry);
    if ( PrmInterface >= 0 )
      PrmInterface = ExpQueryPrmInterface(v7[1], a3);
  }
LABEL_8:
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( PrmInterface < 0 && UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)PrmInterface;
}
