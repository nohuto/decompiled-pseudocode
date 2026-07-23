/*
 * XREFs of LdrpGenSecurityCookie @ 0x1800357E0
 * Callers:
 *     LdrInitSecurityCookie @ 0x1800355A0 (LdrInitSecurityCookie.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x180160670 (NtQueryPerformanceCounter.c)
 */

unsigned __int64 __fastcall LdrpGenSecurityCookie(__int64 a1)
{
  unsigned __int64 v2; // rdi
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  v2 = LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) ^ MEMORY[0x7FFE0014] ^ (unsigned __int64)MEMORY[0x7FFE0018] ^ (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) ^ ((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24 << 24);
  NtQueryPerformanceCounter(&PerformanceCounter, 0LL);
  return a1 ^ v2 ^ PerformanceCounter.QuadPart ^ ((unsigned __int64)PerformanceCounter.LowPart << 32);
}
