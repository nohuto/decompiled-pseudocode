/*
 * XREFs of _lambda_9219152d4e141db21e4330029f5108f8_::_lambda_9219152d4e141db21e4330029f5108f8_ @ 0x1800C0978
 * Callers:
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180020D60 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x1800567B0 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_9219152d4e141db21e4330029f5108f8_::_lambda_9219152d4e141db21e4330029f5108f8_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *result; // rax

  a1[3] = a5;
  a1[4] = a6;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
