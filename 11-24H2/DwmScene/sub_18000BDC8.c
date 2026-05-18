/*
 * XREFs of sub_18000BDC8 @ 0x18000BDC8
 * Callers:
 *     DllEntryPoint @ 0x18000B630 (DllEntryPoint.c)
 * Callees:
 *     <none>
 */

__int64 sub_18000BDC8()
{
  uintptr_t v0; // rax
  __int64 result; // rax
  _FILETIME v2; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+10h] BYREF
  _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp+18h] BYREF

  v0 = _security_cookie;
  if ( _security_cookie == 0x2B992DDFA232LL )
  {
    SystemTimeAsFileTime = 0LL;
    PerformanceCount.QuadPart = 0LL;
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v2 = SystemTimeAsFileTime;
    v2 = (_FILETIME)(GetCurrentThreadId() ^ *(unsigned __int64 *)&v2);
    v2 = (_FILETIME)(GetCurrentProcessId() ^ *(unsigned __int64 *)&v2);
    QueryPerformanceCounter(&PerformanceCount);
    v0 = ((unsigned __int64)&v2 ^ *(_QWORD *)&v2 ^ PerformanceCount.QuadPart ^ ((unsigned __int64)PerformanceCount.LowPart << 32)) & 0xFFFFFFFFFFFFLL;
    if ( v0 == 0x2B992DDFA232LL )
      v0 = 0x2B992DDFA233LL;
    _security_cookie = v0;
  }
  result = ~v0;
  qword_1801C3BC0 = result;
  return result;
}
