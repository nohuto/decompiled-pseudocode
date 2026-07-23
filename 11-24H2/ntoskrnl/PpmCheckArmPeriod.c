/*
 * XREFs of PpmCheckArmPeriod @ 0x1404A6A14
 * Callers:
 *     PpmCheckReInit @ 0x140A6B620 (PpmCheckReInit.c)
 * Callees:
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     PpmCheckResetProcessors @ 0x1405D41E0 (PpmCheckResetProcessors.c)
 */

char PpmCheckArmPeriod()
{
  __int64 v0; // rbx
  char result; // al
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = PpmCheckMinimumPeriod;
  result = PpmCheckArmed;
  if ( 10000 * (unsigned __int64)HIDWORD(PpmCurrentProfile[0][61 * dword_140F0B38C + 9]) > PpmCheckMinimumPeriod )
    v0 = 10000LL * HIDWORD(PpmCurrentProfile[0][61 * dword_140F0B38C + 9]);
  if ( !PpmCheckArmed )
    goto LABEL_8;
  if ( v0 != PpmCheckPeriod )
  {
    _InterlockedExchange64(&PpmCheckLastEffectiveExecutionTime, 0LL);
    result = 0;
    PpmCheckArmed = 0;
  }
  if ( !result )
  {
LABEL_8:
    PpmCheckPeriod = v0;
    PpmCheckResetProcessors(0LL);
    result = _InterlockedExchange64(&PpmCheckLastEffectiveExecutionTime, 1LL);
    PpmCheckArmed = 1;
    if ( PpmCheckTimerImplementation )
    {
      v2[0] = 0LL;
      v2[1] = -1LL;
      return KeSetTimer2((__int64)&PpmCheckTimer, (LARGE_INTEGER)-v0, v0, (__int64)v2);
    }
  }
  return result;
}
