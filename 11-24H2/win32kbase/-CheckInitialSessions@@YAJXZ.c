/*
 * XREFs of ?CheckInitialSessions@@YAJXZ @ 0x14012A8C0
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     IsCurrentSessionServiceSession @ 0x14012AA48 (IsCurrentSessionServiceSession.c)
 *     ??4?$SGRDPgbFirstInteractiveSession@H@@QEAAAEAHAEBH@Z @ 0x1401B0E40 (--4-$SGRDPgbFirstInteractiveSession@H@@QEAAAEAHAEBH@Z.c)
 */

__int64 CheckInitialSessions(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  __int64 v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-69h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-59h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+70h] [rbp-29h] BYREF
  __int64 v9; // [rsp+A8h] [rbp+Fh]
  int v10; // [rsp+B0h] [rbp+17h]
  __int64 v11; // [rsp+B8h] [rbp+1Fh]
  __int64 v12; // [rsp+C0h] [rbp+27h]
  int v13; // [rsp+C8h] [rbp+2Fh]
  __int64 v14; // [rsp+D0h] [rbp+37h]
  int v15; // [rsp+D8h] [rbp+3Fh]
  int v16; // [rsp+100h] [rbp+67h] BYREF
  int v17; // [rsp+108h] [rbp+6Fh] BYREF
  void *EventHandle; // [rsp+110h] [rbp+77h] BYREF

  v0 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  EventHandle = 0LL;
  if ( !(unsigned int)IsCurrentSessionServiceSession() )
  {
    *(_DWORD *)(W32GetUserSessionState(v1) + 68868) = 1;
    W32GetUserSessionState(v2);
    v16 = 0;
    QueryTable.Name = L"NumberOfInitialSessions";
    QueryTable.QueryRoutine = 0LL;
    QueryTable.EntryContext = &v16;
    QueryTable.Flags = 292;
    QueryTable.DefaultType = 0x4000000;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 4;
    v9 = 0LL;
    v10 = 0;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0;
    v14 = 0LL;
    v15 = 0;
    if ( RtlQueryRegistryValues(
           0,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager",
           &QueryTable,
           0LL,
           0LL) < 0
      || v16 != 1 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\UniqueInteractiveSessionIdEvent");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v3 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
      v0 = v3;
      if ( v3 >= 0 )
      {
        v17 = 1;
        goto LABEL_8;
      }
      if ( v3 == -1073741771 )
      {
        v17 = 0;
LABEL_8:
        SGRDPgbFirstInteractiveSession<int>::operator=(v4, &v17);
      }
    }
  }
  return v0;
}
