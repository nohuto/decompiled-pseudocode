/*
 * XREFs of PiDevCfgOpenDriverConfiguration @ 0x140A82B1C
 * Callers:
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072AC78 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryDriverNode @ 0x140996564 (PiDevCfgQueryDriverNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 */

__int64 __fastcall PiDevCfgOpenDriverConfiguration(void *a1, const WCHAR *a2, HANDLE *a3)
{
  NTSTATUS v5; // ebx
  HANDLE v7; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF

  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  DestinationString.Buffer = L"Configurations";
  ObjectAttributes.RootDirectory = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_DWORD *)&DestinationString.Length = 1966108;
  ObjectAttributes.Attributes = 576;
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v7 = KeyHandle;
    *(&ObjectAttributes.Attributes + 1) = 0;
    *a3 = 0LL;
    ObjectAttributes.RootDirectory = v7;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
