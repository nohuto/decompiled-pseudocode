/*
 * XREFs of IoWMIDeviceObjectToInstanceName @ 0x140A70350
 * Callers:
 *     IoWMIHandleToInstanceName @ 0x140A97500 (IoWMIHandleToInstanceName.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x1402D4AC0 (IoGetDeviceAttachmentBaseRef.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     RtlStringCbPrintfW @ 0x14040BC90 (RtlStringCbPrintfW.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140A70400 (WmipGetGuidObjectInstanceInfo.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoWMIDeviceObjectToInstanceName(
        PVOID DataBlockObject,
        PDEVICE_OBJECT DeviceObject,
        PUNICODE_STRING InstanceName)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rbp
  NTSTATUS GuidObjectInstanceInfo; // ebx
  wchar_t *Pool2; // rax
  __int64 v9; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0;
  UnicodeString = 0LL;
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  GuidObjectInstanceInfo = WmipGetGuidObjectInstanceInfo(DataBlockObject, DeviceAttachmentBaseRef, &UnicodeString, &v11);
  if ( GuidObjectInstanceInfo >= 0 )
  {
    InstanceName->MaximumLength = UnicodeString.Length + 32;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    InstanceName->Buffer = Pool2;
    if ( Pool2 )
    {
      RtlStringCbPrintfW(Pool2, InstanceName->MaximumLength, L"%ws_%d", UnicodeString.Buffer, v11);
      v9 = -1LL;
      do
        ++v9;
      while ( InstanceName->Buffer[v9] );
      GuidObjectInstanceInfo = 0;
      InstanceName->Length = 2 * v9;
    }
    else
    {
      GuidObjectInstanceInfo = -1073741670;
    }
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
  }
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  return GuidObjectInstanceInfo;
}
