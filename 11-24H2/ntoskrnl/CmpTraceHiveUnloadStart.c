/*
 * XREFs of CmpTraceHiveUnloadStart @ 0x140965940
 * Callers:
 *     CmpCompleteUnloadKey @ 0x140965368 (CmpCompleteUnloadKey.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveUnloadStart(unsigned __int16 *a1, unsigned __int16 *a2)
{
  BOOLEAN result; // al
  ULONGLONG v5; // rax
  unsigned int v6; // r9d
  __int64 v7; // rax
  unsigned int v8; // r9d
  ULONGLONG v9; // rax
  __int64 v10; // rax
  REGHANDLE v11; // rcx
  __int64 v12; // rcx
  __int16 v13; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+50h] [rbp+7h] BYREF

  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_START;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
  {
    v5 = *((_QWORD *)a1 + 1);
    v6 = 0;
    v13 = 0;
    if ( v5 )
    {
      UserData[0].Ptr = v5;
      v6 = 1;
      UserData[0].Size = *a1;
      UserData[0].Reserved = 0;
    }
    v7 = v6;
    v8 = v6 + 1;
    UserData[v7].Ptr = (ULONGLONG)&v13;
    *(_QWORD *)&UserData[v7].Size = 2LL;
    v9 = *((_QWORD *)a2 + 1);
    if ( v9 )
    {
      v12 = v8++;
      UserData[v12].Ptr = v9;
      UserData[v12].Size = *a2;
      *(&UserData[0].Reserved + 1 * v12) = 0;
    }
    v10 = v8;
    UserData[v10].Ptr = (ULONGLONG)&v13;
    v11 = EtwpRegTraceHandle;
    *(_QWORD *)&UserData[v10].Size = 2LL;
    return EtwWrite(v11, &EventDescriptor, 0LL, v8 + 1, UserData);
  }
  return result;
}
