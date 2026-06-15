/*
 * XREFs of ?StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x1800414F4
 * Callers:
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000B560 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180011B50 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall StreamTypeToString(unsigned int a1)
{
  if ( a1 > 3 )
    return L"unknown";
  else
    return off_1800517A8[a1];
}
