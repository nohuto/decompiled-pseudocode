/*
 * XREFs of KiInitializeReservedCpuSets @ 0x140C2BCFC
 * Callers:
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     KeModifySystemAllowedCpuSets @ 0x14048B4B0 (KeModifySystemAllowedCpuSets.c)
 *     KiValidateCpuSetMasks @ 0x14048B8AC (KiValidateCpuSetMasks.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS KiInitializeReservedCpuSets()
{
  unsigned int v0; // ebx
  NTSTATUS result; // eax
  unsigned int v2; // edx
  __int64 v3; // r8
  int i; // ebx
  char Length; // [rsp+20h] [rbp-E0h]
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp-70h] BYREF
  int v12; // [rsp+94h] [rbp-6Ch]
  unsigned int v13; // [rsp+98h] [rbp-68h]
  _BYTE Src[260]; // [rsp+9Ch] [rbp-64h] BYREF

  memset_0(KeyValueInformation, 0, 0x110uLL);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ResultLength = 0;
  KeyHandle = 0LL;
  v8[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\kernel";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v0 = 32;
  ValueName.Buffer = L"ReservedCpuSets";
  v8[0] = 9699474LL;
  *(_QWORD *)&ValueName.Length = 2097182LL;
  memset_0(&KiReservedCpuSets, 0, 0x100uLL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v8;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x110u,
               &ResultLength);
    if ( result >= 0 && v12 == 3 && (v13 & 7) == 0 )
    {
      result = KiValidateCpuSetMasks((__int64)Src, v13 >> 3);
      if ( result >= 0 )
      {
        if ( v2 >= 0x20 || (v0 = v2) != 0 )
          memmove(&KiReservedCpuSets, Src, 8LL * v0);
        for ( i = 0; i < 2; ++i )
          result = KeModifySystemAllowedCpuSets(0, 0, v3, i, Length);
      }
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
