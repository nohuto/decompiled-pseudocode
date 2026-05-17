/*
 * XREFs of InitSecurityCookie @ 0x180002B48
 * Callers:
 *     LdrpInitialize @ 0x180002A48 (LdrpInitialize.c)
 * Callees:
 *     LdrpGenRandom @ 0x180002BC0 (LdrpGenRandom.c)
 *     LdrInitSecurityCookie @ 0x1800223C0 (LdrInitSecurityCookie.c)
 *     ZwDelayExecution @ 0x1801638A0 (ZwDelayExecution.c)
 */

__int64 InitSecurityCookie()
{
  __int64 result; // rax
  int v1; // eax
  signed __int32 v2[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned int)_InterlockedIncrement(&SecurityCookieInitCount);
  if ( (_DWORD)result == 1 )
  {
    v1 = LdrpGenRandom();
    result = LdrInitSecurityCookie(0, 0, (unsigned int)&_security_cookie, v1 ^ (unsigned int)dword_1801EC4D8, 0LL);
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
