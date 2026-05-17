/*
 * XREFs of LdrpGenSecurityCookie @ 0x180008DE0
 * Callers:
 *     LdrInitSecurityCookie @ 0x180008BA0 (LdrInitSecurityCookie.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x1801622B0 (NtQueryPerformanceCounter.c)
 */

unsigned __int64 __fastcall LdrpGenSecurityCookie(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) ^ MEMORY[0x7FFE0014] ^ (unsigned __int64)MEMORY[0x7FFE0018] ^ (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) ^ ((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24 << 24);
  NtQueryPerformanceCounter(&v4, 0LL);
  return a1 ^ v2 ^ v4 ^ ((unsigned __int64)(unsigned int)v4 << 32);
}
