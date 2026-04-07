/*
 * XREFs of ?ResultFromKnownLastError@@YAJXZ @ 0x180003CA8
 * Callers:
 *     ?Init@CImmersiveOrPrimaryMonitor@@AEAAJPEAUHMONITOR__@@@Z @ 0x180004998 (-Init@CImmersiveOrPrimaryMonitor@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z @ 0x18005A5E0 (-_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z.c)
 * Callees:
 *     <none>
 */

signed int ResultFromKnownLastError(void)
{
  signed int result; // eax

  result = GetLastError();
  if ( result > 0 )
    result = (unsigned __int16)result | 0x80070000;
  if ( result >= 0 )
    return -2147467259;
  return result;
}
