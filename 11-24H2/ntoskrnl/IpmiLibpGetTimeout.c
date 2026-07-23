/*
 * XREFs of IpmiLibpGetTimeout @ 0x1406A10E0
 * Callers:
 *     IpmiLibpKcsRequestAndReceive @ 0x1406A14A4 (IpmiLibpKcsRequestAndReceive.c)
 *     IpmiLibpKcsSpinRegister @ 0x1406A173C (IpmiLibpKcsSpinRegister.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

LONGLONG __fastcall IpmiLibpGetTimeout(__int64 a1, unsigned int a2)
{
  LARGE_INTEGER v3; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
  return v3.QuadPart + PerformanceFrequency.QuadPart / 1000000 * a2;
}
