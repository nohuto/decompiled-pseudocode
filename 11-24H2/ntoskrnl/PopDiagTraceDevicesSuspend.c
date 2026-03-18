/*
 * XREFs of PopDiagTraceDevicesSuspend @ 0x140A8CC7C
 * Callers:
 *     PoBroadcastSystemState @ 0x140B64C6C (PoBroadcastSystemState.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceDevicesSuspend(unsigned __int8 a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  int *v6; // [rsp+48h] [rbp-28h]
  int v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+54h] [rbp-1Ch]
  int *v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+60h] [rbp-10h]
  int v11; // [rsp+64h] [rbp-Ch]
  int v12; // [rsp+88h] [rbp+18h] BYREF
  int v13; // [rsp+90h] [rbp+20h] BYREF

  v13 = a3;
  v12 = a2;
  v3 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICESSUSPEND) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      UserData.Size = 4;
      v6 = &v12;
      v9 = &v13;
      v7 = 4;
      v10 = 4;
      v4 = v3;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DEVICESSUSPEND, 0LL, 3u, &UserData);
    }
  }
}
