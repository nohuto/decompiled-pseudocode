/*
 * XREFs of PpmEventTraceFailedPerfCheckStart @ 0x1404B5160
 * Callers:
 *     PpmCheckPeriodicStart @ 0x1402035D0 (PpmCheckPeriodicStart.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceFailedPerfCheckStart(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  __int64 v2; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_FAILED_START) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 8;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_PERF_CHECK_FAILED_START, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
