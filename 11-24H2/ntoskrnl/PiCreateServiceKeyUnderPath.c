/*
 * XREFs of PiCreateServiceKeyUnderPath @ 0x14071D4FC
 * Callers:
 *     PiCreateServiceStateKey @ 0x1409B569C (PiCreateServiceStateKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1409B5838 (PiCreateDriverRedirectedStateKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x140499DB0 (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     PiCreateRegistryPath @ 0x14071D268 (PiCreateRegistryPath.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140725C20 (PiAuGetServiceStateSecurityObject.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     IopAllocateUnicodeString @ 0x1409BB8B4 (IopAllocateUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCreateServiceKeyUnderPath(
        UNICODE_STRING *CreateOptions,
        UNICODE_STRING *String2,
        __int64 a3,
        _QWORD *a4)
{
  void *v6; // rsi
  HANDLE v7; // rdi
  int Length; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  NTSTATUS v12; // ebx
  NTSTATUS v13; // eax
  int ServiceStateSecurityObject; // eax
  __int64 v15; // rdx
  int v16; // eax
  HANDLE v17; // rax
  HANDLE v19; // [rsp+40h] [rbp-19h] BYREF
  void *v20; // [rsp+48h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+67h] BYREF

  KeyHandle = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !CreateOptions
    || !CreateOptions->Buffer
    || (Length = CreateOptions->Length, (unsigned __int16)Length < 2u)
    || !String2
    || !String2->Buffer
    || (v10 = String2->Length, (unsigned __int16)v10 < 2u)
    || !a4 )
  {
    v12 = -1073741811;
    goto LABEL_23;
  }
  v11 = Length + 2;
  if ( v11 + v10 < v11 )
  {
    v12 = -1073741675;
    goto LABEL_23;
  }
  if ( v11 + v10 > 0xFFFE )
  {
    v12 = -2147483643;
    goto LABEL_23;
  }
  v12 = IopAllocateUnicodeString(&DestinationString);
  if ( v12 >= 0 )
  {
    v12 = RtlUnicodeStringPrintfEx(&DestinationString, 0LL, 0x800u, L"%wZ\\%wZ", String2, CreateOptions);
    if ( v12 >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v13 = ZwOpenKey(&KeyHandle, 4u, &ObjectAttributes);
      v12 = v13;
      if ( v13 != -1073741772 )
      {
LABEL_19:
        if ( v13 >= 0 )
        {
          v17 = KeyHandle;
          KeyHandle = 0LL;
          *a4 = v17;
        }
        goto LABEL_23;
      }
      ServiceStateSecurityObject = PiAuGetServiceStateSecurityObject(0LL, &v20);
      v6 = v20;
      v12 = ServiceStateSecurityObject;
      if ( ServiceStateSecurityObject < 0 )
        goto LABEL_23;
      v16 = PiCreateRegistryPath(String2, v15, v20, &v19);
      v7 = v19;
      v12 = v16;
      if ( v16 == -1073741772 )
        goto LABEL_16;
      if ( v16 >= 0 )
      {
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = v19;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = CreateOptions;
        ObjectAttributes.SecurityDescriptor = v6;
        v13 = ZwCreateKey(&KeyHandle, 4u, &ObjectAttributes, 0, 0LL, 0, 0LL);
        v12 = v13;
        if ( v13 == -1073741772 )
        {
LABEL_16:
          v12 = -1073741595;
          goto LABEL_23;
        }
        goto LABEL_19;
      }
    }
  }
LABEL_23:
  RtlFreeAnsiString(&DestinationString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v7 )
    ZwClose(v7);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v12;
}
