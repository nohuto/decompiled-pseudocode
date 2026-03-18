/*
 * XREFs of IopUpdateSecureDeviceClassState @ 0x1409A1648
 * Callers:
 *     IoCreateDeviceSecure @ 0x1409A1B40 (IoCreateDeviceSecure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1404747D0 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwCreateKey @ 0x1406A67B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 *     RtlLengthSecurityDescriptor @ 0x14085A2E0 (RtlLengthSecurityDescriptor.c)
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 *     RtlGetPersistedStateLocation @ 0x1409CC0E0 (RtlGetPersistedStateLocation.c)
 *     IopOpenRegistryKeyEx @ 0x140A43B04 (IopOpenRegistryKeyEx.c)
 *     IopCreateRegistryKeyEx @ 0x140A71C1C (IopCreateRegistryKeyEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopUpdateSecureDeviceClassState(__int64 a1, __int64 a2)
{
  void *v2; // r14
  void *v3; // r12
  unsigned int v5; // r15d
  void *Pool2; // rdi
  int PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  __int64 v9; // r8
  int v10; // eax
  ULONG v11; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-41h] BYREF
  void *v15; // [rsp+50h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-31h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-11h] BYREF
  __int64 v20; // [rsp+100h] [rbp+77h] BYREF
  void *v21; // [rsp+108h] [rbp+7Fh] BYREF

  Handle = 0LL;
  v2 = 0LL;
  KeyHandle = 0LL;
  v3 = 0LL;
  LODWORD(v20) = 0;
  memset(&ObjectAttributes, 0, 44);
  v5 = 256;
  v21 = 0LL;
  DestinationString = 0LL;
  v15 = 0LL;
  *(_OWORD *)P = 0LL;
  while ( 1 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      inited = -1073741670;
      goto LABEL_19;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(L"SecureDeviceClass", Pool2, v5, (__int64)&v20);
    inited = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( (unsigned int)v20 <= v5 )
    {
      inited = -1073741595;
LABEL_8:
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
      goto LABEL_19;
    }
    v5 = v20;
    ExFreePoolWithTag(Pool2, 0);
  }
  if ( PersistedStateLocation < 0 )
    goto LABEL_8;
  inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)Pool2);
  if ( inited >= 0 )
  {
    inited = IopOpenRegistryKeyEx(&Handle, 0LL, &DestinationString, 983103LL);
    if ( inited >= 0 )
    {
      LOBYTE(v9) = 1;
      inited = RtlStringFromGUIDEx(a1, P, v9);
      if ( inited >= 0 )
      {
        inited = IopCreateRegistryKeyEx(&v21, Handle, P, 983103LL, 0, 0LL);
        if ( inited < 0 )
        {
          v2 = v21;
        }
        else
        {
          v10 = SeConvertStringSecurityDescriptorToSecurityDescriptor(
                  (__int64)L"D:PAI(A;OICI;GA;;;SY)",
                  1,
                  (__int64)&v15,
                  0LL);
          v3 = v15;
          if ( v10 < 0 )
            v3 = 0LL;
          RtlInitUnicodeString(&DestinationString, L"Properties");
          v2 = v21;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = v21;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.SecurityDescriptor = v3;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          inited = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
          if ( inited >= 0 )
          {
            v11 = RtlLengthSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 8));
            RtlInitUnicodeString(&DestinationString, L"Security");
            inited = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, *(PVOID *)(a2 + 8), v11);
          }
        }
      }
    }
  }
LABEL_19:
  if ( Handle )
    ZwClose(Handle);
  if ( v2 )
    ZwClose(v2);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( P[1] )
    ExFreePool(P[1]);
  return (unsigned int)inited;
}
