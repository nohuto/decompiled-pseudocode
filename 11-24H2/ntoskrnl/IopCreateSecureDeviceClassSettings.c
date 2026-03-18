/*
 * XREFs of IopCreateSecureDeviceClassSettings @ 0x1409A1A38
 * Callers:
 *     IoCreateDeviceSecure @ 0x1409A1B40 (IoCreateDeviceSecure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 *     IopOpenRegistryKeyEx @ 0x140A43B04 (IopOpenRegistryKeyEx.c)
 *     IopCreateRegistryKeyEx @ 0x140A71C1C (IopCreateRegistryKeyEx.c)
 *     IopQuerySecureDeviceClassState @ 0x140AA47E0 (IopQuerySecureDeviceClassState.c)
 *     IopGetPersistedStateLocation @ 0x140ABA0BC (IopGetPersistedStateLocation.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopCreateSecureDeviceClassSettings(__int64 a1, __int64 a2, _BYTE *a3)
{
  WCHAR *v5; // rdi
  __int64 v7; // r8
  NTSTATUS SecureDeviceClassState; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  int PersistedStateLocation; // eax
  int v13; // eax
  NTSTATUS v14; // eax
  PVOID *v15; // rbx
  HANDLE KeyHandle; // [rsp+38h] [rbp-19h] BYREF
  HANDLE v17; // [rsp+40h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-9h] BYREF
  PCWSTR SourceString[2]; // [rsp+50h] [rbp-1h] BYREF
  UNICODE_STRING String1; // [rsp+60h] [rbp+Fh] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp+1Fh] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+2Fh] BYREF
  int v23; // [rsp+D0h] [rbp+7Fh] BYREF

  v23 = 0;
  String2.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class";
  *(_QWORD *)&String2.Length = 7471216LL;
  KeyHandle = 0LL;
  v17 = 0LL;
  Handle = 0LL;
  v5 = 0LL;
  SourceString[0] = 0LL;
  String1 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  LOBYTE(v7) = 1;
  SecureDeviceClassState = RtlStringFromGUIDEx(a1, &DestinationString, v7);
  if ( SecureDeviceClassState < 0 )
    goto LABEL_2;
  SecureDeviceClassState = IopOpenRegistryKeyEx(&v17, 0LL, &String2, 983103LL);
  if ( SecureDeviceClassState < 0
    || (SecureDeviceClassState = IopOpenRegistryKeyEx(&KeyHandle, v17, &DestinationString, 131097LL),
        SecureDeviceClassState < 0)
    || (RtlInitUnicodeString(&String1, L"Properties"),
        SecureDeviceClassState = IopOpenRegistryKeyEx(&Handle, KeyHandle, &String1, 131097LL),
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
  PersistedStateLocation = IopGetPersistedStateLocation(v10, String2.Buffer, v11, SourceString);
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
    if ( v17 )
    {
      ZwClose(v17);
      v17 = 0LL;
    }
    if ( KeyHandle )
    {
      ZwClose(KeyHandle);
      KeyHandle = 0LL;
    }
    SecureDeviceClassState = IopCreateRegistryKeyEx(&v17, 0LL, &String1, 983103LL, 0, &v23);
    if ( SecureDeviceClassState < 0 )
      goto LABEL_2;
  }
  SecureDeviceClassState = IopCreateRegistryKeyEx(&KeyHandle, v17, &DestinationString, 983103LL, 0, &v23);
  if ( SecureDeviceClassState < 0 )
    goto LABEL_2;
  if ( v23 == 2 )
  {
    if ( Handle )
    {
      ZwClose(Handle);
      Handle = 0LL;
    }
    RtlInitUnicodeString(&String1, L"Properties");
    v13 = IopOpenRegistryKeyEx(&Handle, KeyHandle, &String1, 131097LL);
    SecureDeviceClassState = v13;
    if ( v13 >= 0 )
    {
      v14 = IopQuerySecureDeviceClassState(Handle);
LABEL_43:
      SecureDeviceClassState = v14;
      goto LABEL_2;
    }
    if ( v13 != -1073741772 )
      goto LABEL_2;
LABEL_18:
    SecureDeviceClassState = 0;
    goto LABEL_2;
  }
  v15 = (PVOID *)(*(_QWORD *)(a2 + 48) + 24LL);
  if ( *(_QWORD *)(a2 + 48) == -24LL )
  {
    SecureDeviceClassState = -1073741670;
    goto LABEL_2;
  }
  RtlInitUnicodeString(&String1, L"Class");
  SecureDeviceClassState = ZwSetValueKey(KeyHandle, &String1, 0, 1u, v15[1], *(unsigned __int16 *)v15 + 2);
  if ( SecureDeviceClassState >= 0 )
  {
    RtlInitUnicodeString(&String1, L"NoDisplayClass");
    SecureDeviceClassState = ZwSetValueKey(KeyHandle, &String1, 0, 1u, L"1", 4u);
    if ( SecureDeviceClassState >= 0 )
    {
      RtlInitUnicodeString(&String1, L"NoUseClass");
      v14 = ZwSetValueKey(KeyHandle, &String1, 0, 1u, L"1", 4u);
      goto LABEL_43;
    }
  }
LABEL_2:
  if ( v17 )
    ZwClose(v17);
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
