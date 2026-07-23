/*
 * XREFs of InitSecurityCookie @ 0x18002C338
 * Callers:
 *     LdrpInitialize @ 0x18002C238 (LdrpInitialize.c)
 * Callees:
 *     LdrpGenRandom @ 0x18002C3B0 (LdrpGenRandom.c)
 *     LdrInitSecurityCookie @ 0x1800355A0 (LdrInitSecurityCookie.c)
 *     ZwDelayExecution @ 0x1801606D0 (ZwDelayExecution.c)
 */

NTSTATUS InitSecurityCookie()
{
  NTSTATUS result; // eax
  signed __int32 v1[8]; // [rsp+0h] [rbp-38h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+40h] [rbp+8h] BYREF

  result = _InterlockedIncrement(&SecurityCookieInitCount);
  if ( result == 1 )
  {
    LdrpGenRandom();
    result = LdrInitSecurityCookie(0LL, 0LL);
    _InterlockedOr(v1, 0);
    SecurityCookieInitialized = 1;
  }
  else
  {
    DelayInterval.QuadPart = -300000LL;
    while ( !SecurityCookieInitialized )
      result = ZwDelayExecution(0, &DelayInterval);
  }
  return result;
}
