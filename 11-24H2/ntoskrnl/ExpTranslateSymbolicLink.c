/*
 * XREFs of ExpTranslateSymbolicLink @ 0x140A5C5A4
 * Callers:
 *     ExpConvertArcName @ 0x1407BB954 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1407BBB18 (ExpConvertSignatureName.c)
 *     ExpFindArcName @ 0x1407BC01C (ExpFindArcName.c)
 *     ExpTranslateNtPath @ 0x1407BD944 (ExpTranslateNtPath.c)
 *     ExpTranslateEfiPath @ 0x140A5C19C (ExpTranslateEfiPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x1406A9AB0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x1406AA110 (ZwQuerySymbolicLinkObject.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ExpTranslateSymbolicLink(PCWSTR SourceString, UNICODE_STRING *a2)
{
  unsigned __int16 v3; // si
  wchar_t *Pool2; // rbx
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  UNICODE_STRING LinkTarget; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ReturnedLength; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE LinkHandle; // [rsp+B8h] [rbp+48h] BYREF

  *(_DWORD *)(&LinkTarget.MaximumLength + 1) = 0;
  ReturnedLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = 2;
  LinkHandle = 0LL;
  DestinationString = 0LL;
  Pool2 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        LinkTarget.Length = 0;
        LinkTarget.Buffer = Pool2;
        LinkTarget.MaximumLength = v3 - 2;
        v6 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, &ReturnedLength);
        if ( v6 != -1073741789 )
          break;
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        v3 = ReturnedLength + 2;
        Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL, ReturnedLength + 2, 0x72766E45u);
        if ( !Pool2 )
        {
          ZwClose(LinkHandle);
          return -1073741670;
        }
      }
      ZwClose(LinkHandle);
      if ( v6 < 0 )
        break;
      Pool2[(unsigned __int64)LinkTarget.Length >> 1] = 0;
      LinkTarget.MaximumLength = v3;
      RtlInitUnicodeString(&DestinationString, Pool2);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) < 0 )
      {
        result = 0;
        *a2 = LinkTarget;
        return result;
      }
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    return v6;
  }
  return result;
}
