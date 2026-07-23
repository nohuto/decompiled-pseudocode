/*
 * XREFs of MiGenerateSecureCookie @ 0x1407EE094
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 MiGenerateSecureCookie()
{
  unsigned __int64 UnbiasedInterruptTime; // rcx
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r11
  unsigned __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax

  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v1 = __rdtsc();
  v2 = (unsigned __int64)HIDWORD(v1) << 32;
  v4 = *(unsigned int *)(v3 + 34384) ^ *(unsigned int *)(v3 + 11576) ^ (((UnbiasedInterruptTime >> 28) ^ (v2 | (unsigned int)v1)) >> 4) ^ (UnbiasedInterruptTime << 32);
  v7 = (unsigned __int64)(unsigned int)ExGenRandom(0, v2, v5, v6) << 32;
  result = v4 ^ (v7 | (unsigned int)ExGenRandom(0, v8, v9, v10));
  if ( !result )
    return 1LL;
  return result;
}
