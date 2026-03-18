/*
 * XREFs of PopDiagTraceKernelQueriesAllowed @ 0x140A98914
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceKernelQueriesAllowed(unsigned __int8 a1)
{
  int v1; // ebx
  int v2; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  v1 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_KERNEL_QUERY_ALLOWED) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      v2 = v1;
      UserData.Size = 4;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_KERNEL_QUERY_ALLOWED, 0LL, 1u, &UserData);
    }
  }
}
