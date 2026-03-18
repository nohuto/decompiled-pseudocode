/*
 * XREFs of AcpiDiagTracePccPlatformInterrupt @ 0x1400543C0
 * Callers:
 *     ACPIPccProcessSci @ 0x140023CF0 (ACPIPccProcessSci.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTracePccPlatformInterrupt(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v2; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_PCC_PLATFORM_INTERRUPT) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (unsigned __int64)&v2;
      UserData.Size = 4;
      EtwWrite(
        (REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
        &ACPI_ETW_EVENT_PCC_PLATFORM_INTERRUPT,
        0LL,
        1u,
        &UserData);
    }
  }
}
