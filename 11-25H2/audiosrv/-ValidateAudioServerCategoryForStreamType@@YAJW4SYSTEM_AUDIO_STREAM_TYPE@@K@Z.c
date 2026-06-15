/*
 * XREFs of ?ValidateAudioServerCategoryForStreamType@@YAJW4SYSTEM_AUDIO_STREAM_TYPE@@K@Z @ 0x1800A6CB8
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18008C450 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateAudioServerCategoryForStreamType(unsigned int a1, unsigned int a2)
{
  __int64 v2; // rax

  if ( a1 > 3 )
    return 2147942487LL;
  if ( !a1 )
  {
    if ( dword_18018F780[3 * a2] )
      return 0LL;
LABEL_4:
    v2 = 3LL * a2;
    if ( a1 == 2 )
    {
      if ( dword_18018F780[v2 + 2] )
        return 0LL;
      return 2147942487LL;
    }
    goto LABEL_9;
  }
  if ( a1 != 1 )
    goto LABEL_4;
  v2 = 3LL * a2;
  if ( dword_18018F780[v2 + 1] )
    return 0LL;
LABEL_9:
  if ( a1 == 3 )
    return dword_18018F780[v2 + 2] == 0 ? 0x80070057 : 0;
  return 2147942487LL;
}
