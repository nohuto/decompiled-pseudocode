/*
 * XREFs of SiOpenArcNameObject @ 0x140817778
 * Callers:
 *     SiGetBiosSystemDisk @ 0x1408173B0 (SiGetBiosSystemDisk.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwOpenSymbolicLinkObject @ 0x1406A9AB0 (ZwOpenSymbolicLinkObject.c)
 */

__int64 __fastcall SiOpenArcNameObject(PCWSTR SourceString, HANDLE *a2)
{
  NTSTATUS v3; // eax
  unsigned int v4; // ecx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE LinkHandle; // [rsp+80h] [rbp+20h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenSymbolicLinkObject(&LinkHandle, 0x20001u, &ObjectAttributes);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = LinkHandle;
  }
  else if ( v3 != -1073741801 && v3 != -1073741670 )
  {
    return (unsigned int)-1073740718;
  }
  return v4;
}
