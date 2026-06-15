/*
 * XREFs of ?GenerateStreamIdentifier@@YA_JXZ @ 0x18006DAD4
 * Callers:
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG_N@Z @ 0x1800B7EBC (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     ?RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEBUtWAVEFORMATEX@@PEBG@Z @ 0x1800C9358 (-RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM.c)
 * Callees:
 *     <none>
 */

__int64 GenerateStreamIdentifier(void)
{
  __int64 result; // rax

  do
    result = _InterlockedIncrement64(&CAudioStream::s_llStreamIdentifier);
  while ( !result );
  return result;
}
