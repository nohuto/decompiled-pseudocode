/*
 * XREFs of CmpTraceHiveRestoreStart @ 0x1407D6C44
 * Callers:
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     CmpQueryNameString @ 0x14096C1C4 (CmpQueryNameString.c)
 */

void __fastcall CmpTraceHiveRestoreStart(__int64 a1, int a2)
{
  __int64 v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // rax
  unsigned int v6; // r9d
  __int64 v7; // rax
  REGHANDLE v8; // rcx
  __int16 v9; // [rsp+38h] [rbp-9h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[3]; // [rsp+60h] [rbp+1Fh] BYREF
  int v13; // [rsp+B0h] [rbp+6Fh] BYREF

  v13 = a2;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_RESTORE_START;
  UnicodeString = 0LL;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v4 = 0;
    if ( a1 )
    {
      if ( (int)CmpQueryNameString(a1, &UnicodeString, v3, 0LL) < 0 )
        return;
      v4 = 1;
      UserData[0].Ptr = (ULONGLONG)UnicodeString.Buffer;
      UserData[0].Size = UnicodeString.Length;
      UserData[0].Reserved = 0;
    }
    v5 = v4;
    v9 = 0;
    v6 = v4 + 1;
    UserData[v5].Ptr = (ULONGLONG)&v9;
    *(_QWORD *)&UserData[v5].Size = 2LL;
    v7 = v6;
    UserData[v7].Ptr = (ULONGLONG)&v13;
    v8 = EtwpRegTraceHandle;
    *(_QWORD *)&UserData[v7].Size = 4LL;
    EtwWrite(v8, &EventDescriptor, 0LL, v6 + 1, UserData);
    if ( a1 )
      RtlFreeAnsiString(&UnicodeString);
  }
}
