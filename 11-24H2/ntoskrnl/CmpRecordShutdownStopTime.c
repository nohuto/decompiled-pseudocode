/*
 * XREFs of CmpRecordShutdownStopTime @ 0x1407D5A2C
 * Callers:
 *     CmShutdownSystem1 @ 0x140666298 (CmShutdownSystem1.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     CmpReadBuildVersion @ 0x1407D5804 (CmpReadBuildVersion.c)
 *     RtlGetPersistedStateLocation @ 0x1409B4B60 (RtlGetPersistedStateLocation.c)
 */

__int64 CmpRecordShutdownStopTime()
{
  struct _PRIVILEGE_SET *v0; // rdi
  WCHAR *TargetPath; // rax
  WCHAR *v2; // rsi
  int PersistedStateLocation; // ebx
  LARGE_INTEGER Data; // [rsp+40h] [rbp-19h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  ULONG DataSize; // [rsp+C0h] [rbp+67h] BYREF
  int v10; // [rsp+C8h] [rbp+6Fh] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp+77h] BYREF
  PVOID v12; // [rsp+D8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  Data.QuadPart = 0LL;
  v0 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  DataSize = 0;
  v10 = 0;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  v12 = 0LL;
  TargetPath = (WCHAR *)CmpAllocatePool(0x100uLL, 0x410uLL, 0x30384D43u);
  v2 = TargetPath;
  if ( TargetPath )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"ShutdownPath",
                               0LL,
                               L"\\REGISTRY\\MACHINE\\SOFTWARE\\MICROSOFT\\WINDOWS\\CURRENTVERSION\\SHUTDOWN",
                               LocationTypeRegistry,
                               TargetPath,
                               0x410u,
                               0LL);
    if ( PersistedStateLocation >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, v2);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 576;
      PersistedStateLocation = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( PersistedStateLocation >= 0 )
      {
        Data = KeQueryPerformanceCounter(&PerformanceFrequency);
        RtlInitUnicodeString(&DestinationString, L"ShutdownStopTimePerfCounter");
        PersistedStateLocation = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &Data, 8u);
        if ( PersistedStateLocation >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"LastBootPerfCounterFrequency");
          PersistedStateLocation = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &PerformanceFrequency, 8u);
          if ( PersistedStateLocation >= 0 )
          {
            PersistedStateLocation = CmpReadBuildVersion((struct _PRIVILEGE_SET **)&v12, &DataSize, &v10);
            if ( PersistedStateLocation < 0 )
            {
              v0 = (struct _PRIVILEGE_SET *)v12;
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, L"ShutdownStopTimePerfCounterCurrentBuildNumber");
              v0 = (struct _PRIVILEGE_SET *)v12;
              PersistedStateLocation = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, v12, DataSize);
              if ( PersistedStateLocation >= 0 )
              {
                RtlInitUnicodeString(&DestinationString, L"ShutdownStopTimePerfCounterUBR");
                PersistedStateLocation = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v10, 4u);
              }
            }
          }
        }
      }
    }
    CmSiFreeMemory((PPRIVILEGE_SET)v2);
  }
  else
  {
    PersistedStateLocation = -1073741670;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v0 )
    CmSiFreeMemory(v0);
  return (unsigned int)PersistedStateLocation;
}
