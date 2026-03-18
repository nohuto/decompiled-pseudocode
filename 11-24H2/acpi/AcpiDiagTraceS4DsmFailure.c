/*
 * XREFs of AcpiDiagTraceS4DsmFailure @ 0x140098EC4
 * Callers:
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceS4DsmFailure(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v2; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_S4_DSM_EVALUATION_FAILED) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (unsigned __int64)&v2;
      UserData.Size = 4;
      EtwWrite(
        (REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
        &ACPI_ETW_EVENT_S4_DSM_EVALUATION_FAILED,
        0LL,
        1u,
        &UserData);
    }
  }
}
