/*
 * XREFs of AcpiDiagTraceModernStandbyStateNotification @ 0x140098E14
 * Callers:
 *     ACPIPepWnfCallback @ 0x1400A1920 (ACPIPepWnfCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceModernStandbyStateNotification(int a1, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v3; // [rsp+40h] [rbp-28h]
  int v4; // [rsp+48h] [rbp-20h]
  int v5; // [rsp+4Ch] [rbp-1Ch]
  int v6; // [rsp+70h] [rbp+8h] BYREF
  int v7; // [rsp+78h] [rbp+10h] BYREF

  v7 = a2;
  v6 = a1;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_MS_STATE_NOTIFICATION) )
    {
      UserData.Reserved = 0;
      v5 = 0;
      UserData.Ptr = (unsigned __int64)&v6;
      UserData.Size = 4;
      v3 = &v7;
      v4 = 4;
      EtwWrite(
        (REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
        &ACPI_ETW_EVENT_MS_STATE_NOTIFICATION,
        0LL,
        2u,
        &UserData);
    }
  }
}
