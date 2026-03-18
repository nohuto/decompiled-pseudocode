/*
 * XREFs of IoDeleteSymbolicLink @ 0x140A8B1B0
 * Callers:
 *     DifIoDeleteSymbolicLinkWrapper @ 0x14061BDB0 (DifIoDeleteSymbolicLinkWrapper.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x14069D460 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x14069D840 (ZwOpenSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName)
{
  int TemporaryObject; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE LinkHandle; // [rsp+60h] [rbp+10h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  LinkHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = SymbolicLinkName;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 576;
  TemporaryObject = ZwOpenSymbolicLinkObject(&LinkHandle, 0x10000u, &ObjectAttributes);
  if ( TemporaryObject >= 0 )
  {
    TemporaryObject = ZwMakeTemporaryObject(LinkHandle);
    if ( TemporaryObject >= 0 )
      ZwClose(LinkHandle);
  }
  return TemporaryObject;
}
