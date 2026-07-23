/*
 * XREFs of BiTranslateSymbolicLink @ 0x140A7EA6C
 * Callers:
 *     BiGetNtPartitionPath @ 0x1408142E8 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLinkFile @ 0x140814AA8 (BiTranslateSymbolicLinkFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x1406A9AB0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x1406AA110 (ZwQuerySymbolicLinkObject.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall BiTranslateSymbolicLink(PCWSTR SourceString, wchar_t **a2)
{
  NTSTATUS result; // eax
  unsigned __int16 v4; // di
  NTSTATUS v5; // ebx
  wchar_t *Buffer; // rax
  UNICODE_STRING LinkTarget; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ReturnedLength; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE LinkHandle; // [rsp+A8h] [rbp+38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&LinkTarget.Length = 0LL;
  DestinationString = 0LL;
  LinkHandle = 0LL;
  LinkTarget.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&LinkTarget, 0LL);
    v4 = 0;
    ReturnedLength = 0;
    do
    {
      while ( 1 )
      {
        v5 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, &ReturnedLength);
        if ( v5 == -1073741789 )
          break;
        ZwClose(LinkHandle);
        Buffer = LinkTarget.Buffer;
        LinkHandle = 0LL;
        if ( v5 < 0 )
          goto LABEL_14;
        LinkTarget.Buffer[(unsigned __int64)LinkTarget.Length >> 1] = 0;
        ObjectAttributes.ObjectName = &LinkTarget;
        LinkTarget.MaximumLength = v4;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) < 0 )
        {
          Buffer = LinkTarget.Buffer;
          v5 = 0;
          *a2 = LinkTarget.Buffer;
          goto LABEL_7;
        }
      }
      if ( LinkTarget.Buffer )
        ExFreePoolWithTag(LinkTarget.Buffer, 0x4B444342u);
      LinkTarget.MaximumLength = ReturnedLength;
      v4 = ReturnedLength + 2;
      Buffer = (wchar_t *)ExAllocatePool2(0x102uLL, ReturnedLength + 2, 0x4B444342u);
      LinkTarget.Buffer = Buffer;
    }
    while ( Buffer );
    v5 = -1073741670;
LABEL_7:
    if ( LinkHandle )
    {
      ZwClose(LinkHandle);
      Buffer = LinkTarget.Buffer;
    }
    if ( v5 < 0 )
    {
LABEL_14:
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0x4B444342u);
    }
    return v5;
  }
  return result;
}
