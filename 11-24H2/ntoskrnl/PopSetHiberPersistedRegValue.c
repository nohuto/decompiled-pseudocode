/*
 * XREFs of PopSetHiberPersistedRegValue @ 0x1406F596C
 * Callers:
 *     PopSetHiberFileType @ 0x1406F9BCC (PopSetHiberFileType.c)
 *     PopSetHiberFileSize @ 0x1406FA3E4 (PopSetHiberFileSize.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwCreateKey @ 0x1406A67B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 */

__int64 __fastcall PopSetHiberPersistedRegValue(int a1, int a2, int *a3)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  NTSTATUS v6; // ebx
  int v7; // edi
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+17h] BYREF
  int Data; // [rsp+C0h] [rbp+6Fh] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp+7Fh] BYREF

  Data = a2;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  v4 = a1;
  v5 = -1LL;
  KeyHandle = (HANDLE)-1LL;
  ValueName = 0LL;
  DestinationString = 0LL;
  if ( PopHibernatePersistedRegLocation )
  {
    RtlInitUnicodeString(&DestinationString, PopHibernatePersistedRegLocation);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 576;
    v6 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    v7 = (v6 >> 31) & 8;
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&ValueName, (&PopHiberPersistedRegValueDatabase)[3 * v4]);
      v7 = 0;
      v6 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
      if ( v6 < 0 )
        v7 = 10;
    }
    v5 = (__int64)KeyHandle;
  }
  else
  {
    v7 = 7;
    v6 = -1073741811;
  }
  if ( v5 != -1 )
    ZwClose((HANDLE)v5);
  if ( v6 < 0 && a3 )
    *a3 = v7;
  return (unsigned int)v6;
}
