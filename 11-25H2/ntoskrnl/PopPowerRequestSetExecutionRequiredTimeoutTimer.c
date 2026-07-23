/*
 * XREFs of PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x14073DD8C
 * Callers:
 *     PopUpdatePdcSystemIdleState @ 0x140A1ED14 (PopUpdatePdcSystemIdleState.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x140AA7B30 (PopPowerRequestExecutionRequiredSettingCallback.c)
 * Callees:
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 */

__int64 PopPowerRequestSetExecutionRequiredTimeoutTimer()
{
  unsigned __int64 v0; // rdx
  __int64 v1; // rdx
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( byte_140F0D8B3 && PopExecutionRequiredTimeout )
  {
    v0 = 10000000LL * (unsigned int)PopExecutionRequiredTimeout;
    if ( MEMORY[0xFFFFF78000000008] - qword_140F0D8B8 < v0 )
      v1 = v0 - (MEMORY[0xFFFFF78000000008] - qword_140F0D8B8);
    else
      v1 = 10000000LL;
    v3[1] = -1LL;
    v3[0] = 0LL;
    return KeSetTimer2((__int64)&PopPowerRequestExecutionRequiredTimeoutTimer, (LARGE_INTEGER)-v1, 0LL, (__int64)v3);
  }
  return result;
}
