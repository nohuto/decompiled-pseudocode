/*
 * XREFs of MiGenerateSecureCookie @ 0x1407DDC24
 * Callers:
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14042F3F0 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 MiGenerateSecureCookie()
{
  unsigned __int64 UnbiasedInterruptTime; // rcx
  unsigned __int64 v1; // rax
  __int64 v2; // r11
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 result; // rax

  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v1 = __rdtsc();
  v3 = *(unsigned int *)(v2 + 34384) ^ *(unsigned int *)(v2 + 11576) ^ (((UnbiasedInterruptTime >> 28) ^ (((unsigned __int64)HIDWORD(v1) << 32) | (unsigned int)v1)) >> 4) ^ (UnbiasedInterruptTime << 32);
  v4 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  result = v3 ^ (v4 | (unsigned int)ExGenRandom(0));
  if ( !result )
    return 1LL;
  return result;
}
