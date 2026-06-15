/*
 * XREFs of ?DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z @ 0x1800187E0
 * Callers:
 *     ?GetSoundLevel@AudioStateMonitorManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18000D2E4 (-GetSoundLevel@AudioStateMonitorManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW.c)
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18004718C (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DeriveAudioServerStreamCategory(unsigned int a1, __int64 a2, unsigned int *a3)
{
  if ( a1 > 0xE )
    return 2147942487LL;
  *a3 = 0;
  if ( a1 )
    *a3 = dword_180056968[a1];
  return 0LL;
}
