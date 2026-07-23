/*
 * XREFs of PiCreateServiceStateKey @ 0x1409B569C
 * Callers:
 *     IoOpenDriverRegistryKey @ 0x1409B5A60 (IoOpenDriverRegistryKey.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     PiCreateServiceKeyUnderPath @ 0x14071D4FC (PiCreateServiceKeyUnderPath.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140725C20 (PiAuGetServiceStateSecurityObject.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1409B5838 (PiCreateDriverRedirectedStateKey.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCreateServiceStateKey(
        UNICODE_STRING *CreateOptions,
        char a2,
        void *a3,
        UNICODE_STRING *a4,
        ACCESS_MASK DesiredAccess,
        char a6,
        _QWORD *a7)
{
  void *v8; // rsi
  int DriverRedirectedStateKey; // eax
  __int64 v13; // r8
  int v14; // ebx
  void *v15; // rdi
  NTSTATUS v16; // eax
  HANDLE v17; // rax
  bool v19; // sf
  void *v20; // rcx
  int ServiceStateSecurityObject; // eax
  HANDLE KeyHandle; // [rsp+48h] [rbp-21h] BYREF
  void *v23; // [rsp+50h] [rbp-19h]
  void *v24; // [rsp+58h] [rbp-11h] BYREF
  void *v25; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF

  KeyHandle = 0LL;
  v23 = 0LL;
  v8 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v25 = 0LL;
  DriverRedirectedStateKey = PiCreateDriverRedirectedStateKey((ULONG)CreateOptions);
  v14 = DriverRedirectedStateKey;
  if ( DriverRedirectedStateKey != -1073741772 )
  {
    v19 = DriverRedirectedStateKey < 0;
    goto LABEL_16;
  }
  if ( a2 )
  {
    v20 = 0LL;
    v24 = 0LL;
    if ( CreateOptions && CreateOptions->Buffer && CreateOptions->Length >= 2u )
    {
      v14 = PiCreateServiceKeyUnderPath(CreateOptions, (UNICODE_STRING *)&PiDriverRegKeyUniqueStateRoot, v13, &v24);
      if ( v14 >= 0 )
      {
        v15 = v24;
        goto LABEL_4;
      }
      v20 = v24;
    }
    else
    {
      v14 = -1073741811;
    }
    if ( v20 )
      ZwClose(v20);
    v19 = v14 < 0;
LABEL_16:
    v15 = v23;
    if ( v19 )
      goto LABEL_7;
    goto LABEL_4;
  }
  v15 = a3;
LABEL_4:
  ObjectAttributes.RootDirectory = v15;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = a4;
  v16 = ZwOpenKey(&KeyHandle, DesiredAccess, &ObjectAttributes);
  v14 = v16;
  if ( v16 == -1073741772 )
  {
    ServiceStateSecurityObject = PiAuGetServiceStateSecurityObject(a6, &v25);
    v8 = v25;
    v14 = ServiceStateSecurityObject;
    if ( ServiceStateSecurityObject < 0 )
      goto LABEL_7;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v15;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a4;
    ObjectAttributes.SecurityDescriptor = v25;
    v16 = ZwCreateKey(&KeyHandle, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
    v14 = v16;
  }
  if ( v16 >= 0 )
  {
    v17 = KeyHandle;
    KeyHandle = 0LL;
    *a7 = v17;
  }
LABEL_7:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v15 && v15 != a3 )
    ZwClose(v15);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v14;
}
