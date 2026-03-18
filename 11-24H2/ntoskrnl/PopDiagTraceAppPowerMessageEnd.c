/*
 * XREFs of PopDiagTraceAppPowerMessageEnd @ 0x140A66B94
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceAppPowerMessageEnd(int *a1)
{
  int v2; // eax
  int v3; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SUSPENDAPP_END) )
    {
      v2 = *a1;
      UserData.Reserved = 0;
      v3 = v2;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 4;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SUSPENDAPP_END, 0LL, 1u, &UserData);
    }
  }
}
