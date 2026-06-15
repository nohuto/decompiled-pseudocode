/*
 * XREFs of _freea @ 0x18005C47C
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18000D100 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x18005C210 (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800C9090 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 * Callees:
 *     <none>
 */

void __cdecl freea(void *Memory)
{
  _DWORD *v1; // rcx

  if ( Memory )
  {
    v1 = (char *)Memory - 16;
    if ( *v1 == 56797 )
      free(v1);
  }
}
