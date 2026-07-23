/*
 * XREFs of PopDiagTraceDirectedDripsWorker @ 0x140A526A4
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x14074AEB0 (PopDirectedDripsWorkerRoutine.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceDirectedDripsWorker(__int64 a1)
{
  char v1; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v3; // [rsp+48h] [rbp-28h]
  int v4; // [rsp+50h] [rbp-20h]
  int v5; // [rsp+54h] [rbp-1Ch]
  __int64 *v6; // [rsp+58h] [rbp-18h]
  int v7; // [rsp+60h] [rbp-10h]
  int v8; // [rsp+64h] [rbp-Ch]
  __int64 v9; // [rsp+80h] [rbp+10h] BYREF

  v9 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_WORKER) )
    {
      UserData.Reserved = 0;
      v5 = 0;
      v8 = 0;
      v1 = PopWnfCsEnterScenarioId;
      UserData.Ptr = (ULONGLONG)&v1;
      v4 = 8;
      v3 = &v9;
      v6 = &PopWnfCsEnterScenarioId;
      v7 = 8;
      UserData.Size = 1;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_WORKER, 0LL, 3u, &UserData);
    }
  }
}
