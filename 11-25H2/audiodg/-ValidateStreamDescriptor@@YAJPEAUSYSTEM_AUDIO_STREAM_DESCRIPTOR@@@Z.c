/*
 * XREFs of ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x140007B28
 * Callers:
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005F80 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x140039F18 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateAudioStreamDirection@@YAJW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x1400497C8 (-ValidateAudioStreamDirection@@YAJW4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
 */

__int64 __fastcall ValidateStreamDescriptor(struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  const struct tWAVEFORMATEX *v3; // rcx

  if ( !a1 )
    return 2147500035LL;
  result = ValidateAudioStreamDirection(*(unsigned int *)a1, a1);
  if ( (int)result < 0 )
    return result;
  if ( *(_DWORD *)(v2 + 120) < 0x12u )
    return 2147942487LL;
  v3 = *(const struct tWAVEFORMATEX **)(v2 + 128);
  if ( !v3 )
    return 2147500035LL;
  if ( v3->wFormatTag == 0xFFFE && *(_DWORD *)(v2 + 120) < 0x28u )
    return 2147942487LL;
  result = ValidateWaveFormatEx(v3);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
