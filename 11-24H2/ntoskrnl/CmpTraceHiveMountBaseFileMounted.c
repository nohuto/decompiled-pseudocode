/*
 * XREFs of CmpTraceHiveMountBaseFileMounted @ 0x14096A720
 * Callers:
 *     HvLoadHive @ 0x140969B4C (HvLoadHive.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpQueryNameString @ 0x14096C1C4 (CmpQueryNameString.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

void __fastcall CmpTraceHiveMountBaseFileMounted(__int64 a1, int a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  PVOID v5; // rbx
  __int16 v6; // [rsp+38h] [rbp-9h] BYREF
  _DWORD v7[2]; // [rsp+40h] [rbp-1h] BYREF
  PVOID P; // [rsp+48h] [rbp+7h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+1Fh] BYREF
  __int16 *v11; // [rsp+70h] [rbp+2Fh]
  __int64 v12; // [rsp+78h] [rbp+37h]
  int *v13; // [rsp+80h] [rbp+3Fh]
  __int64 v14; // [rsp+88h] [rbp+47h]
  int v15; // [rsp+B0h] [rbp+6Fh] BYREF

  v15 = a2;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_MOUNT_BASE_FILE_MOUNTED;
  v7[1] = 0;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    P = 0LL;
    v7[0] = 0;
    if ( (int)CmpQueryNameString(a1, v7, v3, v4) >= 0 )
    {
      v5 = P;
      UserData.Size = LOWORD(v7[0]);
      v11 = &v6;
      v13 = &v15;
      UserData.Ptr = (ULONGLONG)P;
      UserData.Reserved = 0;
      v6 = 0;
      v12 = 2LL;
      v14 = 4LL;
      EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 3u, &UserData);
      if ( v5 )
        ExFreePool(v5);
    }
  }
}
