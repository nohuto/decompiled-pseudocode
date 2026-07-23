/*
 * XREFs of IopCreateSecureDeviceClassSettings @ 0x140A6063C
 * Callers:
 *     IoCreateDeviceSecure @ 0x140A603E0 (IoCreateDeviceSecure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1409A3470 (RtlStringFromGUIDEx.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     IopCreateRegistryKeyEx @ 0x140A6AFFC (IopCreateRegistryKeyEx.c)
 *     IopQuerySecureDeviceClassState @ 0x140A9FB70 (IopQuerySecureDeviceClassState.c)
 *     IopGetPersistedStateLocation @ 0x140AB50D8 (IopGetPersistedStateLocation.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopCreateSecureDeviceClassSettings(PGUID Guid, __int64 a2, _BYTE *a3)
{
  WCHAR *v5; // rdi
  NTSTATUS SecureDeviceClassState; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  int PersistedStateLocation; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  PVOID *v14; // rbx
  HANDLE KeyHandle; // [rsp+38h] [rbp-19h] BYREF
  HANDLE v16; // [rsp+40h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-9h] BYREF
  PCWSTR SourceString[2]; // [rsp+50h] [rbp-1h] BYREF
  UNICODE_STRING String1; // [rsp+60h] [rbp+Fh] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp+1Fh] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+2Fh] BYREF
  int v22; // [rsp+D0h] [rbp+7Fh] BYREF

  v22 = 0;
  String2.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class";
  *(_QWORD *)&String2.Length = 7471216LL;
  KeyHandle = 0LL;
  v16 = 0LL;
  Handle = 0LL;
  v5 = 0LL;
  SourceString[0] = 0LL;
  String1 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  SecureDeviceClassState = RtlStringFromGUIDEx(Guid, &DestinationString, 1u);
  if ( SecureDeviceClassState < 0 )
    goto LABEL_2;
  SecureDeviceClassState = IopOpenRegistryKeyEx(&v16, 0LL, &String2, 0xF003Fu);
  if ( SecureDeviceClassState < 0
    || (SecureDeviceClassState = IopOpenRegistryKeyEx(&KeyHandle, v16, &DestinationString, 0x20019u),
        SecureDeviceClassState < 0)
    || (RtlInitUnicodeString(&String1, L"Properties"),
        SecureDeviceClassState = IopOpenRegistryKeyEx(&Handle, KeyHandle, &String1, 0x20019u),
        SecureDeviceClassState < 0) )
  {
    if ( SecureDeviceClassState != -1073741772 )
      goto LABEL_2;
  }
  else
  {
    SecureDeviceClassState = IopQuerySecureDeviceClassState(Handle);
    if ( SecureDeviceClassState < 0 )
      goto LABEL_2;
    if ( (*a3 & 0xF) == 0xF )
      goto LABEL_18;
  }
  PersistedStateLocation = IopGetPersistedStateLocation(v9, String2.Buffer, v10, SourceString);
  v5 = (WCHAR *)SourceString[0];
  SecureDeviceClassState = PersistedStateLocation;
  if ( PersistedStateLocation < 0 )
    goto LABEL_2;
  SecureDeviceClassState = RtlInitUnicodeStringEx(&String1, SourceString[0]);
  if ( SecureDeviceClassState < 0 )
    goto LABEL_2;
  if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
  {
    if ( KeyHandle )
      goto LABEL_18;
  }
  else
  {
    if ( v16 )
    {
      ZwClose(v16);
      v16 = 0LL;
    }
    if ( KeyHandle )
    {
      ZwClose(KeyHandle);
      KeyHandle = 0LL;
    }
    SecureDeviceClassState = IopCreateRegistryKeyEx(&v16, 0LL, &String1, 983103LL, 0, &v22);
    if ( SecureDeviceClassState < 0 )
      goto LABEL_2;
  }
  SecureDeviceClassState = IopCreateRegistryKeyEx(&KeyHandle, v16, &DestinationString, 983103LL, 0, &v22);
  if ( SecureDeviceClassState < 0 )
    goto LABEL_2;
  if ( v22 == 2 )
  {
    if ( Handle )
    {
      ZwClose(Handle);
      Handle = 0LL;
    }
    RtlInitUnicodeString(&String1, L"Properties");
    v12 = IopOpenRegistryKeyEx(&Handle, KeyHandle, &String1, 0x20019u);
    SecureDeviceClassState = v12;
    if ( v12 >= 0 )
    {
      v13 = IopQuerySecureDeviceClassState(Handle);
LABEL_43:
      SecureDeviceClassState = v13;
      goto LABEL_2;
    }
    if ( v12 != -1073741772 )
      goto LABEL_2;
LABEL_18:
    SecureDeviceClassState = 0;
    goto LABEL_2;
  }
  v14 = (PVOID *)(*(_QWORD *)(a2 + 48) + 24LL);
  if ( *(_QWORD *)(a2 + 48) == -24LL )
  {
    SecureDeviceClassState = -1073741670;
    goto LABEL_2;
  }
  RtlInitUnicodeString(&String1, L"Class");
  SecureDeviceClassState = ZwSetValueKey(KeyHandle, &String1, 0, 1u, v14[1], *(unsigned __int16 *)v14 + 2);
  if ( SecureDeviceClassState >= 0 )
  {
    RtlInitUnicodeString(&String1, L"NoDisplayClass");
    SecureDeviceClassState = ZwSetValueKey(KeyHandle, &String1, 0, 1u, L"1", 4u);
    if ( SecureDeviceClassState >= 0 )
    {
      RtlInitUnicodeString(&String1, L"NoUseClass");
      v13 = ZwSetValueKey(KeyHandle, &String1, 0, 1u, L"1", 4u);
      goto LABEL_43;
    }
  }
LABEL_2:
  if ( v16 )
    ZwClose(v16);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  return (unsigned int)SecureDeviceClassState;
}
