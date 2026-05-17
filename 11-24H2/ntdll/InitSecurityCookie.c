/*
 * XREFs of InitSecurityCookie @ 0x1800974E8
 * Callers:
 *     LdrpInitialize @ 0x1800973E8 (LdrpInitialize.c)
 * Callees:
 *     LdrInitSecurityCookie @ 0x180008BA0 (LdrInitSecurityCookie.c)
 *     LdrpGenRandom @ 0x180097560 (LdrpGenRandom.c)
 *     ZwDelayExecution @ 0x180162310 (ZwDelayExecution.c)
 */

__int64 InitSecurityCookie()
{
  __int64 result; // rax
  __int64 v1; // rax
  signed __int32 v2[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned int)_InterlockedIncrement(&SecurityCookieInitCount);
  if ( (_DWORD)result == 1 )
  {
    v1 = LdrpGenRandom();
    result = LdrInitSecurityCookie(0LL, 0, &_security_cookie, v1 ^ (unsigned int)dword_1801EA4E8, 0LL);
    _InterlockedOr(v2, 0);
    SecurityCookieInitialized = 1;
  }
  else
  {
    v3 = -300000LL;
    while ( !SecurityCookieInitialized )
      result = ZwDelayExecution(0LL, &v3);
  }
  return result;
}
