/*
 * XREFs of PopDiagTraceDirectedDripsNotifyAppsAndServices @ 0x14075434C
 * Callers:
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14074A9E4 (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceDirectedDripsNotifyAppsAndServices(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  char v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  int v6; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  int *v8; // [rsp+50h] [rbp+7h]
  int v9; // [rsp+58h] [rbp+Fh]
  int v10; // [rsp+5Ch] [rbp+13h]
  int *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  __int64 *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  __int64 *v17; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+88h] [rbp+3Fh]
  int v19; // [rsp+8Ch] [rbp+43h]
  __int64 v20; // [rsp+C0h] [rbp+77h] BYREF

  v20 = a3;
  v6 = 0;
  v3 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_APPS_SERVICES) )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v4 = PopWdiCurrentScenarioInstanceId;
      UserData.Ptr = (ULONGLONG)&v4;
      v8 = &v5;
      v11 = &v6;
      v9 = 4;
      v12 = 4;
      v14 = &v20;
      v17 = &PopWdiCurrentScenarioInstanceId;
      v15 = 8;
      v18 = 8;
      v5 = v3;
      UserData.Size = 1;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_APPS_SERVICES, 0LL, 5u, &UserData);
    }
  }
}
