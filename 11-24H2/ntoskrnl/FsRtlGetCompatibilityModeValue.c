/*
 * XREFs of FsRtlGetCompatibilityModeValue @ 0x140C1AC14
 * Callers:
 *     FsRtlInitSystem @ 0x140C1AD7C (FsRtlInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall FsRtlGetCompatibilityModeValue(PUNICODE_STRING ValueName, _DWORD *a2)
{
  NTSTATUS result; // eax
  ULONG Length; // esi
  unsigned int *Pool2; // rbx
  NTSTATUS v7; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-81h] BYREF
  _DWORD v10[2]; // [rsp+40h] [rbp-79h] BYREF
  const wchar_t *v11; // [rsp+48h] [rbp-71h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-69h] BYREF
  _BYTE KeyValueInformation[96]; // [rsp+80h] [rbp-39h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  v10[1] = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  v11 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\FileSystem";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v10;
  v10[0] = 8126586;
  ObjectAttributes.Attributes = 64;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    Length = 92;
    Pool2 = (unsigned int *)KeyValueInformation;
    while ( 1 )
    {
      v7 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, Pool2, Length, &ResultLength);
      if ( v7 != -2147483643 )
        break;
      if ( Pool2 != (unsigned int *)KeyValueInformation )
        ExFreePoolWithTag(Pool2, 0);
      Length += 256;
      Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL, Length, 0x20746146uLL);
      if ( !Pool2 )
        return -1073741801;
    }
    ZwClose(KeyHandle);
    if ( v7 >= 0 )
    {
      if ( Pool2[3] )
        *a2 = *(unsigned int *)((char *)Pool2 + Pool2[2]);
      else
        v7 = -1073741772;
    }
    if ( Pool2 != (unsigned int *)KeyValueInformation )
      ExFreePoolWithTag(Pool2, 0);
    return v7;
  }
  return result;
}
