/*
 * XREFs of PopEsStartTelemetry @ 0x140AA85F0
 * Callers:
 *     PopEsExitSleep @ 0x140AA85C0 (PopEsExitSleep.c)
 *     PopEsWorker @ 0x140AAAEB0 (PopEsWorker.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 */

char PopEsStartTelemetry()
{
  __int64 v0; // rbx
  int v1; // r8d
  int v2; // ecx
  char v3; // al
  char result; // al
  __m128i v5; // [rsp+20h] [rbp-38h]

  v0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0ACB0);
  v5 = (__m128i)xmmword_140F0ACC0;
  PopReleaseRwLock((signed __int64 *)&xmmword_140F0ACB0);
  v1 = 0;
  PopEsLastStateChangeTimeStamp = v0;
  v2 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 12));
  v3 = _mm_cvtsi128_si32(v5);
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v5, 1)) )
    v1 = v2;
  PopEsAcOnline = v3;
  PopEsLastBatteryThreshold = dword_140F0B750;
  result = byte_140F0B755;
  PopEsLastUserAwaySetting = byte_140F0B755;
  PopEsLastBatteryCharge = v1;
  return result;
}
