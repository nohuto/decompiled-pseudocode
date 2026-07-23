/*
 * XREFs of PpmEventTraceLPIState @ 0x1404B5C60
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PpmEventTraceLPIState()
{
  int v0; // [rsp+40h] [rbp-38h] BYREF
  int v1; // [rsp+44h] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_LPI_RUNDOWN) )
    {
      UserData.Reserved = 0;
      v5 = 0;
      v0 = PpmParkLpiCap;
      v1 = PpmParkLpiEngaged;
      UserData.Ptr = (ULONGLONG)&v0;
      v3 = &v1;
      UserData.Size = 4;
      v4 = 4;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_LPI_RUNDOWN, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
